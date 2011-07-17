//
//  ItemTableViewCell.m
//  My eBay App
//
//  Created by Jon Reid on 10/21/10.
//  Copyright 2010 eBay Inc. All rights reserved.
//

#import "ItemTableViewCell.h"

#import "ImageLoader.h"


@interface ItemTableViewCell ()
@property (nonatomic, retain) ImageLoader *imageLoader;
@end


@implementation ItemTableViewCell

@synthesize titleLabel;
@synthesize priceLabel;
@synthesize bidsLabel;
@synthesize timeLeftLabel;
@synthesize thumbnailView;

@synthesize imageLoader;


+ (ItemTableViewCell *)itemTableViewCellFromNib
{
    ItemTableViewCell *cell = nil;

    // Workaround for iOS not directly supporting loading of UITableViewCells from nib files:
    NSArray *nibObjects = [[NSBundle mainBundle] loadNibNamed:@"ItemTableViewCell"
                                                        owner:nil
                                                      options:nil];
    for (id currentObject in nibObjects)
    {
        if ([currentObject isKindOfClass:[ItemTableViewCell class]])
        {
            cell = currentObject;
        }
    }
    
    ImageLoader *imageLoader = [[ImageLoader alloc] initWithImageView:[cell thumbnailView]];
    [cell setImageLoader:imageLoader];
    [imageLoader release];
    
    return cell;
}


+ (NSString *)reuseIdentifier
{
    return @"ItemTableViewCell";    // Keep in sync with Identifier field in nib
}


- (void)dealloc
{
    [titleLabel release];
    [priceLabel release];
    [bidsLabel release];
    [timeLeftLabel release];
    [thumbnailView release];
    [imageLoader release];
    
    [super dealloc];
}


- (void)prepareForReuse
{
    [super prepareForReuse];
    [imageLoader cancelDownload];
}


- (void)setImageURL:(NSString *)URLString
{
    [imageLoader setImageURL:URLString];
}

@end
