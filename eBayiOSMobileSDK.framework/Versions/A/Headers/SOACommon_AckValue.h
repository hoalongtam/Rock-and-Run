//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Indicates whether the error is a fatal error (causing the request to fail)
 or a less severe error (a warning) that should be communicated to the user.
 
 
 @ingroup FindingService
*/

/**
 
 eBay successfully processed the request and the business data is returned
 in the response. Note that it is possible for a response to return
 Success, but still not contain the expected data in the result.
 
*/
extern NSString *const SOACommon_AckValue_SUCCESS;

/**
 
 eBay encountered a fatal error during the processing of the request,
 causing the request to fail. When a serious application-level error
 occurs, the error is returned instead of the business data.
 
*/
extern NSString *const SOACommon_AckValue_FAILURE;

/**
 
 The request was successfully processed, but eBay encountered a non-fatal
 error during the processing. For best results, requests should return
 without warnings. Inspect the warning details and resolve the problem
 before resubmitting the request.
 
*/
extern NSString *const SOACommon_AckValue_WARNING;

/**
 
 eBay successfully processed the request, but one or more non-fatal errors
 occurred during the processing. For best results, requests should return
 without warning messages. Inspect the message details and resolve any
 problems before resubmitting the request.
 
*/
extern NSString *const SOACommon_AckValue_PARTIAL_FAILURE;
  