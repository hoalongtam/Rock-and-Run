//
//  EBayOAuthClient.h
//  eBayMobileSDK
//
//  Created on 10/12/10.
//

@class EBayOAuthView;

#import "EBayServiceDelegate.h"

@class NSCondition;
@class KeychainIAFTokenItem;
@protocol EBayServiceDelegate;

@class EBayError;

/**
	Handles the eBay authentication process. Provides the application with
	the IAF token needed for authenticated requests (Trading API).
 
	When requesting the first time the IAF token, the user is asked to sign-in
	using a secured web page that is displayed. After the token is obtained
    it is stored and reused until it is removed by calling resetIAFToken.
 */
@interface EBayOAuthClient : NSObject
{
	BOOL authenticationDonePhase1_;
	BOOL authenticationDonePhase2_;
	NSCondition* authenticationDoneCondition_;
	EBayError* authenticationError_;

	EBayOAuthView* authenticationView_;
	KeychainIAFTokenItem* keychainItem_;
}

- (id) initWithApplication:(NSString*)appID 
				   address:(NSString*)address;

/**
	Call to get the IAF token needed for authenticated requests.

	@param[out] ppError This parameter is assigned an error in case the authentication process isn't successful.
	@returns The IAF token, or nil if not successful.
 
	@remark	A call to this method will block if there is an ongoing authentication running on a different thread.
			Once the ongoing authentication is done, the call will return the obtained token if successfully retrieved
			or will start a new authentication process if the other one failed.
 
	@see resetIAFToken
 */
- (NSString*) getIAFTokenOrError:(EBayError**)ppError;

/**
	Call to remove the stored token. The next call to getIAFTokenOrError: will trigger a new authentication process.
	Does not perform a server side invalidation of the token.

	@see getIAFTokenOrError:
	@see resetIAFTokenWithDelegate:
 */
- (void) resetIAFToken;

/**
	Returns YES if there is a valid stored (i.e. a user is logged in).
	@returns YES if there is a token stored, else NO.
 */
- (BOOL) hasIAFToken;

/**
	Changes the sign-in page address for authentication.
 
	@param[in]	address	The new address to use for authentication.
 
	@note	The address should be retrieved from the access policy for the current environment.
	@see EBayServiceAccessPolicy::authenticationEndpointForEnvironment:
 */
- (void) setAddress:(NSString*)address;

/**
   Get the full url for authentication, mainly for debug purpose.
   @returns string representation of the url
 */
- (NSString *) getAuthUrl;


@end
