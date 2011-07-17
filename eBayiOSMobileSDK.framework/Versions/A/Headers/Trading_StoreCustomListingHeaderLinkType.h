//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Custom listing header link.
 
 
 @ingroup Trading
*/
@interface Trading_StoreCustomListingHeaderLinkType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *linkID;
    NSNumber *order;
    NSString *linkType;

}


/**
 
   Link ID for the listing header link. The ID is used when the link
   is a custom category or for a custom page, and it is not needed
   when the LinkType property is "AboutMe" or "None".
   
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *linkID;

/**
 
   Order in which to show the custom listing header link.
   
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *order;

/**
 
   Type of link to include in the custom listing header.
   
 
 type: string constant in Trading_StoreCustomListingHeaderLinkCodeType.h
*/
@property (nonatomic, retain) NSString *linkType;



@end
