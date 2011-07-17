//
//  My eBay App - TimeLeft.h
//  Copyright 2010 eBay Inc. All rights reserved.
//
//  Created by: Jon Reid
//

#import <Foundation/Foundation.h>


/**
    Time left on a bid
 
    This object parses the timeLeft string returned by eBay's APIs.
 */
@interface TimeLeft : NSObject

@property (nonatomic, readonly) unsigned int days;
@property (nonatomic, readonly) unsigned int hours;
@property (nonatomic, readonly) unsigned int minutes;
@property (nonatomic, readonly) unsigned int seconds;

/// Returns a TimeLeft object initialized by parsing the given ISO-8601 duration
- (id)initWithISODuration:(NSString *)duration;

/// Returns a string representation of the two highest units
- (NSString *)shortString;

/// Returns YES if time has ended
- (BOOL)hasEnded;

/// Returns YES if time left is a minute or less, but not yet ended
- (BOOL)isEndingSoon;

/// Normally black, returns red if time is ending soon
- (UIColor *)textColor;

@end
