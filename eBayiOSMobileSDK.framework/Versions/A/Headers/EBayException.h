//
//  EBayException.h
//  eBayMobileSDK
//
//  Created on 10/14/10.
//

#import "EBayError.h"

/**
	Thrown when an abnormal condition is encountered within the library.
		
	The exceptions will be propagated to the client application as follows:
	@li For errors that occur on the calling thread the EBayException will be propagated all the way back to the calling application code (e.g. the passed in request is invalid).
	@li For errors that occur after a thread is spawned (can happen at both the client or server side), the errors that caused the exception
		are reported to the client through the provided delegates.
	@ingroup err
 */
@interface EBayException : NSException
{
	NSArray *errors_;
}

/** 
	An array of EBayError objects that caused the exception to be thrown.
  */
@property (readonly) NSArray *errors;

/** 
	Builds and returns an exception given the array of errors that caused it.
	
	@param[in] errors The array of errors that caused the exception.
	@return The built exception.
 */
+(id) exceptionWithErrors:(NSArray*)errors;

/** 
	Convenience method that builds and returns an exception given the error that caused it.

	@param[in] error The error that caused the exception.
	@return The built exception.
 */
+(id) exceptionWithError:(EBayError*)error;

@end
