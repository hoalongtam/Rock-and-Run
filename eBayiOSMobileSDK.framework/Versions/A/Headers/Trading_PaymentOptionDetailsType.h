//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Details about a specific payment option.
 
 
 @ingroup Trading
*/
@interface Trading_PaymentOptionDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *paymentOption;
    NSString *description;
    NSString *detailVersion;
    NSDate *updateTime;

}


/**
 
 A payment method value defined in the schema.<br><br>
 Related fields:<br>
 Item.PaymentMethods in AddItem<br>
 PaymentMethodUsed in ReviseCheckoutStatus
 
 
 type: string constant in Trading_BuyerPaymentMethodCodeType.h
*/
@property (nonatomic, retain) NSString *paymentOption;

/**
 
 Full name of the payment method for display purposes.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the details were last
 updated. This timestamp can be used to determine if and when to refresh
 cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;



@end
