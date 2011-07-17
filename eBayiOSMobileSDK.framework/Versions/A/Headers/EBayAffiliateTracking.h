//
//  EBayAffiliateTracking.h
//  eBayMobileSDK
//

#import <Foundation/Foundation.h>

/**
	@ingroup affiliate	
	@defgroup pids Program IDs
	@{
 */
extern NSString* const eBayUSProgramID;				/**< eBay United States */
extern NSString* const eBayIEProgramID;				/**< eBay Ireland */
extern NSString* const eBayATProgramID;				/**< eBay Austria */
extern NSString* const eBayAUProgramID;				/**< eBay Australia */
extern NSString* const eBayBEProgramID;				/**< eBay Belgium */
extern NSString* const eBayCAProgramID;				/**< eBay Canada */
extern NSString* const eBayFRProgramID;				/**< eBay France */
extern NSString* const eBayDEProgramID;				/**< eBay Germany (Deutschland) */
extern NSString* const eBayITProgramID;				/**< eBay Italy */
extern NSString* const eBayESProgramID;				/**< eBay Spain (España) */
extern NSString* const eBayCHProgramID;				/**< eBay Switzerland (Confederation of Helvetia) */
extern NSString* const eBayUKProgramID;				/**< eBay United Kingdom */
extern NSString* const eBayNLProgramID;				/**< eBay Netherlands */
extern NSString* const eBayHalfUSProgramID;			/**< eBay Half United States */
extern NSString* const eBayUSClassifieldsProgramID;	/**< eBay United States Classifields */
extern NSString* const eBayUKClassifieldsProgramID;	/**< eBay United Kingdom Classifields */
extern NSString* const eBayFRClassifieldsProgramID;	/**< eBay France Classifields */
/** 
	@}
 */

/**
 @ingroup affiliate
 @{
 */

extern NSString* const kDefaultNetworkID; /**< default to eBay Partner network(9) */

/**
	Facilitates obtaining revenues through the eBay Affiliate Tracking program.

	It allows the SDK user to:
	@li Specify global values for the affiliate tracking details to be used by all the service invokers.
	@li Generate mobile-friendly roverized URLS for several flows(Homepage, ViewItem, SearchResult, Store, and Custom URL) 
  		and launch them in the system browser.
	@li Convert non mobile-friendly roverized URLs to mobile friendly form and launch them in the system browser.
	@ingroup affiliate
  */
@interface EBayAffiliateTracking : NSObject

{
	NSString* programID_;
	NSString* networkID_;
	NSString* campaignID_;
    NSString* customID_;
	
	NSString* applicationID_;
	NSString* deviceID_;
	NSString* encryptedUserAgent_;
    NSString* encryptedUserAgentPrime_;
	
	NSDictionary* programs_;
	
	BOOL debugMode_;
}

/**
	(Creates and) returns a shared instance of this class.
 
	@returns A shared instance of this class.
 */
+(EBayAffiliateTracking*) sharedInstance;


/**
	The affiliate program id.
    @ref pids
 */
@property (nonatomic, readwrite, retain) NSString* programID;

/**
	The affiliate network id (or tracking partner code).
 */
@property (nonatomic, readwrite, retain) NSString* networkID;

/**
	The campaign id (or tracking id) as provided by the tracking partner.
 */
@property (nonatomic, readwrite, retain) NSString* campaignID;

/**
	The custom id, if defined at the tracking partner.
 */
@property (nonatomic, readwrite, retain) NSString* customID;

/**
    If enabled, affiliate tracking url will be logged
 */
@property (nonatomic) BOOL debugMode;


/**
	Constructs a roverized URL for the home page and launches it on external browser.

	@param [in] programID	The program id (see @ref pids).
	@param [in] campaignID	The campaign id provided by the eBay tracking partner
	@param [in] customID	The custom id (affiliate user id) if you defined one at the eBay tracking partner. Optional/can be nil.

	@attention				The programID, campaignID and customID can be set as properties of this class. Furthermore, if not set
							the SDK will try to guess the programID using your locale information, defaulting to "US" if doesn't succeed.
							The values ;ll as parameters to this method will have precedence over the class properties.
 
	@throw NSException on invalid input.
 */
- (void) launchHomePageWithProgram:(NSString*)programID
						  campaign:(NSString*)campaignID 
							custom:(NSString*)customID;

/**
	Constructs a roverized URL for the home page using the set programID, campaignID and customID
	and launches it on external browser.

	@see launchHomePageWithProgram:campaign:custom:
 	@throw NSException on invalid configuration.
 */
- (void) launchHomePage;

/**
	Constructs a roverized URL for the view item page and launches it on external browser.

	@param [in] programID	The program id (see @ref pids).
	@param [in] campaignID	The campaign id provided by the eBay tracking partner
	@param [in] customID	The custom id (affiliate user id) if you defined one at the eBay tracking partner. Optional/can be nil.
	@param [in] itemID		Item id.

	@attention				The programID, campaignID and customID can be set as properties of this class. Furthermore if not set
							the SDK will try to guess the programID using your locale information, defaulting to "US" if doesn't succeed.
							The values provided as parameters to this method will have precedence over the class properties.
  */
- (void) launchViewItemPageWithProgram:(NSString*)programID
							  campaign:(NSString*)campaignID 
								custom:(NSString*)customID
								  item:(NSString*)itemID;

/**
	Constructs a roverized URL for the view item page using the set programID, campaignID and customID
	and launches it on external browser.

	@param [in] itemID		Item id.

	@see launchViewItemPageWithProgram:campaign:custom:item:
	@throw NSException on invalid input.
 */
