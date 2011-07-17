//
//  ProblemLogger.m
//  My eBay App
//
//  Created by Jon Reid on 10/20/10.
//  Copyright 2010 eBay Inc. All rights reserved.
//

#import "ProblemLogger.h"


/// Returns a string representation of an EBaySeverity enumerated value
static NSString * NSStringFromEBaySeverity(EBaySeverity severity)
{
    switch (severity)
    {
        case kEBaySeverityError:
            return @"Error";
            break;

        case kEBaySeverityWarning:
            return @"Warning";
            break;

        default:
            return @"[unknown]";
            break;
    }
}


/// Returns a string representation of an EBayErrorCategory enumerated value
static NSString * NSStringFromEBayErrorCategory(EBayErrorCategory category)
{
    switch (category)
    {
        case kEBayErrorCategoryClient:
            return @"Client";
            break;

        case kEBayErrorCategoryServer:
            return @"Server";
            break;

        default:
            return @"[unknown]";
            break;
    }
}


@implementation ProblemLogger

/// Shows a subset of errors to the user
+ (void) showErrorsToUser:(NSArray *)errors
{
    for (EBayError *error in errors)
    {
        // Only show errors, not warnings
        if ([error severity] == kEBaySeverityError)
        {
            // Some "errors" are user-initiated, so showing them would be annoying
            if ([error errorID] == EBAY_ERROR_ID_OAUTH_CANCELED)
            {
                continue;
            }
            
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
                                                            message:[error message]
                                                           delegate:nil
                                                  cancelButtonTitle:@"OK"
                                                  otherButtonTitles:nil];
            [alert show];
            [alert release];
        }
    }
}


+ (void)logEBayErrors:(NSArray *)errors
{
    for (EBayError *error in errors)
    {
        NSLog(@"EBayError. ID: %d  Severity: %@  Category: %@",
              [error errorID],
              NSStringFromEBaySeverity([error severity]),
              NSStringFromEBayErrorCategory([error category]));
        NSLog(@"Message: %@", [error message]);
    }
    
    [self showErrorsToUser:errors];
}


+ (void)logEBayException:(EBayException*)exception
{
    NSLog(@"--- EBayException ---");
    [self logEBayErrors:[exception errors]];

    NSLog(@"---------------------");
}

@end
