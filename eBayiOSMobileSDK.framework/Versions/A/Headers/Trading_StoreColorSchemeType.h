//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_StoreColorType;
@class Trading_StoreFontType;

/**
 
 Store color scheme.
 
 
 @ingroup Trading
*/
@interface Trading_StoreColorSchemeType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *colorSchemeID;
    NSString *name;
    Trading_StoreColorType *color;
    Trading_StoreFontType *font;

}


/**
 
 Store color scheme ID. (use GetStoreOptions to get the list of
 valid theme color scheme IDs).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *colorSchemeID;

/**
 
 Store color scheme name. Provides a user-friendly name for the
 color scheme.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 Store color set.
 
 
 type : class Trading_StoreColorType
*/
@property (nonatomic, retain) Trading_StoreColorType *color;

/**
 
 Store font set.
 
 
 type : class Trading_StoreFontType
*/
@property (nonatomic, retain) Trading_StoreFontType *font;



@end
