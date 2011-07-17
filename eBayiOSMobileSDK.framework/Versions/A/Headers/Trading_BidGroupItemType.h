//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_ItemType;
@class Trading_AmountType;

/**
 
 Contains information about items that are part of a bid group.
 
 
 @ingroup Trading
*/
@interface Trading_BidGroupItemType : NSObject <EbayNs_Bindable> {

@private
    Trading_ItemType *item;
    NSString *bidGroupItemStatus;
    Trading_AmountType *maxBidAmount;

}


/**
 
 Contains a list of the items in a bid group.
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;

/**
 
 Contains the status of the items in the bid group.
 
 
 type: string constant in Trading_BidGroupItemStatusCodeType.h
*/
@property (nonatomic, retain) NSString *bidGroupItemStatus;

/**
 
 Contains the maximum bid amount for the item in the bid group.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *maxBidAmount;



@end
