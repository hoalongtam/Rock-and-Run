//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Possible bid action types or states.
 
 
 @ingroup Trading
*/

/**
 
 Unknown.
 
*/
extern NSString *const Trading_BidActionCodeType_UNKNOWN;

/**
 
 The item is being offered (or was placed) as a competitive-bid item listing.
 This auction format if often referred to as a Chinese auction.
 
*/
extern NSString *const Trading_BidActionCodeType_BID;

/**
 
 Not used.
 
*/
extern NSString *const Trading_BidActionCodeType_NOT_USED;

/**
 
 The offer was retracted by the user who extended the
 offer. (This can only be done on the eBay site, not via API.)
 
*/
extern NSString *const Trading_BidActionCodeType_RETRACTION;

/**
 
 The offer was automatically retracted. (This can only be done on the eBay site, not
 via API.)
 
*/
extern NSString *const Trading_BidActionCodeType_AUTO_RETRACTION;

/**
 
 The offer was cancelled. (This can only be done on the eBay site, not via API.)
 
*/
extern NSString *const Trading_BidActionCodeType_CANCELLED;

/**
 
 The offer was automatically cancelled. (This can only be done on the eBay site, not
 via API.)
 
*/
extern NSString *const Trading_BidActionCodeType_AUTO_CANCEL;

/**
 
 The offer placed was an absentee bid. (This can only be done on the eBay site,
 not via API.)
 
*/
extern NSString *const Trading_BidActionCodeType_ABSENTEE;

/**
 
 The offer resulted in the successful exercise of the Buy It Now option for a
 competitive-bid auction.
 
*/
extern NSString *const Trading_BidActionCodeType_BUY_IT_NOW;

/**
 
 The offer is being placed, or was placed, on a fixed-price listing.
 This value is used for fixed-price listings
 (Basic Fixed-Price and eBay Store Inventory listings) to purchase an item.
 In PlaceOffer, for Chinese-auction items with the BIN option,
 specify Purchase to buy the item.
 In the case of fixed-price items listed with AutoPay, PlaceOffer
 cannot be used for purchase.
 But for fixed-price items listed with AutoPay that have the BestOffer option,
 PlaceOffer can be used to make an offer (but not to purchase).
 
*/
extern NSString *const Trading_BidActionCodeType_PURCHASE;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_BidActionCodeType_CUSTOM_CODE;

/**
 
 If an item is best-offer enabled, use this value if a buyer is making a best offer on
 the item. After a buyer makes a best offer (or counter-offer, etc.), the buyer can get
 the status of the best offer (and of a possible seller-counter-offer, etc.) using the
 GetBestOffers call. See the Trading Web Services Guide for information about
 best-offer enabled items and about GetBestOffers.
 
*/
extern NSString *const Trading_BidActionCodeType_OFFER;

/**
 
 If an item is best-offer enabled, use this value if a buyer is making a counteroffer
 to a seller's counteroffer.
 
*/
extern NSString *const Trading_BidActionCodeType_COUNTER;

/**
 
 If an item is best-offer enabled, use this value if a buyer is accepting a
 counteroffer of a seller.
 
*/
extern NSString *const Trading_BidActionCodeType_ACCEPT;

/**
 
 If an item is best-offer enabled, use this value if a buyer is declining a
 counteroffer of a seller.
 
*/
extern NSString *const Trading_BidActionCodeType_DECLINE;
  
