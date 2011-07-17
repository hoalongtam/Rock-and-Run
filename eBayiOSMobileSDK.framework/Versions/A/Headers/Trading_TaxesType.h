//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_TaxDetailsType;
@class Trading_AmountType;

/**
 
 A representation of taxes.
 
 
 @ingroup Trading
*/
@interface Trading_TaxesType : NSObject <EbayNs_Bindable> {

@private
    Trading_AmountType *totalTaxAmount;
    NSMutableArray *taxDetails;

}


/**
 
 The total tax for a transaction (the sum of all TaxDetails.TaxAmount).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *totalTaxAmount;

/**
 
 Tax details of a particular imposition (tax type).
 
 
 entry type : class Trading_TaxDetailsType
*/
@property (nonatomic, retain) NSMutableArray *taxDetails;



@end