//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_BestOfferType;

/**
  
 A collection of Best Offers. Empty if there are no best offers.
 
 
 @ingroup Trading
*/
@interface Trading_BestOfferArrayType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *bestOffer;

}


/**
  
 A container of details about a best offer.
 
 
 entry type : class Trading_BestOfferType
*/
@property (nonatomic, retain) NSMutableArray *bestOffer;


@end
