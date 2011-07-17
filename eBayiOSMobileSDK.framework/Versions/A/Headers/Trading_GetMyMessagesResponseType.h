//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_MyMessagesSummaryType;
@class Trading_MyMessagesAlertArrayType;
@class Trading_MyMessagesMessageArrayType;

/**
 
 Conains information about the messages sent to
 a user. Depending on the detail level, this
 information can include message counts,
 resolution and flagged status, message
 headers, and message text.
 
 
 @ingroup Trading
*/
@interface Trading_GetMyMessagesResponseType : Trading_AbstractResponseType {

@private
    Trading_MyMessagesSummaryType *summary;
    Trading_MyMessagesAlertArrayType *alerts;
    Trading_MyMessagesMessageArrayType *messages;

}


/**
 
 Summary data for a given user's
 messages. This includes the numbers of
 new messages, flagged messages, and total messages.
 The amount and type of data returned is the same
 whether or not the request includes specific
 MessageIDs.
 Always/Conditionally returned logic assumes a
 detail level of ReturnMessages.
 
 
 type : class Trading_MyMessagesSummaryType
*/
@property (nonatomic, retain) Trading_MyMessagesSummaryType *summary;

/**
 
 This field will be deprecated in an upcoming release.
 This field formerly contained the alert information for each alert
 specified in AlertIDs.
 
 
 type : class Trading_MyMessagesAlertArrayType
*/
@property (nonatomic, retain) Trading_MyMessagesAlertArrayType *alerts;

/**
 
 Contains the message information for each
 message specified in MessageIDs. The amount and
 type of information returned varies based on the
 requested detail level. Contains one
 MyMessagesMessageType object per message.
 Returned as an empty node if user has no
 messages.
 
 
 type : class Trading_MyMessagesMessageArrayType
*/
@property (nonatomic, retain) Trading_MyMessagesMessageArrayType *messages;


@end
