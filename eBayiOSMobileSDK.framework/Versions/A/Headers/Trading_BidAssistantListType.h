//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Defines how a list of BidAssistant items should be returned.
 
 
 @ingroup Trading
*/
@interface Trading_BidAssistantListType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *bidGroupID;
    NSNumber *includeNotes;

}


/**
 
 Use this element to specify the bid group id for the Bid Assistant items 
 that you want information about.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *bidGroupID;

/**
 
 Specifies whether or not to include Item.PrivateNotes and Item.eBayNotes
 in the response.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeNotes;



@end
