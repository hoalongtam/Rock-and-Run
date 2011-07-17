//
//  ItemTableViewCell.h
//  My eBay App
//
//  Created by Jon Reid on 10/21/10.
//  Copyright 2010 eBay Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImageLoader;


/**
    UITableView cell displaying information about an item for sale
 */
@interface ItemTableViewCell : UITableViewCell
{
    IBOutlet UILabel *titleLabel;
    IBOutlet UILabel *priceLabel;
    IBOutlet UILabel *bidsLabel;
    IBOutlet UILabel *timeLeftLabel;
    IBOutlet UIImageView *thumbnailView;
    ImageLoader *imageLoader;
}

@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *priceLabel;
@property (nonatomic, retain) UILabel *bidsLabel;
@property (nonatomic, retain) UILabel *timeLeftLabel;
@property (nonatomic, retain) UIImageView *thumbnailView;

/// Creates and returns a cell loaded from the nib file
+ (ItemTableViewCell *)itemTableViewCellFromNib;

/// String matching cell's identifier in nib file
+ (NSString *)reuseIdentifier;

/// Loads item image from given URL
- (void)setImageURL:(NSString *)URLString;

@end
