//
//  ListingDetailsViewController.h
//  My eBay App
//
//  Created by Jon Reid on 11/1/10.
//  Copyright 2010 eBay Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ListingDetailsViewController : UIViewController <EBayServiceDelegate>
{
    IBOutlet UILabel *titleLabel;
    IBOutlet UILabel *priceTypeLabel;
    IBOutlet UILabel *priceLabel;
    IBOutlet UILabel *itemIDLabel;
    IBOutlet UILabel *startTimeLabel;
    IBOutlet UILabel *endTimeLabel;
    IBOutlet UILabel *timeLeftLabel;
    IBOutlet UILabel *conditionLabel;
    IBOutlet UILabel *listingTypeLabel;
    IBOutlet UILabel *shippingCostLabel;
    IBOutlet UILabel *locationLabel;
    IBOutlet UILabel *paymentMethodLabel;
    IBOutlet UIImageView *imageView;
    Shopping_GetSingleItemRequestType *currentGetSingleItemRequest;
}

@property (nonatomic, retain) FindingService_SearchItem *selectedItem;
@property (nonatomic, assign) BOOL isFixedPrice;
@property (nonatomic, retain) UIImage *temporaryImage;

- (IBAction)viewOnMobileWebByItemID:(id)sender;

- (IBAction)viewOnMobileWebByRoverizedURL:(id)sender;

@end
