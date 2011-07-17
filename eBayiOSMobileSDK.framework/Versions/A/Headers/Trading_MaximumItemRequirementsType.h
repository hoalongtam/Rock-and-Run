//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Container for items bid.
 
 
 @ingroup Trading
*/
@interface Trading_MaximumItemRequirementsType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *maximumItemCount;
    NSNumber *minimumFeedbackScore;

}


/**
 
 If this field is present, blocking is enabled,
 where the value of this field represents the
 maximum number of this seller's items a bidder is allowed to bid
 on in a 10 day period before being blocked.
 Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 25, 50, 75, 100.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maximumItemCount;

/**
 
 This field is ignored on input unless MaximumItemCount has been provided. If MaximumItemCount
 is included in the call, both MaximumItemCount and MinimumFeedbackScore
 are used to determine whether the bidder is blocked from bidding.
 <br><br>
 A user is blocked from bidding if they have reached or exceeded the MaximumItemCount
 and the user's feedback score is less than or equal to the value of this field.
 Valid values: 0, 1, 2, 3, 4, 5.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *minimumFeedbackScore;


@end