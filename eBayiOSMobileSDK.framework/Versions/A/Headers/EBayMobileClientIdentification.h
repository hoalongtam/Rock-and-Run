//
//  EBayMobileClientIdentification.h
//  eBayMobileSDK
//
//  Created on 10/5/10.
//

#import <Foundation/Foundation.h>

/**
	Mobile identification class.
 
	Use it to obtain the unique device fingerprint that is needed by the eBay calls.
 	@ingroup extensibility
 */
@interface EBayMobileClientIdentification : NSObject
{
}

/**
	Returns the unique mobile fingerprint for the device the code is running on.
	The code has the format: "uuid, iccc, c", where:
	@li uuid is generated from a namespace and the native device identifier.
	@li iccc is the international country calling code. Currently only US is supported.
	@li c is the carrier network designation.
	
	For the same device it returns the same fingerprint each time. For different devices
	it returns different fingerprints (with a very high probability).
 
	@return The unique device identifier.
 */
+(NSString*) mobileIdentifier;


/**
	The SDK will construct the user-agent header behind the scene, and send it as HTTP header on every API call. 
	This allows server-side to identify information about the client, in particular:
	@li 3rd party app name and version
	@li Device platform (Android, iPhone)
	@li OS version (Android 2.2 or iOS4.0)
	@li eBay SDK version
 
	@return A string describing the user agent.
 */
+(NSString*) userAgent;

/**
 The SDK will construct the user-agent header behind the scene, and send it as HTTP header on every API call. 
 This allows server-side to identify information about the client, in particular:
 @li 3rd party app name and version
 @li Device platform (Android, iPhone)
 @li OS version (Android 2.2 or iOS4.0)
 @li eBay SDK version
 
 @return A string describing the user agent.
 */
+(NSString*) userAgentPrime;
@end
