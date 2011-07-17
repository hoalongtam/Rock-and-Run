//
//  ProblemLogger.h
//  My eBay App
//
//  Created by Jon Reid on 10/20/10.
//  Copyright 2010 eBay Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EBayException;


/**
    Logs problems reported by the eBay SDK
 */
@interface ProblemLogger : NSObject

/**
    Logs a collection of EBayError instances
 
    Errors with severity "error" are also shown to the user.
 */
+ (void)logEBayErrors:(NSArray *)errors;

/// Logs an EBayException (which may contain multiple errors)
+ (void)logEBayException:(EBayException*)exception;

@end
