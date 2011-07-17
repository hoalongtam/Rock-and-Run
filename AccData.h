//
//  AccData.h
//  AccelerometerTutorial
//
//  Created by Dantha Manikka-Baduge on 7/16/11.
//  Copyright 2011 dandil. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AccData : NSObject {
    float x, y, z, A;
    NSDate* dt;
}

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (nonatomic) float A;
@property (nonatomic, retain) NSDate *dt;

@end
