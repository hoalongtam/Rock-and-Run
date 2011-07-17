//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_FeeType;

/**
 
 Identifies a set of one or more fees that a member pays to eBay (or
 an eBay company). Instances of this type can hold one or more fees.
 
 
 @ingroup Trading
*/
@interface Trading_FeesType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *fee;

}


/**
 
 Contains the name, fee, and possible discount amount for an item listing feature.
 A Fee container is returned for each listing feature, even if the associated cost
 (Fee value) is 0.
 
 
 entry type : class Trading_FeeType
*/
@property (nonatomic, retain) NSMutableArray *fee;


@end