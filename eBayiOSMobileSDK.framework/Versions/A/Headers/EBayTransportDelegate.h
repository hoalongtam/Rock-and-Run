//
//  EBayTransportDelegate.h
//  eBayMobileSDK
//
//  Created on 9/23/10.
//

#import <Foundation/Foundation.h>

@class EBayTransactionContext;
@class EBayError;

/**
	The interface that is exposed for a custom transport implementation to notify completion.
 */
@protocol EBayTransportDelegate

/**
	Must be called by the transport upon successful completion of transport phase.

	@param context The transaction context that was passed to the transport.
 */
-(void) onTransportCompleted:(EBayTransactionContext*)context;

/**
	Must be called by the transport when the request fails being sent.

	@param context The transaction context that was passed to the transport.
	@param errors An array of errors that occurred during transport. The errors are of type EBayError.
 */
-(void) onTransportFailed:(EBayTransactionContext*)context withErrors:(NSArray*)errors;

/**
	Must be called by the transport after it receives a cancel request and successfully cancels sending.
 
	@param context The transaction context that was passed to the transport.
 */
-(void) onTransportCanceled:(EBayTransactionContext*)context;

@end
