//
//  EBayPipelineHandler.h
//  eBayMobileSDK
//
//  Created on 9/22/10.
//

#import <Foundation/Foundation.h>

@class EBayTransactionContext;

/**
	The protocol that must be implemented by a custom request or response handler.
	Custom handlers can be added in the service configuration file in the 
	<request-pipeline> and/or <response-pipeline> section of the XML.

	@code
	<request-pipeline>
		<handler name="MyConnectionMonitorHandler">
			<class-name>MyConnectionMonitorHandler</class-name>
		</handler>
		<handler name="SecurityHandler">
			<class-name>eBayLoginHandler</class-name>  
		</handler>
		<handler name="eBaySvcInvocationHandler">
			<class-name>eBaySvcInvocationHandler</class-name>
			<option name="MyOption">MyValue</option>
		</handler>
	</request-pipeline>
	@endcode

	Each registered handler has the chance to process the request or the response (depending which pipeline it was added to).
	They are called in sequential order as specified in the service configuration file.
	Some handlers are provided with the library and are required for it to work (without proper replacements).

	@ingroup extensibility
 */
@protocol EBayPipelineHandler<NSObject>

@required
/**
	Initializer with options.

	@param[in] options Key-value pairs of NSStrings. They can be set in the configuration file under 
	the component they customize (e.g. <option name="OptionKey">OptionValue</option>).
	@return An initialized instance of this class.
 
	@throw EBayException If the handler could not be instantiated or configured.
 */
-(id) initWithOptions:(NSDictionary*)options;

/**
	Handler entry-point. This method gets called when the handler has the chance to process the request or response.

	@param[in] context The transaction context that encapsulates the request/response and service configuration.
 */
-(void) handle: (EBayTransactionContext*)context;

@end
