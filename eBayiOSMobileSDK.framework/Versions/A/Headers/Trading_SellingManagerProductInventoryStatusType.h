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
 Describes the inventory status of a specific Selling Manager Product
 
 @ingroup Trading
*/
@interface Trading_SellingManagerProductInventoryStatusType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *quantityScheduled;
    NSNumber *quantityActive;
    NSNumber *quantitySold;
    NSNumber *quantityUnsold;
    NSNumber *successPercent;
    Trading_AmountType *averageSellingPrice;

}


/**
 
 Quantity of products scheduled to be listed.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityScheduled;

/**
 
 Quantity of products actively listed.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityActive;

/**
 
 Quantity of products sold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;

/**
 
 Quantity of product unsold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityUnsold;

/**
 
 Percentage of ended listings that sold.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *successPercent;

/**
 
 Average selling price for the product.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *averageSellingPrice;



@end