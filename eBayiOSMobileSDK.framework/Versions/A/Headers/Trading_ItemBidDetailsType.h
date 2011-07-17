//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Contains bidding details information of a user on an item.
 
 
 @ingroup Trading
*/
@interface Trading_ItemBidDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *itemID;
    NSString *categoryID;
    NSNumber *bidCount;
    NSString *sellerID;
    NSDate *lastBidTime;

}


/**
 
 The unique identifier of an item listed on the eBay site.
 For GetAllBidders, an anonymous user ID is returned.
 <br><br>
 Since a bidder's user info is anonymous, this tag will contain the real ID value only for that bidder, and the seller of an item that the user is
 bidding on. For all other users, the real ID value will be replaced with the anonymous value, according to these rules:
 <br><br>
 When bidding on items listed on the US site: UserID is replaced with the value "a****b" where a and b are random characters from the UserID. For example, if the UserID = IBidALot, it might be displayed as, "I****A". <br>
 Note that in this format, the anonymous bidder ID stays the same for every auction. 
 <br><br>
 (GetMyeBayBuying only) when bidding on items listed on the US site: UserID is replaced with the value "a****b" where a and b are random characters from the UserID. 
 <br><br>
 When bidding on items listed on the the UK and AU sites: UserID is replaced with the value "Bidder X" where X is a number indicating the order of that user's first bid. For example, if the user was the third bidder, 
 UserID = Bidder 3. <br>
 Note that in this format, the anonymous bidder ID stays the same for a given auction, but is different for different auctions. For example, a bidder who is the third and then the seventh bidder in an auction will be listed for both bids as "Bidder 3". However, if that same bidder is the first bidder on a different auction, the bidder will be listed for that auction as "Bidder 1", 
 not "Bidder 3".
 <br><br>
 (GetMyeBayBuying only) when bidding on items listed on the UK and AU sites: UserID is replaced with the string "High Bidder". 
 <br><br>
 (GetBestOffers only) - all sites: The last part of the user ID is replaced with asterisks for users that submit best offers on an item. The seller of the item will be able to see the full UserID. 
 See <a href="http://developer.ebay.com/DevZone/XML/docs/WebHelp/index.htm?context=eBay_XML_API&topic=AnonymousUserInfo">Working with Anonymous User Information</a> in the eBay Web Services Guide for more information.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Numeric ID for the category that the item belongs to.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 The total number of bids the user placed on the item.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *bidCount;

/**
 
 The eBay ID of the seller who listed the item.
 <br><br>
 Starting Jan 2007, when a bidder's user info is made
 anonymous, this tag will be returned with the anonymous
 value "Seller X", where X indicates where the seller falls
 in the sequence of sellers that the user has purchased items
 from. For example, if the seller is the third seller that
 the user has purchased items from, the value "Seller 3" is
 returned.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerID;

/**
 
 The time at which the user placed the last bid on the item.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *lastBidTime;



@end
