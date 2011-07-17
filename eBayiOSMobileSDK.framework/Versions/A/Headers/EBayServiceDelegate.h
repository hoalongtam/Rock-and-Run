//
//  EBayServiceDelegate.h
//  eBayMobileSDK
//
//  Created on 9/27/10.
//

#import <Foundation/Foundation.h>

@class EBayError;

/**
	The protocol the service clients must implement and specify when invoking a service 
	in order to be notified on the outcome of their requests.
	For each invoked request only one of the protocol methods is called to mark completion.
    A request is not completed until one of these methods is called.
	The delegate's methods are called on the same thread that made the request invocation.

	@ingroup services
 */
@protocol EBayServiceDelegate
@required

/**
	Called when the request was completed successfully.
	The delegate should cast the response object to the appropriate type for the request
	(e.g. Request FindingService_FindItemsByKeywordsRequest is paired with response FindingService_FindItemsByKeywordsResponse).

	@param response	The received response
	@param request	The invoked request.
 */
- (void)didReceiveResponse:(id)response forRequest:(id)request;

/**
	Called when the request failed.
	@param errors	Array of errors that occurred. Each error is of type EBayError.
	@param request	The invoked request.

	@see EBayError for a description of the errors.
 */
- (void)didFailWithErrors:(NSArray*)errors forRequest:(id)request;

/**
	Called when the request finished canceling.
	@param request	The invoked request.
 */
- (void)didCancelRequest:(id)request;

@end
