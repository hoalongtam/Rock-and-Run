//
//  EBayErrorResolver.h
//  eBayMobileSDK
//
//  Created on 9/22/10.
//

#import <Foundation/Foundation.h>

@class EBayTransactionContext;

/**
	The protocol that must be implemented by a custom error resolver.
	A custom error resolver can be set in the service configuration file in the <error-resolver> section of the XML.
	@code
	<error-resolver name="CustomErrorResolver">
		<class-name>MyCustomErrorResolver</class-name>
		<option name="opKey">opValue</option>
	</error-resolver>
	@endcode
 
	@ingroup extensibility
 */
@protocol EBayErrorResolver<NSObject>

@required

/**
	Initializer with options.

	@param[in] options	Key-value pairs of NSStrings. They can be set in the configuration file under 
						the component they customize (e.g. <option name="OptionKey">OptionValue</option>).
	@return An initialized instance of this class.
 
	@throw EBayException If the error could not be instantiated or configured.
 */
-(id) initWithOptions:(NSDictionary*)options;

/**
	Checks the response for system errors. System errors are indicated by the response status code or by error headers present in the response for SOA services.

	@param[in] context The transaction context.
	@returns YES if a system error occurred, NO otherwise.
 */
-(BOOL) responseHasSystemError:(EBayTransactionContext*)context;

/**
	Extracts an array of system errors from the response.
	@param[in] context The transaction context.
	@returns An array of system errors.
 */
-(NSArray*) systemErrorsForResponseWithContext:(EBayTransactionContext*)context;

/**
	Checks the response for application errors. Application errors are present in the response body.

	@param[in] context The transaction context.
	@returns YES if an application error occurred, NO otherwise.
 */
-(BOOL) responseHasApplicationError:(EBayTransactionContext*)context;

/**
	Extracts an array of application errors from the response.

	@param[in] context The transaction context.
	@returns An array of application errors.
 */
-(NSArray*) applicationErrorsForResponseWithContext:(EBayTransactionContext*)context;

/**
	Allows taking action for the errors encountered in a transaction.

	@param[in] errors An array of EBayError objects that need to be handled.
	@param[in] context The transaction context.
 */
-(void) handleErrors:(NSArray*)errors forContext:(EBayTransactionContext*)context;

/**
	Called to decide if a request that failed with errors should be retried.
	@param[in] errors  The errors that occurred on the last try.
	@param[in] context The transaction context.
	@returns YES if the request should be automatically retried, NO otherwise.
 */
-(BOOL) shouldRetryForErrors:(NSArray*)errors andContext:(EBayTransactionContext*)context;

@end
