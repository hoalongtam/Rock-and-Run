//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Specifies standard subsets of data to return for each result
 within the set of results in the response payload. If no
 detail level is specified, a base set of data is returned.
 The base set of data varies per call.
 
 
 @ingroup Trading
*/

/**
 
 (in) Returns all available data.
 With GetSellerList and other calls that retrieve large data sets,
 please avoid using ReturnAll when possible. For example, if you use
 GetSellerList, use a GranularityLevel or use the
 GetSellerEvents call instead. If you use ReturnAll with GetSellerList,
 use a small EntriesPerPage value and a short
 EndTimeFrom/EndTimeTo range for better performance.
 
*/
extern NSString *const Trading_DetailLevelCodeType_RETURN_ALL;

/**
 
 (in) Returns Description, plus the
 ListingDesigner node and some additional information if applicable
 
*/
extern NSString *const Trading_DetailLevelCodeType_ITEM_RETURN_DESCRIPTION;

/**
 
 (in) For GetItem, returns Item Specifics and
 Pre-filled Item Information, if any.
 For GetSearchResults, only returns Item Specifics (if any) that
 are applicable to search results, and only under certain conditions.
 See the description of Item.AttributeSetArray for details about
 the effects for applicable calls. Also see the description of
 Item.ProductListingDetails for GetItem.
 
*/
extern NSString *const Trading_DetailLevelCodeType_ITEM_RETURN_ATTRIBUTES;

/**
 
 (in) For the GetSearchResults call, returns the primary category and, if applicable, the secondary category
 
*/
extern NSString *const Trading_DetailLevelCodeType_ITEM_RETURN_CATEGORIES;

/**
 
 (in) Returns the summary data.
 For GetMyMessages, this detail level returns the same data
 whether or not you include MessageIDs or AlertIDs in the
 request. Returns up to 10 FolderID and FolderName values.
 Currently, this detail level is the only way to retrieve
 FolderID and FolderName values. See "GetMyMessages" in the
 eBay Web Services Guide for a code sample that demonstrates
 this.
 
*/
extern NSString *const Trading_DetailLevelCodeType_RETURN_SUMMARY;

/**
 
 (in) Returns message headers.
 For GetMyMessages, if you include MessageIDs or AlertIDs in
 the request, this detail level returns header information,
 without body text, for the specified message ID or alert ID
 values. If you include a FolderID, header information is
 returned only for the messages and alerts in the specified
 folder.
 If you do not include MessageIDs or AlertIDs, this detail
 level returns header information for Alerts and Messages as follows:
 - If all the Alerts have been read, they are sorted in date order,
 with the most recent first.
 - If one of the Alerts has not been read, the Read Alerts come first,
 sorted most recent first, followed by the Unread Alert(s).
 - All messages in ascending order by date received with the
   oldest messages first.
 Note that even when restricted by this detail level to
 return only header information, GetMyMessages may return a
 high volume of data.
 
*/
extern NSString *const Trading_DetailLevelCodeType_RETURN_HEADERS;

/**
 
 (in) Returns full message information.
 For GetMyMessages, if you include MessageIDs or AlertIDs in
 the request, this detail level returns message information
 for the specified message ID or alert ID values. If you
 include a FolderID, message information is returned only for
 the messages and alerts in the specified folder.
 
*/
extern NSString *const Trading_DetailLevelCodeType_RETURN_MESSAGES;
  