- (void) launchViewItemPageWithItem:(NSString*)itemID;

/**
	Constructs a roverized URL for a keyword search result page and launches it on external browser.

	@param [in] programID	The program id (see @ref pids).
	@param [in] campaignID	The campaign id provided by the eBay tracking partner
	@param [in] customID	The custom id (affiliate user id) if you defined one at the eBay tracking partner. Optional/can be nil.
	@param [in] keyword		Keyword specified by the publisher.

	@attention				The programID, campaignID and customID can be set as properties of this class. Furthermore if not set
							the SDK will try to guess the programID using your locale information, defaulting to "US" if doesn't succeed.
							The values provided as parameters to this method will have precedence over the class properties.
	@throw NSException on invalid input.
  */
- (void) launchSearchResultPageWithProgram:(NSString*)programID
								  campaign:(NSString*)campaignID 
									custom:(NSString*)customID
								   keyword:(NSString*)keyword 
;

/**
	Constructs a roverized URL for a keyword search result page using the set programID, campaignID and customID
	and launches it on external browser.

	@param [in] keyword		Keyword specified by the publisher.
	
	@see launchSearchResultPageWithProgram:campaign:custom:keyword:
 */
- (void) launchSearchResultPageWithKeyword:(NSString*)keyword;

/**
 Constructs a roverized URL for a category search result page and launches it on external browser.
 
 @param [in] programID	The program id (see @ref pids).
 @param [in] campaignID	The campaign id provided by the eBay tracking partner
 @param [in] customID	The custom id (affiliate user id) if you defined one at the eBay tracking partner. Optional/can be nil.
 @param [in] categoryID	Category ID specified by the publisher.
 
 @attention				The programID, campaignID and customID can be set as properties of this class. Furthermore if not set
 the SDK will try to guess the programID using your locale information, defaulting to "US" if doesn't succeed.
 The values provided as parameters to this method will have precedence over the class properties.
	@throw NSException on invalid input.
 */
- (void) launchSearchResultPageWithProgram:(NSString*)programID 
								  campaign:(NSString*)campaignID 
									custom:(NSString*)customID
								  category:(NSString*)categoryID;

/**
 Constructs a roverized URL for a category search result page using the set programID, campaignID and customID
 and launches it on external browser.
 
 @param [in] categoryID		Category id specified by the publisher.
 
 @see launchSearchResultPageWithProgram:campaign:custom:category:
 */
- (void) launchSearchResultPageWithCategory:(NSString*)categoryID;

/**
	Constructs a roverized URL for the store page and launches it on external browser.

	@param [in] programID	The program id (see @ref pids).
	@param [in] campaignID	The campaign id provided by the eBay tracking partner
	@param [in] customID	The custom id (affiliate user id) if you defined one at the eBay tracking partner. Optional/can be nil.
	@param [in] storeID		Store ID provided by the publisher.

	@attention				The programID, campaignID and customID can be set as properties of this class. Furthermore if not set
							the SDK will try to guess the programID using your locale information, defaulting to "US" if doesn't succeed.
							The values provided as parameters to this method will have precedence over the class properties.
 	@throw NSException on invalid input.
 */
- (void) launchStorePageWithProgram:(NSString*)programID
						   campaign:(NSString*)campaignID
							 custom:(NSString*)customID
							  store:(NSString*)storeID;

/**
	Constructs a roverized URL for the store page using the set programID, campaignID and customID
	and launches it on external browser.

	@param [in] storeID		Store ID provided by the publisher.

	@see launchStorePageWithProgram:campaign:custom:store:
 */
- (void) launchViewItemPageWithStore:(NSString*)storeID;

/**
	Constructs a roverized URL for a custom page and launches it on external browser.

	@param [in] programID	The program id (see @ref pids).
	@param [in] campaignID	The campaign id provided by the eBay tracking partner
	@param [in] customID	The custom id (affiliate user id) if you defined one at the eBay tracking partner. Optional/can be nil.
	@param [in] customURL	Redirect URL provided by the publisher.

	@attention				The programID, campaignID and customID can be set as properties of this class. Furthermore if not set
							the SDK will try to guess the programID using your locale information, defaulting to "US" if doesn't succeed.
							The values provided as parameters to this method will have precedence over the class properties.
 	@throw NSException on invalid input.
 */
- (void) launchCustomPageWithProgram:(NSString*)programID
							campaign:(NSString*)campaignID
							  custom:(NSString*)customID
								 url:(NSString*)customURL;

/**
	Constructs a roverized URL for the store page using the set programID, campaignID and customID
	and launches it on external browser.

	@param [in] customURL	Redirect URL provided by the publisher.

	@see launchCustomPageWithProgram:campaign:custom:url:
 	@throw NSException on invalid configuration.
 */
- (void) launchCustomPageWithURL:(NSString*)customURL;


/**
 * 
 */

/**
	Given a web-roverized page (returned from API), this function converts the url to a mobile-friendly 
	form and launches the URL on external browser.
 
	@param url		The url to convert and launch.
 */
- (void) launchNonMobileRoverizedURL:(NSURL*)url;


/**
 * 
 */
/**
	Given a web-roverized page (returned from API), this function converts the url to a mobile-friendly 
	roverized page, and launches the URL on external browser.
 
	@param string	The url (as a string) to convert and launch.
 */
- (void) launchNonMobileRoverizedURLString:(NSString*)string;

/**@}*/

@end
