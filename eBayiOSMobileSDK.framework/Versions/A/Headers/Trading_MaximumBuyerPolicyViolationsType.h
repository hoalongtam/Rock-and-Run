//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Container for Maximum Buyer Policy Violation Reports buyer requirements in listing calls.
 
 
 @ingroup Trading
*/
@interface Trading_MaximumBuyerPolicyViolationsType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *count;
    NSString *period;

}


/**
 
 Maximum allowed buyer policy violation reports against the buyer. If the limit is reached, the buyer can not bid on this item.
 Used with Period.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *count;

/**
 
 If a buyer fails to follow eBay policy guidelines for an auction, they may incur a buyer violation report on their account. The Period and Count elements
 allow a seller to specify that only buyers with a specified number of
 buyer violation reports within a given period of time can bid on their
 item. If a buyer has more buyer violation reports than specified within these limits, the buyer can not bid on this item.
 The Period is the past number of days (last 60 days, last 180 days, etc.)
 within which the buyer violation reports are calculated.
 Used with Count.
 
 
 type: string constant in Trading_PeriodCodeType.h
*/
@property (nonatomic, retain) NSString *period;



@end
