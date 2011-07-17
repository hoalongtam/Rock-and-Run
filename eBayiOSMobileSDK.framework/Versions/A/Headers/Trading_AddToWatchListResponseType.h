//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
 Indicates the number of items currently in the user's Watch List and the maximum
 number of items allowed in the Watch List.
 
 
 @ingroup Trading
*/
@interface Trading_AddToWatchListResponseType : Trading_AbstractResponseType {

@private
    NSNumber *watchListCount;
    NSNumber *watchListMaximum;

}


/**
 
 The number of items in the user's watch list (after those specified
 in the call request have been added)
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *watchListCount;

/**
 
 The maximum number of items allowed in watch lists. Currently this
 value is the same for all sites and all users.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *watchListMaximum;


@end