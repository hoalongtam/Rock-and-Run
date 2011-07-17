//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Container for fields related to affiliate tracking. For additional information,
 see the annotations to the elements in this type.
 
 
 @ingroup Trading
*/
@interface Trading_AffiliateTrackingDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *trackingID;
    NSString *trackingPartnerCode;
    NSString *applicationDeviceType;
    NSString *affiliateUserID;

}


/**
 
 The value you specify is obtained from your tracking partner.
 For eBay Partner Network, the TrackingID is the Campaign ID ("campid")
 provided by eBay Partner Network. A Campaign ID is a 10-digit, unique
 number for associating traffic. A Campaign ID is valid across all
 programs to which you have been accepted.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *trackingID;

/**
 
 Specifies your tracking partner for affiliate commissions.
 Required if you specify a TrackingID.
 Depending on your tracking partner, specify one of the
 following values. Not all partners are valid for all sites.
 For PlaceOffer, only eBay Partner Network and Mediaplex are valid:
 <br>
 <br>2 = Be Free
 <br>3 = Affilinet
 <br>4 = TradeDoubler
 <br>5 = Mediaplex
 <br>6 = DoubleClick
 <br>7 = Allyes
 <br>8 = BJMT
 <br>9 = eBay Partner Network
 <br>
 <br>
 For information about the eBay Partner Network, see
 <a href="https://www.ebaypartnernetwork.com" target="_blank">eBay Partner Network</a>.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *trackingPartnerCode;

/**
 
 Type of device from which the call originated. For PlaceOffer, if you are using
 affiliate tracking, this field is required as part of the set of tags you
 use in the AffiliateTrackingDetails container.
 
 
 type: string constant in Trading_ApplicationDeviceTypeCodeType.h
*/
@property (nonatomic, retain) NSString *applicationDeviceType;

/**
 
 Need not be specified. You can define an AffiliateUserID
 (up to 256 characters) if you want to leverage it to better monitor
 your marketing efforts.
 If you are using the eBay Partner Network,
 and you provide an AffiliateUserID, the tracking URL returned
 by eBay Partner Network will contain the AffiliateUserID, but it
 will be referred to as a "customid".
  
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *affiliateUserID;



@end
