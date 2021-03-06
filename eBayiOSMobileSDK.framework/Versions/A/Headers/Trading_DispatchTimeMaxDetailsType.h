//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Details about a specific maximum dispatch time, the maximum number of business
 days required to ship an item to domestic buyers after receiving a cleared
 payment.
 
 
 @ingroup Trading
*/
@interface Trading_DispatchTimeMaxDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *dispatchTimeMax;
    NSString *description;
    NSString *detailVersion;
    NSDate *updateTime;

}


/**
 
 Integer value (1, 2, 3, 4, 5, 10, 15, or 20) corresponding to the
 maximum dispatch time. <br><br>
 Related field:<br>
 Item.DispatchTimeMax in AddItem
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *dispatchTimeMax;

/**
 
 Value and unit (e.g., 10 Days) for the maximum dispatch time.
 Useful for display purposes.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the
 details were last updated. This timestamp can be used to determine
 if and when to refresh cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;



@end
