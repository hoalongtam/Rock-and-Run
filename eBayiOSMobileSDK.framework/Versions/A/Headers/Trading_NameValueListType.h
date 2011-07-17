//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 A name and corresponding value (a name/value pair).
 
 
 @ingroup Trading
*/
@interface Trading_NameValueListType : NSObject <EbayNs_Bindable> {

@private
    NSString *name;
    NSMutableArray *value;
    NSString *source;

}


/**
 
 A name in a name/value pair.<br>
 <br>
 <b>For the AddItem and AddFixedPriceItem families of
 calls:</b> In the Item.ItemSpecifics context, this can be any
 name that the seller wants to use. However, to help buyers find
 items more easily, it is a good idea to try to use a recommended
 name when possible (see GetCategorySpecifics or
 GetItemRecommendations).
 You can't specify the same name twice within the same listing.<br>
 <br>
 <b>For the AddFixedPriceItem family of calls:</b>
 In the VariationSpecifics context, this can be any name that
 the seller wants to use, unless the VariationsEnabled flag
 is false for the name in the GetCategorySpecifics response.
 For example, for some categories eBay may recommend that you only
 use "Brand" as a shared name at the Item level, not in variations.<br>
 <br>
 <b>For GetCategorySpecifics and GetItemRecommendations:</b>
 This is a recommended (popular) name to use for items in the
 specified category (e.g., "Brand" might be recommended,
 not "Manufacturer").
 </span>
 <br>
 <br>
 <b>For search calls:</b> In the GetSearchResults
 response, this the name of an attribute (Attribute) that was used
 in the listing. Specifically:
 If SearchRequest was used to perform a "Product Finder" search,
 this contains the name of one attribute (i.e, the name of one
 ID-based Item Specifics field).
 If IncludeCondition was true in the request and the item includes
 a condition attribute (in the older ID-based format), 
 this returns the condition attribute name 
 (e.g., "Item Condition").<br>
 <br>
 In the GetProducts response, this is an attribute
 name that is defined for a catalog product.<br>
 <br>
 <b>For PlaceOffer:</b> Required if the item being
 purchased includes Item Variations.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 A value associated with the name.<br>
 <br>
 <b>For the AddItem family of calls:</b>
 If you specify multiple values for Item Specifics,
 eBay only stores the first one,
 unless GetCategorySpecifics or GetItemRecommendations indicates
 that the corresponding name supports multiple values.<br>
 <br>
 <b>For the AddFixedPriceItem family of calls:</b>
 If you specify multiple values for Item Specifics or
 Variation Specifics,
 eBay only stores the first one,
 unless GetCategorySpecifics or GetItemRecommendations indicates
 that the corresponding name supports multiple values.<br>
 <br>
 In VariationSpecificSet, you typically specify multiple
 Value fields for each name. For example, if Name=Size,
 you would specify all size values that you wan to offer in the
 listing.<br>
 <br>
 <b>For GetCategorySpecifics and GetItemRecommendations:</b> The most highly recommended values are returned first. For these calls,
 Value is only returned when recommended values are available.<br>
 <br>
 <b>For search calls:</b> In the GetSearchResults response, if SearchRequest was used to perform
 a "Product Finder" search, this contains the
 value of one attribute.
 If IncludeCondition was true in the request and the item includes
 a condition attribute (in the older ID-based format), this returns 
 the condition attribute value (e.g., "New").<br>
 <br>
 <b>For PlaceOffer:</b> Required if the item being
 purchased includes Item Variations.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *value;

/**
 
 The origin of this Item Specific. Only returned if the source is not
 custom Item Specifics.
 
 
 type: string constant in Trading_ItemSpecificSourceCodeType.h
*/
@property (nonatomic, retain) NSString *source;



@end
