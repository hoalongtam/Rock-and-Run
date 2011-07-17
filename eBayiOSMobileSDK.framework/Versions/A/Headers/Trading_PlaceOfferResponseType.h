//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_SellingStatusType;
@class Trading_BestOfferType;

/**
 
 The PlaceOffer response notifies you about the success and result
 of the call.
 
 
 @ingroup Trading
*/
@interface Trading_PlaceOfferResponseType : Trading_AbstractResponseType {

@private
    Trading_SellingStatusType *sellingStatus;
    NSString *transactionID;
    Trading_BestOfferType *bestOffer;

}


/**
 
 Indicates the current bidding/purchase state of the item listing, as of
 the offer extended using PlaceOffer. See the schema documentation for
 the SellingStatus object, the properties of which contain such
 post-offer information as the current high bidder, the current price for
 the item, and the bid increment.
 
 
 type : class Trading_SellingStatusType
*/
@property (nonatomic, retain) Trading_SellingStatusType *sellingStatus;

/**
 
 The TransactionID field can be returned if, on input, you specified Purchase in the Action field. 
 The TransactionID field contains the ID of the transaction created.
 This field applies to the following types of listings:
 FixedPriceItem and StoresFixedPrice. This field also applies to Chinese BIN 
 if you specified Purchase on input.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 For a best-offer-related action of a buyer using PlaceOffer, 
 contains information about the best-offer-related action.
 
 
 type : class Trading_BestOfferType
*/
@property (nonatomic, retain) Trading_BestOfferType *bestOffer;


@end
