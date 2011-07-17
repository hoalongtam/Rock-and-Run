//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Contains information related to the item in the context of
 a seller's eBay Store. Applicable for auction format, Basic Fixed Price,
 and Store Inventory format items listed by eBay Stores sellers.
  
 
 @ingroup Trading
*/
@interface Trading_StorefrontType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *storeCategoryID;
    NSNumber *storeCategory2ID;
    NSString *storeURL;
    NSString *storeName;

}


/**
 
 Numeric ID for a custom category that the seller created in
 their eBay Store, if any.
 eBay Stores sellers can create up to three levels of custom
 categories for their stores.
 Items can only be listed in store categories
 that have no child categories (subcategories).
 If you attempt to list an item in a category that has subcategories,
 the call response contains a warning,
 and the item is listed in the Other store category.
 In GetSearchResults and GetProducts, this field currently returns 0.
 As a workaround, use GetItem or related calls to get the ID.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *storeCategoryID;

/**
 
 Applicable for eBay Store sellers only. Numeric ID for a second custom
 category that the seller created in their eBay Store. eBay Stores sellers can
 create up to 300 custom categories for their stores. (One additional Store
 category cannot be customized and retains the value of "Other"). <br>
 If you specify an invalid value, the values are the same for both the primary
 and secondary store categories, or if the seondary store category is
 specified but the primary is left blank (or other),  the system resets the
 value to 0 (None). In short, the primary store category must be set to
 something meaningful and different from the second store category
 in order to set the secondary store category to a value other than 0.
 In GetSearchResults and GetProducts, this field currently returns 0.
 As a workaround, use GetItem or related calls to get the ID.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *storeCategory2ID;

/**
 
 The URL of the seller's eBay Store page. GetProducts only returned
  a default URL at the time of this writing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *storeURL;

/**
 
 The name of the seller's eBay Store. GetProducts returns an empty
 value for all items at the time of this writing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *storeName;



@end
