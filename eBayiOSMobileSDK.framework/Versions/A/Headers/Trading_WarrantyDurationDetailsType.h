//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 (public class)
 
 @ingroup Trading
*/
@interface Trading_WarrantyDurationDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *warrantyDurationOption;
    NSString *description;

}


/**
 
 The warranty period.
 This value can be passed in the AddItem family of calls.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *warrantyDurationOption;

/**
 
 Display string that applications can use to present WarrantyDurationOption in
 a more user-friendly format (such as in a drop-down list).
 Not applicable as input to the AddItem family of calls. (Use WarrantyDurationOption instead.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;



@end
