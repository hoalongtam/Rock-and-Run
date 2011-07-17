//
//  EBayAttachmentContext.h
//  eBayMobileSDK
//
//  Created on 11/17/10.
//

#import <Foundation/Foundation.h>

/**
	Holds details about one attachment that is sent with the request.
	@ingroup extensibility
 */
@interface EBayAttachmentContext : NSObject
{
	NSInputStream *stream_;
	NSString *contentDisposition_;
	NSString *contentType_;
}

/**
	The data source for the attachment.
 */
@property (nonatomic, retain) NSInputStream *stream;

/**
	The content disposition of the attachment as it should appear in the body part header.
 */
@property (nonatomic, copy) NSString *contentDisposition;

/**
	The content type of the attachment as it should appear in the body part header.
 */
@property (nonatomic, copy) NSString *contentType;

@end
