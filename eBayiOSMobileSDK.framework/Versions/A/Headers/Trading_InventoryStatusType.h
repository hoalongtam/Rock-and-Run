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
 
 Lightweight type for updating basic inventory status details. 
 Primarily intended for bulk use cases.
 
 
 @ingroup Trading
*/
@interface Trading_InventoryStatusType : NSObject <EbayNs_Bindable> {

@private
    NSString *sku;
    NSString *itemID;
    Trading_AmountType *startPrice;
    NSNumber *quantity;

}


/**
 
 The unique SKU of the item being revised. 
 A SKU (stock keeping unit) is an identifier defined by a seller. 
 SKU can only be used to revise an item if you listed the item by 
 using AddFixedPriceItem or RelistFixedPriceItem, and:<br>
 1) You set Item.InventoryTrackingMethod to SKU at 
 the time the item was listed; or <br>
 2) You are modifying a multi-variation listing, and the SKU 
 identifies one of the variations. (In this case, if InventoryTrackingMethod was set to ItemID, then you also need to specify ItemID in the request.)<br>
 (These criteria are necessary to 
 uniquely identify the listing or variation by a SKU.)<br>
 <br>
 In the ReviseInventoryStatus request, if the listing has 
 InventoryTrackingMethod set to SKU, then either ItemID or SKU is 
 required. If both are passed in and they don't refer to the 
 same listing, eBay ignores SKU and considers only the ItemID.<br>
 <br>
 If the listing has variations and InventoryTrackingMethod is set 
 to ItemID, then ItemID and SKU are both required.<br>
 <br>
 In the response, SKU may be returned as an empty element if
 it was not defined on the listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;

/**
 
 The ItemID of a listing being changed. <br>
 <br>
 In the ReviseInventoryStatus request, either ItemID or SKU is 
 required. If both are passed in and the SKU does not match, 
 eBay ignores SKU and considers only the ItemID.<br>
 <br>
 Please note that the same ItemID can be returned
 multiple times in the same response if you revise several
 variations from the same multi-variation listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Specifies the revised fixed price of the listing (or of a 
 variation within a multi-variation listing).
 If you raise the price of a listing, the recent sales score of 
 the listing is reset. (Best Match search ranking is based on 
 buyer activity, and one of the factors affecting search ranking 
 for fixed-price listings is the recent sales score.)<br>
 <br>
 Raising a listing's price may also affect the insertion fee 
 (and therefore the overall listing fee).<br>
 <br>
 ReviseInventoryStatus requires either StartPrice or Quantity (or both) for each InventoryStatus node in the request. 
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *startPrice;

/**
 
 Specifies the revised quantity of the listing (or of a variation
 within a multi-variation listing).
 It is a good idea to maintain an adequate item Quantity for 
 fixed-price GTC listings to prevent the search rankings from 
 dropping. Best Match search ranking is based on buyer activity, 
 and one of the factors affecting search ranking for fixed-price 
 listings is the recent sales score. Fixed-price items that are 
 selling the fastest are given a relative lift in search results. 
 Recent Sales history is tracked with a moving window to ensure it 
 reflects the most recent activity. Due to he moving window, it is 
 advantageous to maintain item availability (Quantity) 
 for a GTC listing.<br>
 <br>
 ReviseInventoryStatus requires either StartPrice or Quantity (or both) for each InventoryStatus node in the request.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantity;



@end
