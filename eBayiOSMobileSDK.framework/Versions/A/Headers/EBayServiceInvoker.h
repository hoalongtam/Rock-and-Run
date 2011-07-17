//
//  EBayServiceInvoker.h
//  eBayMobileSDK
//
//  Created on 9/20/10.
//

#import <Foundation/Foundation.h>

/**
 @ingroup extensibility
 @{
 */
extern NSString *kEnvironmentProduction; /**< Use for setting production enviroment. */
extern NSString *kEnvironmentSandbox; /**< Use for setting sandbox enviroment. */
extern NSString *kEnvironmentQA; /**< Use for setting QA enviroment. */
/**
 @}
 */

@class EBayTransactionDispatcher;
@class EBayServiceClientConfig;
@class EBayOAuthClient;
@protocol EBayServiceAccessPolicy;
@protocol EBayServiceDelegate;

/**
	@defgroup extensibility Extensibility
	@ingroup services
 
	Classes needed by <b>advanced</b> users that need to customize various aspects of the invocation.
	The following parts of the invocation can be customized:
	@li Access policies - use custom environments together with their appropriate service locations, 
		specify custom data bindings to be used and specify the requests that need authentication.
	@li Data bindings - customize the format of the data transported in the requests/responses by providing you own (de)serialization classes. 
	@li Error handling - change the way that service errors are handled by the SDK.
	@li Transport - provide your own transport between the application and the server.
 */

/**
	Allows easy consumption of eBay web services.
	At this time there are three services that can be consumed through this library:
	@li Finding service
	@li Shopping service
	@li Trading service

	@remark To obtain a concrete instance of this interface use EBayServiceInvokerFactory.

	@remark Upon creation, the service is configured based on the configuration file that should 
	reside in the application main bundle. The configuration file is an xml and must be named: 
	<b>\<ServiceName\>ClientConfig.xml</b>, where <b>\<ServiceName\></b> is the name of the service 
	(e.g. FindingService, ShoppingService or TradingService).
 
	@remark	The requests that can be invoked on a service are the ones specific to that service
	as defined by the eBay API. Their headers are provided with the library and are prefixed
    by the service name (e.g. FindingService_FindItemsByKeywordsRequest, Shopping_FindProductsRequestType, Trading_AddToWatchListRequestType).

	@remark At the current time, the library does not have support for all requests and responses allowed by the eBay API.
	<p>The supported Finding service operations are: findItemAdvanced, findItemsByCategory, findItemsByKeywords, findItemsByProduct, findItemsIneBayStores, getHistograms, getSearchKeywordsRecommendation.</p>
	<p>The supported Shopping service operations are: FindPopularItems, FindPopularSearches, FindProducts, FindReviewsAndGuides, GetCategoryInfo, GeteBayTime, GetItemStatus, GetMultipleItems, GetShippingCosts, GetSingleItem, GetUserProfile.</p>
	<p>The supported Trading service operations are: AddItem, AddToWatchList, CompleteSale, EndItem, GetAllBidders, GetAPIAccessRules, GetAttributesCS, GetBestOffers, GetCategories, GetCategory2CS, GetCategoryFeatures, GetCategoryMappings, GetCategorySpecifics, GetEbayDetails, GetEbayOfficialTime, GetFeedback, GetItem, GetItemTransactions, GetMyeBayBuying, GetMyeBaySelling, GetMyMessages, GetNotificationPreferences, GetOrders, GetSellerList, GetSellerTransactions, GetShippingDiscountProfiles, GetStore, GetSuggestedCategories, GetUser, GetUserPreferences, LeaveFeedback, PlaceOffer, RelistItem, RemoveFromWatchList, ReviseInventoryStatus, ReviseItem, SetNotificationPreferences, SetShippingDiscountProfiles, UploadSiteHostedPictures, VerifyAddItem, VerifyRelistItem.</p>
  
	@ingroup services
 */
