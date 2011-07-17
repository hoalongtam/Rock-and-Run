//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Indicates whether or not the user is subject to VAT.
 Users who have registered with eBay as VAT-exempt are not
 subject to VAT. See documentation on Value-Added Tax (VAT).
 
 
 @ingroup Trading
*/

/**
 
 (out) VAT is not applicable
 
*/
extern NSString *const Trading_VATStatusCodeType_NO_VAT_TAX;

/**
 
 (out) Residence in a country with VAT and user is not registered as VAT-exempt
 
*/
extern NSString *const Trading_VATStatusCodeType_VAT_TAX;

/**
 
 (out) Residence in a country with VAT and user is registered as VAT-exempt
 
*/
extern NSString *const Trading_VATStatusCodeType_VAT_EXEMPT;

/**
 
 (out) Reserved for internal or future use
 
*/
extern NSString *const Trading_VATStatusCodeType_CUSTOM_CODE;
  
