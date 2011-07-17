//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Identifies the type of listing as an attribute on the ListingDuration node.
 
 
 @ingroup Trading
*/
@interface Trading_ListingDurationReferenceType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *value;
    NSString *type;

}


/**
 (public property)
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *value;

/**
 (public property)
 
 type: string constant in Trading_ListingTypeCodeType.h
*/
@property (nonatomic, retain) NSString *type;


@end
