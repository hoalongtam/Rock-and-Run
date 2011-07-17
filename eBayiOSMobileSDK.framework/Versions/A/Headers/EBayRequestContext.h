//
//  EBayRequestContext.h
//  eBayMobileSDK
//
//  Created on 9/23/10.
//

#import "EBayMessageContext.h"

/**
	Meta data associated with a request.
	@ingroup extensibility
 */
@interface EBayRequestContext : NSObject

{
	EBayMessageContext *messageContext_;
	NSMutableDictionary *queryParameters_;
	NSMutableArray *orderedQueryParameters_;
	NSMutableArray *attachments_;
}


/**
	Meta data for the request (e.g. the headers).
 */
@property (readonly) EBayMessageContext *messageContext;

/**
	Custom query parameters associated to this request represented as key-value pairs of NSStrings.
	In the case of HTTP transport they will be appended to the URL query section.
	Pipeline handlers can add or remove entries to this property. The transport object will use them accordingly.
	The entries should not be URL encoded.
	
	@see orderedQueryParameters
	@see EBayPipelineHandler
 */
@property (readonly) NSMutableDictionary *queryParameters;

/**
	Ordered set of query parameters associated to this request.
	In the case of HTTP transport they will be appended to the URL query section in the order found in the array.
	The array contains the name and the value of the parameters in sequence, i.e. name, value, name, value,..., name, value.
	Pipeline handlers can add or remove entries to this property. The transport object will use them accordingly.
	The entries should not be URL encoded.	

	@see queryParameters
	@see EBayPipelineHandler
 */
@property (readonly) NSMutableArray *orderedQueryParameters;

/**
	An array of EBayAttachmentContext objects that will be added as attachments to the request.
	Transport should check for items in the array. If there are any, the request will have a multipart body:
	 one part for each attachment in this array and one for the serialized request.
 */
@property (readonly) NSMutableArray *attachments;

@end
