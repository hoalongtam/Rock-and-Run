//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_AmountType;

/**
 
 The lowest (beginning) price that can be associated with an item for each type of eBay listing.
 
 
 @ingroup Trading
*/
@interface Trading_ListingStartPriceDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *description;
    NSString *listingType;
    Trading_AmountType *startPrice;
    NSString *detailVersion;
    NSDate *updateTime;
    NSNumber *minBuyItNowPricePercent;

}


/**
 
 The lowest (beginning) price that can be associated with an item for each type of eBay
 listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Type of eBay listing, such as 'Chinese', 'AdType', 'StoresFixedPrice',
 'FixedPriceItem', and others.
 
 
 type: string constant in Trading_ListingTypeCodeType.h
*/
@property (nonatomic, retain) NSString *listingType;

/**
 
 StartPrice for a specific listing type.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *startPrice;

/**
 
 Returns the latest version number for this field. The version can be used to
 determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the
 details were last updated. This timestamp can be used to determine
 if and when to refresh cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 
 The minimum in the percentage difference between the start price and the
 Buy It Now price for a listing, defined in the site parameters.
 On the US eBay Motors site (100), requirements for Motor Vehicles are
 different from those for Parts and Accessories.
 On the US eBay Motors site (100), for MinBuyItNowPricePercent, the value
 returned by GeteBayDetails only applies to Parts and Accessories.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *minBuyItNowPricePercent;



@end
