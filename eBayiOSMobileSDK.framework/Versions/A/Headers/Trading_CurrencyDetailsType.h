//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Details about a currency.
 
 
 @ingroup Trading
*/
@interface Trading_CurrencyDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSString *currency;
    NSString *description;
    NSString *detailVersion;
    NSDate *updateTime;

}


/**
 
 Currency abbreviation.<br><br>
 Related fields:<br>
 Item.Currency and Item.StartPrice in AddItem<br>
 SearchLocationFilter.Currency in GetSearchResults
 
 
 type: string constant in Trading_CurrencyCodeType.h
*/
@property (nonatomic, retain) NSString *currency;

/**
 
 Full currency name for display purposes.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Returns the latest version number for this field. The version can be used
 to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the
 details were last updated. This timestamp can be used to determine if
 and when to refresh cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;



@end
