//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
            Container for supported site information
         
 
 @ingroup Trading
*/
@interface Trading_RecoupmentPolicyConsentType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *site;

}


/**
 
                   Site codes for sites where the Seller has agreed to cross-border trade recoupment.
                   This means that the site where the seller is trading requires a recoupment agreement
                   for cross-border trade, and the seller has an agreement in effect.
                 
 
 entry type : string constant in Trading_SiteCodeType.h
*/
@property (nonatomic, retain) NSMutableArray *site;



@end
