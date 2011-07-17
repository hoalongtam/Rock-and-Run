//
//  My eBay App - ImageLoader.m
//  Copyright 2010 eBay Inc. All rights reserved.
//
//  Created by: Jon Reid
//

#import "ImageLoader.h"


@interface ImageLoader ()
@property (nonatomic, retain) NSMutableData *imageData;
@property (nonatomic, retain) NSURLConnection *imageDownload;
@end


@implementation ImageLoader

@synthesize imageURL;
@synthesize keepImageWhileURLIsLoading;

@synthesize imageData;
@synthesize imageDownload;


- (id)initWithImageView:(UIImageView *)anImageView
{
    self = [super init];
    if (self != nil)
    {
        imageView = [anImageView retain];
    }
    return self;
}


- (void) dealloc
{
    [imageDownload cancel];

    [imageView release];    
    [imageURL release];
    [imageData release];
    [imageDownload release];
    
    [super dealloc];
}


- (void)setImageURL:(NSString *)URLString
{
    if ([URLString isEqualToString:imageURL])
    {
        return;
    }
    
    if (!keepImageWhileURLIsLoading)
    {
        [imageView setImage:nil];
    }
    
    if (URLString != nil)
    {
        NSURL *URL = [[NSURL alloc] initWithString:URLString];
        NSURLRequest *request = [[NSURLRequest alloc] initWithURL:URL];
        
        // Initiate connection that starts without waiting for user interface to stop moving.
        NSURLConnection *download = [[NSURLConnection alloc] initWithRequest:request
                                                                    delegate:self
                                                            startImmediately:NO];
        [self setImageDownload:download];
        [download scheduleInRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
        [download start];
        
        [download release];
        [request release];
        [URL release];
    }
    
    [imageURL release];
    imageURL = [URLString retain];
}


/// Releases temporary data used for downloading image
- (void)clearDownloadData
{
    [self setImageData:nil];
    [self setImageDownload:nil];
}


- (void)cancelDownload
{
    if (imageDownload != nil)
    {
        [imageDownload cancel];
        [self clearDownloadData];
        [self setImageURL:nil];
    }
}


#pragma mark -
#pragma mark NSURLConnectionDelegate

- (void)connection:(NSURLConnection *)connection didReceiveResponse:(NSURLResponse *)response
{
    if (connection != imageDownload)
    {
        return;
    }
    
    [imageData release];
    
    long long expectedContentLength = [response expectedContentLength];
    if (expectedContentLength != NSURLResponseUnknownLength)
    {
        imageData = [[NSMutableData alloc] initWithCapacity:expectedContentLength];
    }
	else
    {
        imageData = [[NSMutableData alloc] init];
    }
}


- (void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data
{
    if (connection != imageDownload)
    {
        return;
    }
    
    [imageData appendData:data];
}


- (void)connectionDidFinishLoading:(NSURLConnection *)connection
{
    if (connection != imageDownload)
    {
        return;
    }
    
    UIImage *image = [[UIImage alloc] initWithData:imageData];
    [imageView setImage:image];
    [image release];
    
    [self clearDownloadData];
}


- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error
{
    if (connection != imageDownload)
    {
        return;
    }
    
    [self clearDownloadData];
}

@end
