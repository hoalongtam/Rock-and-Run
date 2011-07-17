//
//  EBayTransactionContext.h
//  eBayMobileSDK
//
//  Created on 9/23/10.
//

#import <Foundation/Foundation.h>

@class EBayRequestContext;
@class EBayResponseContext;
@class EBayRetryContext;

@protocol EBayServiceDelegate;
@protocol EBayTransportDelegate;

@class EBayServiceClientConfig;
@class EBayOAuthClient;
@protocol EBayServiceAccessPolicy;


/**
	The context for a transaction (i.e. request/response pair).
 
	This class encapsulates the data needed for an eBay service transaction.
	@ingroup extensibility
 */
@interface EBayTransactionContext : NSObject
{
	id request_;
	id response_;

	EBayRequestContext *requestContext_;
	EBayResponseContext *responseContext_;
	EBayRetryContext *retryContext_;

	id<EBayServiceDelegate> responseDelegate_;
	id<EBayTransportDelegate> transportDelegate_;

	EBayServiceClientConfig *config_;
	EBayOAuthClient* oauth_;
	id<EBayServiceAccessPolicy> accessPolicy_;

	NSThread *callerThread_;
}


/**
	The request object with all the details needed for the service call that was passed to the invoker.
 */
@property (nonatomic, retain) id request;

/**
	The response object containing all the relevant data received in reply for the request.
    It is nil before a reply is received or if the response is a system error.
 */
@property (nonatomic, retain) id response;


/**
	Additional data for the request, like headers and query parameters.
 */
@property (readonly) EBayRequestContext *requestContext;

/**
	Additional data for the response, like headers and the response code.
 */
@property (readonly) EBayResponseContext *responseContext;

/**
	Additional data used when retrying a request, like the retry count.
 */
@property (readonly) EBayRetryContext *retryContext;

/**
	The delegate object that will be notified of the resolution for a request.
    When the transaction is finalized (successfully or not) exactly one of the delegate's methods from the EBayServiceDelegate protocol is called.
	This is the value the user specified when invoking a request.
 */
@property (nonatomic, assign) id<EBayServiceDelegate> responseDelegate;

/**
	The delegate to be notified of the transport process result.
    The transport is usually an asynchronous process. When the transport process is completed, this delegate should be notified of the result.

	@attention DO NOT CHANGE this system set value, otherwise the SDK will not function properly.
 */
@property (nonatomic, assign) id<EBayTransportDelegate> transportDelegate;

/**
	The configuration of the service.
	Holds the settings loaded from the service configuration file and the runtime settings.
 */
@property (nonatomic, assign) EBayServiceClientConfig *config;

/**
	The client that manages the authentication for authenticated services.
	For unauthenticated services, it's nil.
 */
@property (nonatomic, assign) EBayOAuthClient *oauth;

/**
	Holds the access policy used for the service.
	It is set by the system. Should not be changed. If you need a custom access policy, you can specify one in the service configuration file.
 */
@property (nonatomic, assign) id<EBayServiceAccessPolicy> accessPolicy;

/**
	The thread the invocation was made on.
	
	@attention DO NOT CHANGE this system set value, otherwise, upon transaction completion, the client will be notified on the wrong thread.
               The convention is that the client is notified on the thread that made the invocation.
 */
@property (nonatomic, assign) NSThread *callerThread;

/**
	Call when you need to prepare the transaction for a retry.
 	Creates a new request and response context and removes the old response.
 */
-(void) prepareForRetry;

/**
	Returns YES if the request will have a body when being sent over the network. (i.e. will be a POST with body for HTTP transport).
	Currently all requests that don't have Nave-Value binding will have a body.
 */
-(BOOL) requestHasBody;

@end
