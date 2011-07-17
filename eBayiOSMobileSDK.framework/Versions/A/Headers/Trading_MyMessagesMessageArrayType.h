//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_MyMessagesMessageType;

/**
 
 Contains a list of message data.
 
 
 @ingroup Trading
*/
@interface Trading_MyMessagesMessageArrayType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *message;

}


/**
 
 Contains the data for one message.
 
 
 entry type : class Trading_MyMessagesMessageType
*/
@property (nonatomic, retain) NSMutableArray *message;


@end
