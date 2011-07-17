//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_CharacteristicsSetType;

/**
 
 A list of one or more characteristics sets mapped to the category, if any. Use this information when working with Item Specifics (Attributes) and Pre-filled Item Information (Catalogs) functionality.
 
 
 @ingroup Trading
*/
@interface Trading_SiteWideCharacteristicsType : NSObject <EbayNs_Bindable> {

@private
    Trading_CharacteristicsSetType *characteristicsSet;
    NSMutableArray *excludeCategoryID;

}


/**
 
 Container for site-wide characteristic set information. 
 Site-wide characteristic sets are defined for return policy
 and item condition attributes.<br>
 <br>
 For most categories, you should use the new Item.ReturnPolicy model 
 in listing requests instead of return policy attributes.
 See GetCategoryFeatures for categories that support 
 ReturnPolicy.<br>
 <br>
 With request version 665 in the Sandbox and 667 in Production, 
 the item condition site-wide characteristic set is no longer returned for sites that support Item.ConditionID instead.
 See GetCategoryFeatures for sites that support ConditionID.
 
 
 type : class Trading_CharacteristicsSetType
*/
@property (nonatomic, retain) Trading_CharacteristicsSetType *characteristicsSet;

/**
 
 A category that does not support the specified site-wide characteristics set.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *excludeCategoryID;



@end
