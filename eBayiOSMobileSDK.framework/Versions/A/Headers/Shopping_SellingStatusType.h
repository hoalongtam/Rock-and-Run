//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Shopping_AmountType;

/**
 
 Contains various details about the current status of a listing. These
 values are computed by eBay and cannot be specified at listing time.
 
 
 @ingroup Shopping
*/
@interface Shopping_SellingStatusType : NSObject <EbayNs_Bindable> {

@private
    Shopping_AmountType *convertedCurrentPrice;
    Shopping_AmountType *currentPrice;
    NSNumber *quantitySold;

}


/**
 
 Not used. See Item.ConvertedCurrentPrice.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *convertedCurrentPrice;

/**
 
 Not used. See Item.CurrentPrice and Variation.StartPrice.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *currentPrice;

/**
 
 The number of items sold from this variation. Subtract from
 Quantity to determine the number of items available.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;



@end
