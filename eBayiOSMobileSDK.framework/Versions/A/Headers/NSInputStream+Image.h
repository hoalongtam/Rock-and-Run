//
//  NSInputStream+Image.h
//  eBayMobileSDK
//
//  Created on 11/23/10.
//

#import <Foundation/Foundation.h>

@class UIImage;

/**
	Offers utility methods for creating an input stream from an image.
	Use it with the requests that need an image attached to the request
	 (i.e. UploadSiteHostedPictures in the Trading API).
 */
@interface NSInputStream(Image)

/**
	Creates an autoreleased input stream for the given image.
 
	@param[in]	image	The in-memory image data.
	@return	A new input stream object that you use with the request that needs the image attachment.
			If the stream cannot be created, returns nil.
 
	@attention	The image is converted to JPEG representation with conversion quality 0.9.
				Use inputStreamWithImageAtPath: if you need no changes to the image representation.

	@see inputStreamWithImageAtPath:
 */
+(NSInputStream*)inputStreamWithImage:(UIImage*)image;

/**
	Creates an autoreleased input stream for the image file at the given path.
 
	@param[in]	imagePath	The local file path to the image.
	@return	A new input stream object that you use with the request that needs the image attachment.
			If the stream cannot be created, returns nil.
 
	@note	The image is loaded progressively into memory when the request is sent on the network.
			Use this method to ease the memory load when sending requests with images attached.	
 
	@attention	The file should remain valid and intact until the request is done being sent.
 
	@see inputStreamWithImage:
 */
+(NSInputStream*)inputStreamWithImageAtPath:(NSString*)imagePath;

@end

// This class is added just for the above category to be loaded by the linker in the final executable.
// It serves as a work-around for a linker bug that prevents it to load object files that contain only categories.
// Details here: http://developer.apple.com/library/mac/#qa/qa2006/qa1490.html
@interface NSInputStream_Image : NSObject
{
}

@end
