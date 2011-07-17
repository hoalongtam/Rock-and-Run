//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Defines properties associated with a particular event.
 
 
 @ingroup Trading
*/
@interface Trading_NotificationEventPropertyType : NSObject <EbayNs_Bindable> {

@private
    NSString *eventType;
    NSString *name;
    NSString *value;

}


/**
 
 The name of the notification event.
 
 
 type: string constant in Trading_NotificationEventTypeCodeType.h
*/
@property (nonatomic, retain) NSString *eventType;

/**
 
 Specify property name associated with an particular event.
 
 
 type: string constant in Trading_NotificationEventPropertyNameCodeType.h
*/
@property (nonatomic, retain) NSString *name;

/**
 
 Specifies the value for the property.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *value;



@end
