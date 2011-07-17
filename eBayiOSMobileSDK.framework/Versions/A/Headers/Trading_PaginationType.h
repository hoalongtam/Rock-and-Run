//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Contains data for controlling pagination in API requests.
 Pagination of returned data is required for some calls and not
 needed in or not supported for some calls. See the documentation
 for individual calls to determine whether pagination is supported,
 required, or desirable.
 
 
 @ingroup Trading
*/
@interface Trading_PaginationType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *entriesPerPage;
    NSNumber *pageNumber;

}


/**
 
 Specifies the maximum number of entries to return in a single call.
 If the number of entries that can be returned is less
 than the value in EntriesPerPage, then the lower number
 is returned.
 For most calls, the max is 200 and the default is 25.
 For GetUserDisputes, the value is hard-coded at 200, and any input is
 ignored. For GetProducts, the maximum is 20 (and higher values are
 ignored). See the annotations for other individual calls to determine
 the correct max and default values. For GetOrders, not applicable to eBay.com (but applicable to Half.com for GetOrders).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *entriesPerPage;

/**
 
 Specifies the number of the page of data to return in the current call.
 Default is 1 for most calls. For some calls, the default is 0. Specify a
 positive value equal to or lower than the number of pages available (which you
 determine by examining the results of your initial request).
 See the documentation for other individual calls to determine the correct
 default value. For GetOrders, not applicable to eBay.com (for GetOrders,
 applicable to Half.com).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pageNumber;



@end
