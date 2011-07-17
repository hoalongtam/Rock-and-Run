//
//  EBayTransport.h
//  eBayMobileSDK
//
//  Created on 9/22/10.
//

#import <Foundation/Foundation.h>

@class EBayTransactionContext;

/**
	The protocol that must be implemented by a custom transport layer.
	A custom transport can be set in the service configuration file in the <transport> section of the XML.
 	@code
	<transport name="Morse Code Transport">
		<class-name>MyUniqueMorseCodeTransport</class-name>
		<option name="wordsPerMinute">160</option>
	</transport>
	@endcode

	@remark The transport can be either synchronous or asynchronous, but must call the EBayTransportDelegate methods appropriately.
			The transport delegate object is provided in the transaction context.

	@remark	If the transport is made synchronously, canceling the request will wait for the transport to finish if issued while transport is running.

	@ingroup extensibility
 */
@protocol EBayTransport<NSObject>

@required

/**
	Initializer with options.
 
	@param[in] options	Key-value pairs of NSStrings. They can be set in the configuration file under 
						the component they customize (e.g. <option name="OptionKey">OptionValue</option>).
	@return An initialized instance of this class.
 
	@throw EBayException If the transport layer could not be instantiated or configured.
 */
-(id) initWithOptions:(NSDictionary*)options;

/**
	Gets called by the library when the serialized request data is ready to be sent.
	@param data		The serialized data to send.
	@param context	The transaction for which we are transporting data.
 
	@attention	Upon successful completion of the transport, onTransportCompleted: must be called (once) on the transport delegate.
				Upon failure to transport the data, onTransportFailed:withErrors: must be called (once) on the transport delegate.
				The errors must be provided as an array of EBayError objects.
 */
-(void) executeWithData:(NSData*)data andContext:(EBayTransactionContext*)context;

/**
	Cancel sending data for a particular transaction. 
	@param context The transaction for which we are transporting data.

	@attention	Upon completion of the canceling, onTransportCanceled: on the transport delegate must be called (once).
 */
-(void) cancel:(EBayTransactionContext*)context;


@end
