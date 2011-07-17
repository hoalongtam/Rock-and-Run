//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_NameValueRelationshipType;

/**
 
 Defines rules for recommended Item Specifics. The rules apply when 
 the Item Specific is subsequently used in AddItem and related calls.
 
 
 @ingroup Trading
*/
@interface Trading_RecommendationValidationRulesType : NSObject <EbayNs_Bindable> {

@private
    NSString *valueType;
    NSNumber *minValues;
    NSNumber *maxValues;
    NSString *selectionMode;
    NSNumber *confidence;
    NSMutableArray *relationship;
    NSString *variationPicture;
    NSString *variationSpecifics;

}


/**
 
 The data type (e.g., decimal) that eBay expects the value to 
 adhere to in listing requests.
 Only returned if the data type is not Text.<br>
 <br>
 As buyers may search on the value you specify in AddItem,
 the ISBN, UPC, or EAN should match the value that was specified by 
 the publisher or manufacturer.
 
 
 type: string constant in Trading_ValueTypeCodeType.h
*/
@property (nonatomic, retain) NSString *valueType;

/**
 
 Minimum number of values that you can specify for this Item Specific
 in listing requests. Not returned if zero (0).<br>
 <br>
 If 1 or more, it means this Item Specfic is required
 in listing requests (in the specified category). (Your listing 
 request will return errors if the Item Specific is not present.) 
 If Relationship  is also present, it means this Item Specific is 
 required when you specify its parent value in listing requests.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *minValues;

/**
 
 Maximum number of values that you can specify for this Item Specific
 in listing requests (like AddItem) in the specified 
 category.<br>
 <br>
 Most Item Specifics can only have one value. When this is 
 greater than 1, your application can present the value 
 recommendations (if any) as a multi-select list to the seller. 
 (See SelectionMode to determine whether the seller needs to 
 choose from eBay's recommendations or not.)
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxValues;

/**
 
 Controls whether you can specify your own name and value 
 in listing requests, or if you need to use a name and/or value 
 that eBay has defined.
 
 
 type: string constant in Trading_SelectionModeCodeType.h
*/
@property (nonatomic, retain) NSString *selectionMode;

/**
 
 Indicates eBay's confidence that this is the right name or value, 
 given the data you specified your request. The confidence is based
 on historical items in the same category, with similar titles 
 (if specified).<br>
 <br>
 For example, in GetItemRecommendations, if your request includes a 
 title with words like "Blue T-Shirt", then Color=Blue is likely to 
 have a higher confidence score than Color=Red in the response. 
 If the title does not include a recognized color value, 
 then Color may still have a high confidence score 
 (based on historical item data in the category), but the scores for 
 Blue and Red may have a more even distribution.<br>
 <br>
 Only returned when IncludeConfidence is true in the request. 
 Not returned when SelectionMode is Prefilled.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *confidence;

/**
 
 Indicates the Item Specific's logical dependency on another 
 Item Specific, if any. 
 <br>
 <br>
 For example, in a clothing category, Size Type could be 
 recommended as a parent of Size, because Size=Small would 
 mean something different to buyers when 
 Size Type=Petite or Size Type=Plus. <br>
 <br>
 Or in the US, a list of cities can vary depending on the state, 
 so State could be recommended as a parent of City.
 
 
 entry type : class Trading_NameValueRelationshipType
*/
@property (nonatomic, retain) NSMutableArray *relationship;

/**
 
 Indicates whether the name (e.g., Color) can (or must) be used to 
 classify the variation pictures.
 
 
 type: string constant in Trading_VariationPictureRuleCodeType.h
*/
@property (nonatomic, retain) NSString *variationPicture;

/**
 
 Indicates whether the recommended name/value pair can be used in 
 Item.Variations in AddFixedPriceItem and related calls. 
 For example, a given category could disable a name like Brand 
 in variation specifics (if Brand is only allowed in the item specifics at the Item level). The same category could
 enable a name like Size for variation specifics 
 (in addition to recommending it for item specifics). 
 If not returned, then the name/value can be used for
 both variation specifics and item specifics.
 
 
 type: string constant in Trading_VariationSpecificsRuleCodeType.h
*/
@property (nonatomic, retain) NSString *variationSpecifics;



@end
