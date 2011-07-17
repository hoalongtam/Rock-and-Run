//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Name of the domain to which search results will be restricted.
 
 
 @ingroup FindingService
*/
@interface FindingService_DomainFilter : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *domainName;
    NSString *delimiter;

}


/**
 
 Specify the name of the domain to which you want to restrict search
 results. Only items listed within the specified domain will be returned
 in the search results. Domain names can be retrieved from an aspect
 histogram.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *domainName;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *delimiter;



@end
