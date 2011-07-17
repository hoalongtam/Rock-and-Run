//
//  My eBay App - PriceFormatter.h
//  Copyright 2010 eBay Inc. All rights reserved.
//
//  Created by: Jon Reid
//

#import <Foundation/Foundation.h>


@interface PriceFormatter : NSObject

/// Converts given convertedCurrentPrice attributes to a string
+ (NSString *)stringFromConvertedCurrentPrice:(NSNumber *)value currency:(NSString *)currencyID;

/// Converts given attributes to a string
+ (NSString *)stringFromValue:(NSNumber *)value currency:(NSString *)currencyID;

@end
