//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "SOACommon_BaseServiceResponse.h"

// abstract class

@class SOACommon_ExtensionType;
@class FindingService_SearchResult;
@class FindingService_PaginationOutput;

/**
 
 Base response container for all Finding Service operations.
 
 
 @ingroup FindingService
*/
@interface FindingService_BaseFindingServiceResponse : SOACommon_BaseServiceResponse {

@private
    FindingService_SearchResult *searchResult;
    FindingService_PaginationOutput *paginationOutput;
    NSString *itemSearchURL;
    NSMutableArray *extension;

}


/**
 
 Container for the item listings that matched the search criteria.
 The data for each item is returned in individual containers, if
 any matches were found.
 
 
 type : class FindingService_SearchResult
*/
@property (nonatomic, retain) FindingService_SearchResult *searchResult;

/**
 
 Indicates the pagination of the result set. Child elements indicate
 the page number that is returned, the maximum number of item listings
 to return per page, total number of pages that can be returned, and
 the total number of listings that match the search criteria.
 
 
 type : class FindingService_PaginationOutput
*/
@property (nonatomic, retain) FindingService_PaginationOutput *paginationOutput;

/**
 
 A URL to view the search results on the eBay web site. The search
 results on the web site will use the same pagination as the API
 search results.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 eBay URLs returned in fields, such as <b 
 class="con">viewItemURL</b>, are subject to syntax and other
 changes without notice. To avoid problems in your application when
 eBay alters the URL format, we advise you to avoid parsing eBay URLs
 programmatically. We strive to ensure that other fields in the
 response contain all the information that is encoded in the URL, and
 more.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemSearchURL;

/**
 
 Reserved for future use.
 
 
 entry type : class SOACommon_ExtensionType
*/
@property (nonatomic, retain) NSMutableArray *extension;


@end