//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_NotificationEnableType;

/**
 
 A list of NotificationEnable entries. Each entry specifies
 one notification and whether it is enabled.
 
 
 @ingroup Trading
*/
@interface Trading_NotificationEnableArrayType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *notificationEnable;

}


/**
 
 Specifies one notification or alert event and whether it is
 enabled or disabled. Returned if previously set.
 
 
 entry type : class Trading_NotificationEnableType
*/
@property (nonatomic, retain) NSMutableArray *notificationEnable;


@end
