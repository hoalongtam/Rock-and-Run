//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_ItemType;
@class Trading_ExternalProductIDType;

/**
 
 Enables a seller to specify the definition of a new item and submit the
 definition to eBay without creating a listing.
 <br><br>
 Sellers who engage in cross-border trade on sites that require a recoupment agreement, must agree to the
 recoupment terms before adding or verifying items. This agreement allows eBay to reimburse
 a buyer during a dispute and then recoup the cost from the seller. The US site is a recoupment site, and
         the agreement is located <a href="https://scgi.ebay.com/ws/eBayISAPI.dll?CBTRecoupAgreement">here</a>.
         The list of the sites where a user has agreed to the recoupment terms is returned by the GetUser response.
 
 
 @ingroup Trading
*/
@interface Trading_VerifyAddItemRequestType : Trading_AbstractRequestType {

@private
    Trading_ItemType *item;
    NSNumber *includeExpressRequirements;
    Trading_ExternalProductIDType *externalProductID;

}


/**
 
 ItemType object, the properties of which define the new item listing.
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;

/**
 
 Indicates if the response should include detailed data relating to
 whether an item would qualify as an Express listing. For
 information about the Express-related data that can be returned
 when IncludeExpressRequirements is set to true,
 see the response of VerifyAddItem and see the
 eBay Web Services Guide.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeExpressRequirements;

/**
 
 <b>Deprecated.</b> This field will be removed from the schema
 in a future release. Recommended usage as of release 439 varies for
 eBay.com listings and Half.com listings.
 <br><br>
 For eBay.com listings:
 As of release 439, this field can still be passed in, but we recommend
 that you update your applications to use the ExternalProductID field
 defined on the item instead (i.e., Item.ExternalProductID). If you
 specify both Item.ExternalProductID and this field in the same request,
 eBay uses the value in Item.ExternalProductID and ignores the value in
 this field. See Item.ExternalProductID for information on using an
 external ID for eBay.com listings.
 <br><br>
 For Half.com listings:
 As of release 439, this field is required for Half.com listings.
 Causes Half.com to list the item with Pre-filled Item Information based on
 an ISBN value or other supported external ID, plus other meta-data that
 you specify. See the eBay Web Services guide for information about
 listing to Half.com.
 
 
 type : class Trading_ExternalProductIDType
*/
@property (nonatomic, retain) Trading_ExternalProductIDType *externalProductID;


@end
