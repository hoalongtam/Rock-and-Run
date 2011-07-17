//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_ItemType;

/**
 
 Checks the arguments that you plan to use for a RelistItem call, looking for errors
 and listing fees, without actually relisting the item.
 
 
 @ingroup Trading
*/
@interface Trading_VerifyRelistItemRequestType : Trading_AbstractRequestType {

@private
    Trading_ItemType *item;
    NSMutableArray *deletedField;

}


/**
 
 Child elements hold the values for item properties that change for the
 item re-list. Item is a required input. At a minimum, the Item.ItemID
 property must be set to the ID of the listing being re-listed (a
 listing that ended in the past 90 days). By default, the new listing's
 Item object properties are the same as those of the original (ended)
 listing. By setting a new value in the Item object, the new listing
 uses the new value rather than the corresponding value from the old
 listing.
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;

/**
 
 Specifies the name of the field to remove from a listing.
 See the Developer's Guide for rules on removing values when relisting
 items. DeletedField accepts the same values as 
 DeletedField in RelistItem.
 DeletedField is case sensitive. The request can contain zero, one, or many
 instances of DeletedField.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *deletedField;


@end
