//
//  EBayMessageContext.h
//  eBayMobileSDK
//
//  Created on 9/23/10.
//

#import <Foundation/Foundation.h>

/**
	Meta data for requests and responses.
	@ingroup extensibility
 */
@interface EBayMessageContext : NSObject
{
	NSMutableDictionary *headers_;
}

/**
	Custom headers associated to this request represented as key-value pairs of NSStrings.
	This property can be altered by the pipeline handlers. For requests, put here custom headers you
    want added. For responses, the transport layer adds the received headers.

	@see EBayPipelineHandler
 */
@property (readonly) NSMutableDictionary *headers;


@end
