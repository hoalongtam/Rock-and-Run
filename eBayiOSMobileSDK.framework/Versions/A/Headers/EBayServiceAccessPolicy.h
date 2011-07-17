//
//  EBayServiceAccessPolicy.h
//  eBayMobileSDK
//
//  Created on 9/20/10.
//

#import <Foundation/Foundation.h>

/**
 The protocol that must be implemented by a custom access policy class.
 A custom access policy can be set in the service configuration file in the <access-policy> section of the XML.
 Its responsibilities are to provide the allowed environments together with their appropriate service locations,
  to provide the allowed data bindings (xml, json, etc.) and to identify the requests that need authentication.
 @code
 <access-policy name="MySpecialAccessPolicy">
	<class-name>MySpecialAccessPolicyClass</class-name>
	<option name="Name">Value</option>
 </access-policy>
 @endcode

 @ingroup extensibility
 */
@protocol EBayServiceAccessPolicy<NSObject>
@required

/**
 Checks if a request needs authentication.
 @param request The request object.
 @return YES if the request needs authentication, NO otherwise. If the request is not of a known type for the access policy, it will return NO.
 */
-(BOOL) requiresAuthentication:(id)request;

/**
 Checks if the service supports a particular binding.
 @param binding The binding name. e.g. @"xml", @"json".
 @return YES if the service supports the specified binding, NO otherwise.
 @note The binding names' case should not matter.
 */
-(BOOL) supportsBinding:(NSString*)binding;

/**
 Checks if the service supports a particular environment.
 @param environment The environment name.
 @return YES if the service supports the specified environment, NO otherwise.
 @note The environment names' case should not matter.
 @attention The access policy should support at least @"production" as environment.

 @see kEnviromentProduction
 @see kEnviromentSandbox
 */
-(BOOL) supportsEnvironment:(NSString*)environment;

/**
 Checks if the locale specific signin site is supported.
 @param localeIdentifier The locale identifier.
 @return YES if the locale specific signin site is supported, NO otherwise.
 @attention The access policy should support at least @"en_US" as signin locale.
 */
-(BOOL) supportsSinginLocale:(NSString*)localeIdentifier;

/**
 Returns the service location URL for the given environment.

 @param environment The environment the requests will be sent to.
 @return The service location URL for the environment, or nil if the environment is not supported.

 @see kEnviromentProduction
 @see kEnviromentSandbox
 */
-(NSString*) serviceLocationForEnvironment:(NSString*)environment;

/**
 Returns the authentication URL (sign-in page address) for the given environment.

 @param environment The environment for which the authentication endpoint (sign-in page address) is needed.
 @param localeIdentifier The locale identifier, such as 'en_US', 'de_DE', for locale specific authentication endpoint. 
 @return The URL of the authentication page for the environment, or nil if the environment is not supported.

 @see kEnviromentProduction
 @see kEnviromentSandbox
 */
-(NSString*) authenticationEndpointForEnvironment:(NSString*)environment locale:(NSString*)localeIdentifier;

@end
