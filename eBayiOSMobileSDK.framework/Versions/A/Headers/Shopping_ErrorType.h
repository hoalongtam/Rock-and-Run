//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Shopping_ErrorParameterType;

/**
 
 These are request errors (as opposed to system errors) that occur due to problems
 with business-level data (e.g., an invalid combination of arguments) that
 the application passed in.
 
 
 @ingroup Shopping
*/
@interface Shopping_ErrorType : NSObject <EbayNs_Bindable> {

@private
    NSString *shortMessage;
    NSString *longMessage;
    NSString *errorCode;
    NSNumber *userDisplayHint;
    NSString *severityCode;
    NSMutableArray *errorParameters;
    NSString *errorClassification;

}


/**
 
 A brief description of the condition that raised the error.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shortMessage;

/**
 
 A more detailed description of the condition that raised the error.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *longMessage;

/**
 
 A unique code that identifies the particular error condition that occurred.
 Your application can use error codes as identifiers
 in your customized error-handling algorithms.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *errorCode;

/**
 
 This field is not currently in use for eBay Shopping Web Services.
 Indicates whether the error message text is intended to be displayed to
 an end user or intended only to be parsed by the application.
 If true or not present (the default), the message text is intended for the end user. If false, the message text is intended for
 the application, and the application should translate the error into a more appropriate message.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *userDisplayHint;

/**
 
 Indicates whether the error caused the request to fail.<br>
 <br>
 If the request fails and the source of the problem is within the
 application (such as a missing required element), please change the
 application before you  retry the request. If the problem is due to
 end-user input data, please alert the end-user to the problem and
 provide the means for them to correct the data. Once the problem in the
 application or data is resolved, you can attempt to re-send the request
 to eBay.<br>
 <br>
 If the source of the problem is on eBay's side, you can retry the
 request as-is a reasonable number of times (eBay recommends twice).
 If the error persists, contact Developer Technical Support. Once the
 problem has been resolved, the request may be resent in its original
 form.<br>
 <br>
 When a warning occurs, the error is returned in addition to the business
 data. In this case, you do not need to retry the request (as the
 original request was successful). However, depending on the cause or
 nature of the warning, you might need to contact either the end user or
 eBay to effect a long term solution to the problem to prevent it from
 reoccurring in the future.
 
 
 type: string constant in Shopping_SeverityCodeType.h
*/
@property (nonatomic, retain) NSString *severityCode;

/**
 
 Some warning and error messages return one or more variables that
 contain contextual information about the error. This is often the
 field or value that triggered the error.
 You can usually predict where these will
 occur by looking at the "replaceable_value" indicators in our
 Errors by Number page.
 
 
 entry type : class Shopping_ErrorParameterType
*/
@property (nonatomic, retain) NSMutableArray *errorParameters;

/**
 
 API errors are divided between two classes: system errors and request errors.
 
 
 type: string constant in Shopping_ErrorClassificationCodeType.h
*/
@property (nonatomic, retain) NSString *errorClassification;



@end
