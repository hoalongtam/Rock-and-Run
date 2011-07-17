//
//  My eBay App - ImageLoader.h
//  Copyright 2010 eBay Inc. All rights reserved.
//
//  Created by: Jon Reid
//

#import <Foundation/Foundation.h>


/**
    Loads image view from URL
 */
@interface ImageLoader : NSObject
{
    UIImageView *imageView;
    NSMutableData *imageData;
    NSURLConnection *imageDownload;
}

/// Set to initiate loading image from given URL
@property (nonatomic, retain) NSString *imageURL;

/// Set YES to keep current image in place until download is complete
@property (nonatomic, assign) BOOL keepImageWhileURLIsLoading;

/// Returns an ImageLoader object for the given image view
- (id)initWithImageView:(UIImageView *)anImageView;

/// Stops any image download in progress
- (void)cancelDownload;

@end
