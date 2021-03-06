//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_FeedbackDetailArrayType;
@class Trading_PaginationResultType;
@class Trading_FeedbackSummaryType;

/**
 
 The GetFeedback response contains the feedback summary if a 
 Transaction ID or Item ID is specified, and contains the specified user's total
 feedback score and feedback summary data if a User ID is specified. If no
 value is supplied, the feedback score and feedback summary for the requesting
 user will be returned. 
 <br>
 If a detail level value of ReturnAll is specified, an array of all feedback 
 records will be returned.
 
 
 @ingroup Trading
*/
@interface Trading_GetFeedbackResponseType : Trading_AbstractResponseType {

@private
    Trading_FeedbackDetailArrayType *feedbackDetailArray;
    NSNumber *feedbackDetailItemTotal;
    Trading_FeedbackSummaryType *feedbackSummary;
    NSNumber *feedbackScore;
    Trading_PaginationResultType *paginationResult;
    NSNumber *entriesPerPage;
    NSNumber *pageNumber;

}


/**
 
 Contains the individual feedback records for the user, transaction, or
 item is specified in the request. There is one FeedbackDetailType
 object for each feedback record. Only populated with data when a detail level of ReturnAll is specified in the request. Not returned if you specify FeedbackID in the request.
 
 
 type : class Trading_FeedbackDetailArrayType
*/
@property (nonatomic, retain) Trading_FeedbackDetailArrayType *feedbackDetailArray;

/**
 
 Indicates the number of FeedbackDetailType objects returned in the
 FeedbackDetailArray property. Only applicable if feedback details are
 returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *feedbackDetailItemTotal;

/**
 
 Summary feedback data for the user. Contains counts of positive, neutral,
 and negative feedback for predefined time periods. Only applicable if feedback details are returned.
 
 
 type : class Trading_FeedbackSummaryType
*/
@property (nonatomic, retain) Trading_FeedbackSummaryType *feedbackSummary;

/**
 
 Indicates the total feedback score for the user.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *feedbackScore;

/**
 
 Contains information regarding the pagination of data (if pagination is
 used), including total number of pages and total number of entries. This
 is only applicable when a User ID or no ID (requester option) is specified.
 
 
 type : class Trading_PaginationResultType
*/
@property (nonatomic, retain) Trading_PaginationResultType *paginationResult;

/**
 
 Indicates the number of entries (feedback detail) that are being 
 returned per page of data (i.e., per call).  
 Only returned if entries are returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *entriesPerPage;

/**
 
 Indicates which page of data was just returned. Will be the same as the
 value specified in Pagination.PageNumber. (If the input is
 higher than the total number of pages, the call fails with an error.)
 Only returned if items are returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pageNumber;


@end
