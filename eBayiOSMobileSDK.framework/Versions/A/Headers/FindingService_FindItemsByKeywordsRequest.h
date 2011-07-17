//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "FindingService_BaseFindingServiceRequest.h"


@class FindingService_AspectFilter;
@class FindingService_DomainFilter;
@class FindingService_ItemFilter;

/**
 
 Searches for items based on a keyword query and returns details for matching
 items. Item filters can be used to restrict search results. Aspect filters 
 can be used to further refine results. Use outputSelector to expand the 
 amount of data returned for each matching item.
 
 
 @ingroup FindingService
*/
@interface FindingService_FindItemsByKeywordsRequest : FindingService_BaseFindingServiceRequest {

@private
    NSString *keywords;
    NSMutableArray *itemFilter;
    NSMutableArray *aspectFilter;
    NSMutableArray *outputSelector;
    NSMutableArray *domainFilter;

}


/**
 
 Specify one or more words to use in a search query for finding items
 on eBay. By default, queries search item titles only. When running
 queries, it is best to include complete keywords values--eBay checks
 words in context with each other. If you are using a URL request and
 your keyword query consists of multiple words, use "%20" to separate
 the words. For example, use "Harry%20Potter" to search for items
 containing those words in any order.
 <br><br>
 You can incorporate wildcards in a multi-word search. For example,
 "ap*%20ip*" returns results for "apple ipod" among other matches. The
 words "and" and "or" are treated like any other word (and not their
 logical connotation). Only use "and", "or", or "the" if you are
 searching for listings containing those specific words.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *keywords;

/**
 
 Reduces the number of items returned in the response according to the 
 filters you specify.
 
 
 entry type : class FindingService_ItemFilter
*/
@property (nonatomic, retain) NSMutableArray *itemFilter;

/**
 
 Aspect filters refine (limit) the number of items returned by a find
 request. Obtain input values for aspectFilter fields from an
 aspectHistogramContainer returned in the response of a previous
 query. 
 <br><br> 
 By issuing a series of find queries,
 you can continually refine the items returned in your responses. Do
 this by repeating a query using the aspect values returned in one
 response as the input values to your next query. 
 <br><br/> 
 For example, the aspectHistogramContainer in a response on
 Men's Shoes could contain an aspect of Size, along with "aspect
 values" for the different sizes currently available in Men's Shoes.
 By populating aspectFilter fields with the values returned in an
 aspectHistogramContainer, you can refine the item results returned by
 your new query. 
 
 
 entry type : class FindingService_AspectFilter
*/
@property (nonatomic, retain) NSMutableArray *aspectFilter;

/**
 
 Specifies what item data to return in a response in addition to the
 default set of data.
 <br><br>
 If you don't specify this field, eBay returns a default set of item
 fields. Use outputSelector to include more item information in the
 response. The additional data is grouped into discrete nodes. You can
 specify multiple nodes by including this field multiple times, as
 needed, in the request.
 <br><br>
 If you specify this field, the additional fields returned can affect
 the call's performance (response time), as is the case with including
 seller feedback data.
 
 
 entry type : string constant in FindingService_OutputSelectorType.h
*/
@property (nonatomic, retain) NSMutableArray *outputSelector;

/**
 
 Restricts results to items listed within the specified domain.
 Domains are a buy-side grouping of items, such as shoes or digital
 cameras. A domain can span multiple eBay categories.
 
 
 entry type : class FindingService_DomainFilter
*/
@property (nonatomic, retain) NSMutableArray *domainFilter;


@end
