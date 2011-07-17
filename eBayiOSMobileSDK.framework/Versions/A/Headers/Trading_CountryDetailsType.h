//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Details about a specific country.
 
 
 @ingroup Trading
*/
@interface Trading_CountryDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *country;
    NSString *description;
    NSString *detailVersion;
    NSDate *updateTime;

}


/**
 
 Two-letter country abbreviation.<br><br>
 Related fields:<br>
 Item.Country in AddItem<br>
 SearchLocationFilter.CountryCode in GetSearchResults
 
 
 type: string constant in Trading_CountryCodeType.h
*/
@property (nonatomic, retain) NSString *country;

/**
 
 Full country name for display purposes. May be similar to (but not necessarily identical to)
 CountryName in addresses (e.g., User.RegistrationAddress.CountryName in GetUser).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Returns the latest version number for this field. The version can be used to
 determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the
 details were last updated. This timestamp can be used to
 determine if and when to refresh cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;



@end