//
//  EBayResponseContext.h
//  eBayMobileSDK
//
//  Created on 9/28/10.
//

#import <Foundation/Foundation.h>

@class EBayMessageContext;

/**
	Meta data associated with a response.
	@ingroup extensibility
 */
@interface EBayResponseContext : NSObject
{
	EBayMessageContext *messageContext_;
	NSInteger responseCode_;
	NSMutableData *data_;
}

/**
	Meta data for responses (e.g. received headers).
 */
@property (readonly) EBayMessageContext *messageContext;

/**
	The server response code (HTTP response code for HTTP transport).
 */
@property (nonatomic) NSInteger responseCode;

/**
	The raw data for the response as received from the server.
 */
@property (readonly) NSMutableData *data;

@end
