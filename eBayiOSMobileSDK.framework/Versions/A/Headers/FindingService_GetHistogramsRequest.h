//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "SOACommon_BaseServiceRequest.h"



/**
 
 Get request for histogram information on the supplied category or aspect.
 
 
 @ingroup FindingService
*/
@interface FindingService_GetHistogramsRequest : SOACommon_BaseServiceRequest {

@private
    NSString *categoryId;

}


/**
 
 Specifies the category from which you want to retrieve histogram
 information.
 <br><br>
 If a specified category ID doesn't match an existing category for the
 site, eBay returns an invalid-category error message. To determine
 valid categories, use the Trading API <b 
 class="con">GetCategories</b> call.
 <br><br>
 Retrieving histograms by category is not supported on the eBay Italy 
 site (global ID EBAY-IT) at this time.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryId;


@end
