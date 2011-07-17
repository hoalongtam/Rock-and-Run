//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_AddressType;
@class Trading_ShipmentTrackingDetailsType;
@class Trading_ItemTransactionIDType;
@class Trading_MeasureType;
@class Trading_AmountType;

/**
 (public class)
 
 @ingroup Trading
*/
@interface Trading_ShipmentType : NSObject <EbayNs_Bindable> {

@private
    NSDate *estimatedDeliveryDate;
    Trading_AmountType *insuredValue;
    Trading_MeasureType *packageDepth;
    Trading_MeasureType *packageLength;
    Trading_MeasureType *packageWidth;
    NSString *payPalShipmentID;
    NSNumber *shipmentID;
    Trading_AmountType *postageTotal;
    NSDate *printedTime;
    Trading_AddressType *shipFromAddress;
    Trading_AddressType *shippingAddress;
    NSString *shippingCarrierUsed;
    NSMutableArray *shippingFeature;
    NSString *shippingPackage;
    NSString *shippingServiceUsed;
    NSString *shipmentTrackingNumber;
    Trading_MeasureType *weightMajor;
    Trading_MeasureType *weightMinor;
    NSMutableArray *itemTransactionID;
    NSDate *deliveryDate;
    NSString *deliveryStatus;
    NSDate *refundGrantedTime;
    NSDate *refundRequestedTime;
    NSString *status;
    NSDate *shippedTime;
    NSString *notes;
    NSMutableArray *shipmentTrackingDetails;

}


/**
 (public property)
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *estimatedDeliveryDate;

/**
 (public property)
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *insuredValue;

/**
 
 Depth dimension of the package needed to ship the item after it is sold.
 <br>
 For calculated shipping only.
 
 
 type : class Trading_MeasureType
*/
@property (nonatomic, retain) Trading_MeasureType *packageDepth;

/**
 
 Length dimension of the package needed to ship the item after it is sold.
 <br>
 For calculated shipping only.
 
 
 type : class Trading_MeasureType
*/
@property (nonatomic, retain) Trading_MeasureType *packageLength;

/**
 
 Width dimension of the package needed to ship the item after it is sold.
 <br>
 For calculated shipping only.
 
 
 type : class Trading_MeasureType
*/
@property (nonatomic, retain) Trading_MeasureType *packageWidth;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *payPalShipmentID;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *shipmentID;

/**
 (public property)
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *postageTotal;

/**
 (public property)
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *printedTime;

/**
 
   The address from which the item is being shipped.
 
 
 type : class Trading_AddressType
*/
@property (nonatomic, retain) Trading_AddressType *shipFromAddress;

/**
 
 The address to which the item is to be shipped.
 
 
 type : class Trading_AddressType
*/
@property (nonatomic, retain) Trading_AddressType *shippingAddress;

/**
 
 The shipping carrier used.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingCarrierUsed;

/**
 (public property)
 
 entry type : string constant in Trading_ShippingFeatureCodeType.h
*/
@property (nonatomic, retain) NSMutableArray *shippingFeature;

/**
 
 The size of the package used to ship the item(s). See ShippingPackageCodeType
 for its possible values. Input.
 
 
 type: string constant in Trading_ShippingPackageCodeType.h
*/
@property (nonatomic, retain) NSString *shippingPackage;

/**
 
 The size of the package used to ship the item(s). See ShippingPackageCodeType
 for its possible values. Input.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingServiceUsed;

/**
 
 The tracking number associated with the shipment. The format of the shipment
 tracking number must be consistent with the specified ShippingCarrierUsed.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shipmentTrackingNumber;

/**
 
 See the documentation regarding "Working with Item Weights".
 The 'unit' attribute can have a value of lbs.
 
 
 type : class Trading_MeasureType
*/
@property (nonatomic, retain) Trading_MeasureType *weightMajor;

/**
 
 See the documentation regarding "Working with Item Weights".
 The 'unit' attribute is optional and assumed to be the
 minor compared to the value of 'unit' in WeightMajor.
 
 
 type : class Trading_MeasureType
*/
@property (nonatomic, retain) Trading_MeasureType *weightMinor;

/**
 (public property)
 
 entry type : class Trading_ItemTransactionIDType
*/
@property (nonatomic, retain) NSMutableArray *itemTransactionID;

/**
 
 Revise only
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *deliveryDate;

/**
 
 Revise only
 
 
 type: string constant in Trading_ShipmentDeliveryStatusCodeType.h
*/
@property (nonatomic, retain) NSString *deliveryStatus;

/**
 
 Revise only
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *refundGrantedTime;

/**
 
 Revise only
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *refundRequestedTime;

/**
 
 Status, for revise only
 
 
 type: string constant in Trading_ShipmentStatusCodeType.h
*/
@property (nonatomic, retain) NSString *status;

/**
 
 The time that the seller handed off the item to the shipping carrier.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *shippedTime;

/**
 
 A seller's shipment-related notes to the buyer, as alpha-numeric text.
 Applicable after an item is shipped.
 <br>
 Applicable only to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *notes;

/**
 
 Container for the shipping carrier and tracking information associated with an
 item shipment.
 <br><br>
 This is a repeatable container, allowing for multiple package shipments to be
 input for a single item transaction.
 
 
 entry type : class Trading_ShipmentTrackingDetailsType
*/
@property (nonatomic, retain) NSMutableArray *shipmentTrackingDetails;



@end
