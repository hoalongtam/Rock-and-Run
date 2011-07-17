//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 This type contains the status of the items within a bid group.
 
 
 @ingroup Trading
*/

/**
 
 (out) The items in the group currently being bid on.
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_CURRENT_BID;

/**
 
 (out) Items in the group that were not bid on because a user retracted a bid
 and closed his group or because eBay Customer Support ended a group and all
 the active and pending items within that group were cancelled.
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_CANCELLED;

/**
 
 (out) Items in the bid group that are currently active, but have not yet been
 bid on.
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_PENDING;

/**
 
 (out) Items that have been skipped and not bid on (and bidded has ended).
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_SKIPPED;

/**
 
 (out) Item has ended.
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_ENDED;

/**
 
 (out) Item was purchased and has ended.
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_WON;

/**
 
 (out) Item has ended.
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_GROUP_CLOSED;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_BidGroupItemStatusCodeType_CUSTOM_CODE;
  
