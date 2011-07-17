//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Defines the affiliation status for a nonprofit charity
 organization registered with the eBay Giving Works provider.
 
 
 @ingroup Trading
*/
@interface Trading_CharityIDType : NSObject <EbayNs_Bindable> {

@private
    NSString *value;
    NSString *type;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *value;

/**
 (public property)
 
 type: string constant in Trading_CharityAffiliationTypeCodeType.h
*/
@property (nonatomic, retain) NSString *type;


@end
