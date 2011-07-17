//
//  EBayConfiguration.h
//  eBayMobileSDK
//
//  Created on 10/20/10.
//

#import <Foundation/Foundation.h>

/**
	@defgroup cfg Configuration
 
	In order to start consuming eBay services, several configuration files must exist in your application bundle.
	They are provided as part of the SDK distribution in the <i>configuration</i> subfolder. They are:
	@li <b>The application credentials file</b> named <i>ApplicationKeys.xml</i>. It must be edited to contain 
		your own application id, either for production or sandbox, or both, 
        that you obtained during the registration as an eBay developer. To call eBay Trading API, oauth-uri must
        also exist in the application credentials file, oauth-url is optional, if oauth-url is set, it will be
        used for validation in the OAuth flow. 
 
	@code 

	<?xml version="1.0" encoding="utf-8"?>
	<application-keys xmlns="http://www.ebay.com/msif/config">
      <application-key env="production">
		  <application-id>PUT YOUR APPLICATION ID HERE</application-id>
          <!-- oauth-uri is required to call eBay Trading API -->
          <oauth-uri>PUT YOUR OAUTH URI HERE</oauth-uri>
		  <!-- oauth-url is optional -->
          <oauth-url>PUT YOUR OAUTH URL HERE</oauth-url>
      <application-key>
      <application-key env="sandbox">
          <application-id>PUT YOUR APPLICATION ID HERE</application-id>
          <!-- oauth-uri is required to call eBay Trading API -->
          <oauth-uri>PUT YOUR OAUTH URI HERE</oauth-uri>
          <!-- oauth-url is optional -->
          <oauth-url>PUT YOUR OAUTH URL HERE</oauth-url>
	  <application-key>
	</application-keys>
	
	@endcode
 
	@li <b>The service configuration files</b> named <b>\<ServiceName\>ClientConfig.xml</b> where <b>\<ServiceName\></b> 
		is the name of the service (e.g. FindingService, ShoppingService or TradingService). They will be usualy used as provided. 
		They can be changed in advanced scenarios that require extending/customizing the SDK. Please see @ref extensibility for more details.
 
	@code
	
	<!-- e.g. FindingServiceClientConfig.xml -->
 
	<?xml version="1.0" encoding="utf-8"?>
	<service-client-config xmlns="http://www.ebay.com/msif/clientconfig" service-name="FindingService">
		<default-request-data-binding>xml</default-request-data-binding>
		<default-response-data-binding>xml</default-response-data-binding>
		<request-pipeline>
			<handler name="EBayReachabilityHandler">
				<class-name>EBayReachabilityHandler</class-name>
			</handler>
			<handler name="EBayFindingServiceRequestHeaderHandler">
				<class-name>EBayFindingServiceRequestHeaderHandler</class-name>
			</handler>
			<handler name="EBayFindingAffiliateTrackingHandler">
				<class-name>EBayFindingAffiliateTrackingHandler</class-name>
			</handler>
			<handler name="EBayRequestLoggingHandler">
				<class-name>EBayRequestLoggingHandler</class-name>
			</handler>
		</request-pipeline>
		<response-pipeline>
			<handler name="EBayResponseLoggingHandler">
				<class-name>EBayResponseLoggingHandler</class-name>
			</handler>
		</response-pipeline>
	</service-client-config>
 
	@endcode
 */

/**
 	Global configuration class.
 
	Holds the client application credentials - the identity of the client application that is consuming services. 
	The values are loaded from the <i>ApplicationKeys.xml</i> configuration file and are read-only.
    production or sandbox credentials can be switched by calling <i>switchApplicationKeyWithEnvironment</i> method.
 
	@code
	<?xml version="1.0" encoding="utf-8"?>
	<application-keys xmlns="http://www.ebay.com/msif/config">
	    <application-key env="production">
		    <application-id>eBayInc00-0000-0000-0000-000000000000</application-id>
			<!-- oauth-uri is required to call eBay Trading API -->
            <oauth-uri>myoauth-uri4production</oauth-uri>
			<!-- oauth-url is optional -->
		    <oauth-url>myapp://ebayauth4production</oauth-url>
        <application-key>
        <application-key env="sandbox">
            <application-id>eBayInc11-1111-1111-1111-111111111111</application-id>
            <!-- oauth-uri is required to call eBay Trading API -->
            <oauth-uri>myoauth-uri4sandbox</oauth-uri>
            <!-- oauth-url is optional -->
            <oauth-url>myapp://ebayauth4sandbox</oauth-url>
        <application-key>
	</application-keys>
 	@endcode
	
	@ingroup extensibility
 */

@class EBayApplicationKeysData;

@interface EBayConfiguration : NSObject
{
	NSString *applicationID_;
//	NSString *developerID_;
//	NSString *certificate_;
	NSString *oauthURI_;
	NSString *oauthURL_;
	NSString *deviceIdentifier_;
	EBayApplicationKeysData *applicationKeys_;
}

/**
	Unique identifier for the application. Application Id is a required input field for 
	consuming certain eBay APIs, for example Shopping and Finding.
 */
@property (readonly) NSString *applicationID;

///**
//	Represents the developer of the application. You get this ID after registering with eBay as a developer.
// */
//@property (readonly) NSString *developerID;
//
///**
//	Secret assigned for the application. You get this ID after registering with eBay as a developer.
// */
//@property (readonly) NSString *certificate;

/**
    The OAuth URI for OAuth you set for the application on developer.ebay.com.
 */
@property (readonly) NSString *oauthURI;

/**
	The OAuth URL for OAuth you set for the application on developer.ebay.com.
 */
@property (readonly) NSString *oauthURL;

/**
	Unique device fingerprint. It is generated by the SDK.
 */
@property (readonly) NSString *deviceIdentifier;


/**
   switch on application credentials according to given environment(production or sandbox).
 */
-(void) switchApplicationKeyWithEnvironment:(NSString *)environment;

/**
	(Creates and) returns a shared instance of this class.
 
	@returns An instance of this class.
 */
+(EBayConfiguration*) sharedInstance;

@end
