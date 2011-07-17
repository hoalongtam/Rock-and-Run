//
//  EBayError.h
//  eBayMobileSDK
//
//  Created on 9/27/10.
//

#import <Foundation/Foundation.h>

#import "EBayErrorCodes.h"

/** 
	Error severity.
	@ingroup err
  */
typedef enum EBaySeverity
{
	kEBaySeverityError,			/**< Error */
	kEBaySeverityWarning		/**< Warning */
} EBaySeverity;

/** 
	Error category.
	@ingroup err
 */
typedef enum EBayErrorCategory
{
	kEBayErrorCategoryClient,	/**< Client error */
	kEBayErrorCategoryServer	/**< Server error */
} EBayErrorCategory;

/** 
	The details regarding a single error that occurred during execution of the transaction.
	@ingroup err
 */
@interface EBayError : NSObject <NSCopying>
{
	long errorID_;
	NSString *message_;
	EBaySeverity severity_;
	EBayErrorCategory category_;
}

/**
	Numeric id that represent the error that occurs.
	This allows application to optionally handle the error in a programmatic manner.
	For server side errors, the value is the one from the official eBay service documentation.
	For client side errors, the values are defined in EBayErrorCodes.h.
	@see EBayErrorCodes.h
  */
@property (nonatomic) long errorID;

/**
	Human readable error description.
 */
@property (nonatomic, retain) NSString *message;

/**
	Error severity.
	@see EBaySeverity
  */
@property (nonatomic) EBaySeverity severity;

/**
	Error category.
	@see EBayErrorCategory
 */
@property (nonatomic) EBayErrorCategory category;

/**
	
	@see EBayErrorCategory
 */
/**
	Constructs an error given the error id, message, severity and category.
	@param errorID Error identifier.
	@param message Human readable error description.
	@param severity Error severity.
	@param category Error category.
	@returns The newly created error object.
 */
+(EBayError*) errorWithID:(long)errorID message:(NSString*)message severity:(EBaySeverity)severity category:(EBayErrorCategory)category;


@end