@interface EBayServiceInvoker : NSObject
{
	EBayTransactionDispatcher *dispatcher_;
	EBayServiceClientConfig *clientConfig_;
	EBayOAuthClient* oauthClient_;
	id<EBayServiceAccessPolicy> accessPolicy_;
}

/**
	Performs the invocation of a request. The request must be an instance of a request object 
	supported by the particular service invoker. Upon completion of the request invocation
	one and only one of the EBayServiceDelegate methods is called on the passed in delegate.

	@param[in] request	The request object with all the details needed for the service call.
	@param[in] delegate	The delegate that gets informed about the invocation result. The delegate 
						is not retained. It must remain valid until the time the request is completed.
	@throws EBayException when an error occurs early in the processing (e.g. when the passed in request is invalid).

	@remark		The operation is performed asynchronously and the delegate is called on the 
				same thread that made the call to this method.
 
	@remark		The method is thread safe. Multiple requests can be called simultaneously from multiple threads.

	@attention	The caller should be prepared to handle both exceptions at call time and 
				error announced on the delegate.
 */
-(void) invoke:(id)request withDelegate:(id<EBayServiceDelegate>)delegate;

/**
	Cancels an invoked request. A request is canceled after the didCancelRequest: method is called for it on the delegate.

	@param[in] request A request object that was invoked using the invoke method.
	@throws EBayException when cancel is called for a request that is not being invoked.

	@remark The cancel confirmation method is called on the delegate on the same thread that made the initial invocation,
            no matter the thread cancel is called from.

	@see invoke:withDelegate:
 */
-(void) cancel:(id)request;

/**
	Signs out the user consuming the service.

	Some services (at the present time just Trading) require the user consuming the service to sign in.
	The sign in process is handled entirely by the library - it is triggered by the first request requiring 
	authentication and is completely transparent to the application developer.
	The application can force a sign out by calling this method.

	@throws NSException if the service on which is called doesn't support authentication
 */
-(void) signOut;

/**
	Checks if the user consuming the service is signed in.
 
	Some services (at the present time just Trading) require the user consuming the service to sign in.
	The sign in process is handled entirely by the library - it is triggered by the first request requiring 
	authentication and is completely transparent to the application developer.
	The application can check the sign in status by calling this method. 
 
	@throws NSException if the service on which is called doesn't support authentication
 */
-(BOOL) isSignedIn;

/**
	Allows the application developer to specify custom headers to be included in each invoked request.
	This mechanism is optional and is provided for the convenience of the application developer.

	@param[in] headers A dictionary of headers where the key is the header name and the value is the header value.
 */
-(void) setCustomHeaders:(NSDictionary*)headers;

/**
	Allows the application developer to specify custom query parameters to be appended to each invoked request.
	This mechanism is optional and is provided for the convenience of the application developer.

	@param[in] parameters A dictionary of query parameters where the key is the parameter name and the value is the parameter value.
 */
-(void) setCustomQueryParameters:(NSDictionary*)parameters;

/**
	Enables or disables debug mode.

	By default this is disabled. If enabled, it will log all the requests and responses.
 */
@property (nonatomic) BOOL debugMode;

/**
	The web service's environment.

	This denotes the environment in which the service is hosted (e.g. production, sandbox). 
	This allows developer to easily switch between environments at runtime for testing purposes.

	@note If a custom service location is set, it has precedence and will continue to be used even when changing environments.
		  The service location must be set to nil for the URLs specified in the access policy to be used when changing environments.
    @note When the environment is changed, the defautl service location, application keys, authentication endpoint will be
          changed accordingly.

	@see serviceLocation
	@see kEnvironmentProduction
	@see kEnvironmentSandbox
 */
@property (nonatomic, copy) NSString *environment;

/**
	The web service's location.
	This allows application to override the service URL defined in the configuration file at runtime, for testing purposes.

	@attention The URL must have the protocol prefix set. For example, https://www.mycustom.url.com is of valid form, but www.mycustom.url.com is not.
 */
@property (nonatomic, copy) NSString *serviceLocation;

@end
