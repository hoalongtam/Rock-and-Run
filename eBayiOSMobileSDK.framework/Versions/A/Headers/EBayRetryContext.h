//
//  EBayRetryContext.h
//  eBayMobileSDK
//
//  Created on 10/18/10.
//

#import <Foundation/Foundation.h>

/**
	Holds useful information for retrying a transaction.
	@ingroup extensibility
 */
@interface EBayRetryContext : NSObject
{
	NSInteger retryCount_;
	NSMutableDictionary *headersWhenRetrying_;
}

/**
	The number of times a transaction is being retried.
 */
@property (nonatomic) NSInteger retryCount;

/**
	Contains the headers to be added to the request when retrying.
 */
@property (nonatomic, retain) NSMutableDictionary *headersWhenRetrying;

@end
