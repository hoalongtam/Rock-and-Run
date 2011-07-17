//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class SOACommon_ErrorData;

/**
 
 Information regarding an error or warning that occurred when eBay processed
 the request. Not returned when the ack value is Success. Run-time errors are
 not reported here, but are instead reported as part of a SOAP fault.
 
 
 @ingroup FindingService
*/
@interface SOACommon_ErrorMessage : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *error;

}


/**
 
 Details about a single error.
 
 
 entry type : class SOACommon_ErrorData
*/
@property (nonatomic, retain) NSMutableArray *error;


@end
