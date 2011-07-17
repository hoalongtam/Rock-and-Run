//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Provides three modes for retrieving a list of the users that bid on
 a listing.
 
 
 @ingroup Trading
*/
@interface Trading_GetAllBiddersRequestType : Trading_AbstractRequestType {

@private
    NSString *itemID;
    NSString *callMode;
    NSNumber *includeBiddingSummary;

}


/**
 
 The item ID for which to retrieve the list of bidders.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Specifies which bidder information to return.
 
 
 type: string constant in Trading_GetAllBiddersModeCodeType.h
*/
@property (nonatomic, retain) NSString *callMode;

/**
 
 Specifies whether return BiddingSummary container for each offer.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeBiddingSummary;


@end
