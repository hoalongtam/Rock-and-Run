//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_SellingManagerVendorDetailsType;
@class Trading_AmountType;

/**
 
 Returned if the user is a Selling Manager user. Defines product information for Selling Manager
 users.
 
 
 @ingroup Trading
*/
@interface Trading_SellingManagerProductDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *productName;
    NSNumber *productID;
    NSString *customLabel;
    NSNumber *quantityAvailable;
    Trading_AmountType *unitCost;
    NSNumber *folderID;
    NSNumber *restockAlert;
    NSNumber *restockThreshold;
    Trading_SellingManagerVendorDetailsType *vendorInfo;
    NSString *note;

}


/**
 
 The name of a Selling Manager product. The AddSellingManagerProduct call is used to create a
 Selling Manager product.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *productName;

/**
 
 The ID of a Selling Manager product. When you call AddSellingManagerProduct, a product ID is
 returned for the product created. When you use this ID to make subsequent calls, such as
 AddSellingManagerTemplate, the ProductID you provide on input is returned in the output.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *productID;

/**
 
 Custom label of this product.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *customLabel;

/**
 
 Quantity of items in the seller's inventory for this product.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityAvailable;

/**
 
 Cost of each item of this product.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *unitCost;

/**
 
 ID of the inventory folder that contains the product. Value is initially returned in
 the AddSellingManagerInventoryFolder response.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *folderID;

/**
 
 Specifies whether a restock alert is triggered for the product or not.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *restockAlert;

/**
 
 Specifies the quantity at which a restock alert should be triggered.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *restockThreshold;

/**
 
 Primary vendor information. Vendor information is returned only if it has been
 set.
 
 
 type : class Trading_SellingManagerVendorDetailsType
*/
@property (nonatomic, retain) Trading_SellingManagerVendorDetailsType *vendorInfo;

/**
 
 Seller's note about this product.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *note;



@end
