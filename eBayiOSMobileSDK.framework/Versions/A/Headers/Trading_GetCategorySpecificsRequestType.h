//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_CategoryItemSpecificsType;

/**
 
 Returns the most popular custom Item Specific names and values for each
 leaf category you request.
 
 
 @ingroup Trading
*/
@interface Trading_GetCategorySpecificsRequestType : Trading_AbstractRequestType {

@private
    NSMutableArray *categoryID;
    NSDate *lastUpdateTime;
    NSNumber *maxNames;
    NSNumber *maxValuesPerName;
    NSString *name;
    NSMutableArray *categorySpecific;
    NSNumber *excludeRelationships;
    NSNumber *includeConfidence;
    NSNumber *categorySpecificsFileInfo;

}


/**
 
 A leaf-level eBay category ID. This call retrieves recommended
 Item Specifics (if any) for each leaf category you specify.
 (The call returns no results for a parent category.)
 To determine which leaf categories support listing with custom
 Item Specifics, use GetCategoryFeatures.
 <br><br>
 <span class="tablenote"><b>Note:</b>
 This call may return recommendations for categories that don't
 support listing with custom Item Specifics. That is, the
 presence of recommendations for a category does not necessarily
 mean that AddItem supports custom Item Specifics for that
 category and site.
 </span>
 <br><br>
 The request requires either CategoryID, CategorySpecfics.CategoryID, or
 CategorySpecificsFileInfo (or the call returns an error). CategoryID and
 CategorySpecific.CategoryID can both be used in the same request.
 (CategorySpecific offers more options to control the response.)
 <br><br>
 You can specify multiple leaf categories, but more categories can result in
 longer response times. If your request times out, specify fewer IDs. If you
 specify the same ID twice, we use the first instance.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *categoryID;

/**
 
 Causes the recommendation engine to check whether the list of
 popular Item Specifics for each specified category has changed
 since this date and time. If specified, this call returns no
 Item Specifics; it only returns whether the data has changed
 for any of the requested categories.<br>
 <br>
 Typically, you pass in the Timestamp that was
 returned the last time you refreshed the list of names and values
 for the same categories. If the Updated flag returns true for any
 categories in the response, call GetCategorySpecifics again
 for those categories to get the latest names and values.
 (As downloading all the data may affect your application's
 performance, it may help to only download Item Specifics
 for a category if they have changed since you last checked.)
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *lastUpdateTime;

/**
 
 Maximum number of Item Specifics to return
 per category (where each Item Specific is identified
 by a unique name within the category).
 Use this to retrieve fewer results per category.
 For example, if you only want up to 2 per category
 (the top 2 most popular names), specify 2.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxNames;

/**
 
 Maximum number of values to retrieve per Item Specific.
 Use this to retrieve fewer values per name.
 For example, if you only want the most popular value,
 specify 1.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxValuesPerName;

/**
 
 The name of one Item Specific name to find values for.
 Use this if you want to find out whether a name
 that the seller provided has recommended values.
 If you specify multiple leaf categories in the request,
 the recommendation engine returns all matching
 names and values it finds for each of those categories.
 At the time of this writing, this value is case-sensitive.
 (Wildcards are not supported.)<br>
 <br>
 Name and CategorySpecific.ItemSpecific can be used in the
 request. (If you plan to only use one or the other in your application,
 you should use ItemSpecific, as it may offer more options in the future.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 Applicable with request version 609 and higher. (This
 does not retrieve data at all if your request version is lower
 than 609.)
 Contains a leaf category for which you want recommended
 Item Specifics, and (optionally) names and values to help
 you refine the recommendations.
 You can specify multiple categories (but more categories
 can result in longer response times). If you specify the same
 category twice, we use the first instance.<br>
 <br>
 Depending on how many recommendations are found, your request
 may time out if you specify too many categories.
 (Typically, you can download recommendations for about 275
 categories at a time.)<br>
 <br>
 CategoryID and CategorySpecific.CategoryID can be used
 in the request. (If you plan to only use one or the other in
 your application, you should use CategorySpecific,
 as it may offer more options in the future.)
 
 
 entry type : class Trading_CategoryItemSpecificsType
*/
@property (nonatomic, retain) NSMutableArray *categorySpecific;

/**
 
 If true, the Relationship node is not returned for any
 recommendations. Relationship recommendations tell you whether
 an Item Specific value has a logical dependency another
 Item Specific.<br>
 <br>
 For example, in a clothing category, Size Type could be
 recommended as a parent of Size, because Size=Small would
 mean something different to buyers depending on whether
 Size Type=Petite or Size Type=Plus.<br>
 <br>
 In general, it is a good idea to retrieve and use relationship
 recommendations, as this data can help buyers find the items
 they want more easily.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *excludeRelationships;

/**
 
 If true, returns eBay's level of confidence in the popularity of
 each name and value. Some sellers may find this useful when
 choosing whether to use eBay's recommendation or their own
 name or value.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeConfidence;

/**
 
 If true, the response includes FileReferenceID and
 TaskReferenceID. Use these IDs as inputs to the downloadFile
 call in the eBay File Transfer API. That API lets you retrieve
 a single (bulk) GetCategorySpecifics response with all the Item
 Specifics recommendations available for the requested site ID.
 (The downloadFile call downloads a .zip file as an
 attachment.)<br>
 <br>
 Either CategorySpecificsFileInfo or a CategoryID is required
 (or you can specify both).<br>
 <br>
 <span class="tablenote"><b>Note:</b>
 You can use the File Transfer API without using or learning
 about the Bulk Data Exchange API or other
 Large Merchant Services APIs.
 </span>
 <br>
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *categorySpecificsFileInfo;


@end
