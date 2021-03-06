//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Applicable when working with Pre-filled Item Information (Catalogs) functionality.
 The label to display when presenting the attribute to a user.
 Not necessarily the same as the attribute's label as defined in the
 characteristic set (i.e., the label could be overridden by the catalog).
 
 
 @ingroup Trading
*/
@interface Trading_LabelType : NSObject <EbayNs_Bindable> {

@private
    NSString *name;
    NSNumber *visible;

}


/**
 
 The label to display when presenting the attribute to a user 
 (e.g., "Title" or "Manufacturer"). <br>
 <br>
 The label is defined for the product, and is therefore not 
 necessarily the same as the label that is defined in the characteristic set 
 returned by another call like GetAttributesCS.<br>
 <br>
 <b>For GetProductSearchPage</b>: If the attribute's label is "Keyword", 
 it means you can enter the attribute's ID and a string value in the 
 SearchAttributes node of GetProductSearchResults, 
 and then eBay will search for the string against one or more attributes in the catalog. 
 For example, for strollers, GetProductSearchPage only returns a Keyword attribute 
 instead of separate Brand, Product Type, and Model attributes (for the US site).
 So, you can use the single Keyword attribute to search against all of those attributes.<br>
 <br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;


/**
 (public property)
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *visible;


@end
