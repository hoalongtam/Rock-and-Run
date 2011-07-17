//
//  EBaySystemErrorMessage.h
//  eBayMobileSDK
//
//  Created on 9/27/10.
//

#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"

/**
	Represents a system error message for the SOA services (like Finding).
	When a system error is returned as response, use this class to deserialize the raw data.
 */
@interface EBaySystemErrorMessage : NSObject<EbayNs_Bindable>
{
@private
    NSMutableArray *error;
}

/**
	An array of errors of type FindingService_ErrorData.
 */
@property (nonatomic, retain) NSMutableArray *error;

@end

