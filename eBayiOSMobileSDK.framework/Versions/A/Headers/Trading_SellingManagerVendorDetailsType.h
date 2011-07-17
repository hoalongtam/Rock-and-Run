//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 Describes vendor infomration.
 
 @ingroup Trading
*/
@interface Trading_SellingManagerVendorDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *vendorName;
    NSString *vendorContactInfo;

}


/**
 
 Primary vendor name. Vendor information s returned only if it has been set. 
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *vendorName;

/**
 
 Contact information of vendor. Vendor information s returned only if it has been set. 
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *vendorContactInfo;



@end
