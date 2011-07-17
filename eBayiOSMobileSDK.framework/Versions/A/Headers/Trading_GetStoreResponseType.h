//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_StoreType;

/**
 
 Returns the data describing a seller's eBay store, including name, description,
 URL, and other information. The caller making the request must be the owner
 of an eBay store. If the authenticated caller does not have an eBay store, the
 response is an error. A successful response contains either the complete store
 configuration or information about the category hierarchy for the store only.
 
 
 @ingroup Trading
*/
@interface Trading_GetStoreResponseType : Trading_AbstractResponseType {

@private
    Trading_StoreType *store;

}


/**
 
 The data describing the store configuration.
 
 
 type : class Trading_StoreType
*/
@property (nonatomic, retain) Trading_StoreType *store;


@end
