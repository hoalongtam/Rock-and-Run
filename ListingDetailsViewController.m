//
//  ListingDetailsViewController.m
//  My eBay App
//
//  Created by Jon Reid on 11/1/10, adapted by William Yang on 11/4/24.
//  Copyright 2010 eBay Inc. All rights reserved.
//

#import "ListingDetailsViewController.h"

#import "ImageLoader.h"
#import "PriceFormatter.h"
#import "ProblemLogger.h"
#import "TimeLeft.h"


@interface ListingDetailsViewController ()

@property (nonatomic, retain) NSString *loadedItemID;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *priceLabel;
@property (nonatomic, retain) UILabel *priceTypeLabel;
@property (nonatomic, retain) UILabel *itemIDLabel;
@property (nonatomic, retain) UILabel *startTimeLabel;
@property (nonatomic, retain) UILabel *endTimeLabel;
@property (nonatomic, retain) UILabel *timeLeftLabel;
@property (nonatomic, retain) UILabel *conditionLabel;
@property (nonatomic, retain) UILabel *listingTypeLabel;
@property (nonatomic, retain) UILabel *shippingCostLabel;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, retain) UILabel *paymentMethodLabel;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) ImageLoader *imageLoader;
@property (nonatomic, retain) Shopping_GetSingleItemRequestType *currentGetSingleItemRequest;

- (void)getSingleItem:(NSString *)itemID;
- (void)clearDisplayWhileWaitingForData;

@end


@implementation ListingDetailsViewController

@synthesize selectedItem;
@synthesize isFixedPrice;
@synthesize temporaryImage;

@synthesize loadedItemID;
@synthesize titleLabel;
@synthesize priceTypeLabel;
@synthesize priceLabel;
@synthesize itemIDLabel;
@synthesize startTimeLabel;
@synthesize endTimeLabel;
@synthesize timeLeftLabel;
@synthesize conditionLabel;
@synthesize listingTypeLabel;
@synthesize shippingCostLabel;
@synthesize locationLabel;
@synthesize paymentMethodLabel;
@synthesize imageView;
@synthesize imageLoader;
@synthesize currentGetSingleItemRequest;


#pragma mark -
#pragma mark Initialize & Cleanup

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self != nil)
    {
        [self setTitle:@"Details"];
    }
    return self;
}


- (void)dealloc
{
    [selectedItem release];    
    [temporaryImage release];
    [loadedItemID release];
    [titleLabel release];
    [priceTypeLabel release];
    [priceLabel release];
    [itemIDLabel release];
    [startTimeLabel release];
    [endTimeLabel release];
    [timeLeftLabel release];
    [conditionLabel release];
    [listingTypeLabel release];
    [shippingCostLabel release];
    [locationLabel release];
    [paymentMethodLabel release];
    [imageView release];
    [imageLoader release];
    [currentGetSingleItemRequest release];
    
    [super dealloc];
}


#pragma mark -
#pragma mark View Lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    imageLoader = [[ImageLoader alloc] initWithImageView:imageView];
    [imageLoader setKeepImageWhileURLIsLoading:YES];
}


- (void)viewDidUnload
{

    [self setTemporaryImage:nil];    
    [self setLoadedItemID:nil];
    [self setTitleLabel:nil];
    [self setPriceTypeLabel:nil];
    [self setPriceLabel:nil];
    [self setItemIDLabel:nil];
    [self setStartTimeLabel:nil];
    [self setEndTimeLabel:nil];
    [self setTimeLeftLabel:nil];
    [self setConditionLabel:nil];
    [self setListingTypeLabel:nil];
    [self setShippingCostLabel:nil];
    [self setLocationLabel:nil];
    [self setPaymentMethodLabel:nil];
    [self setImageView:nil];
    [self setImageLoader:nil];
    
    [super viewDidUnload];
}


- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    // Set the fields we already have
    [titleLabel setText:selectedItem.title];
    FindingService_Amount *initialCurrentPrice = selectedItem.sellingStatus.currentPrice;
    [priceLabel setText:[PriceFormatter stringFromValue:initialCurrentPrice.value
                                               currency:initialCurrentPrice.currencyId]];
    [itemIDLabel setText:selectedItem.itemId];
    [conditionLabel setText:selectedItem.condition.conditionDisplayName];
    [listingTypeLabel setText:selectedItem.listingInfo.listingType];
    FindingService_Amount *shippingServiceCost = selectedItem.shippingInfo.shippingServiceCost;
    [shippingCostLabel setText:[PriceFormatter stringFromValue:shippingServiceCost.value
                                                      currency:shippingServiceCost.currencyId]];
    [paymentMethodLabel setText:[selectedItem.paymentMethod componentsJoinedByString:@", "]];
    
    if (isFixedPrice)
    {
        [priceTypeLabel setText:@"Buy It Now: "];
    }
    else
    {
        [priceTypeLabel setText:@"Current Bid:"];
    }
        
    // Request the remaining fields we are missing or want to update
    if (![loadedItemID isEqualToString:selectedItem.itemId])
    {
        [self clearDisplayWhileWaitingForData];
    }
    [self getSingleItem:selectedItem.itemId];
}


- (void)viewWillDisappear:(BOOL)animated
{
    [imageLoader cancelDownload];
    
    if (currentGetSingleItemRequest != nil)
    {
        EBayServiceInvoker *serviceInvoker = [EBayServiceInvokerFactory serviceForType:kEBayServiceTypeShopping];
        [serviceInvoker cancel:currentGetSingleItemRequest];
        [self setCurrentGetSingleItemRequest:nil];
    }
        
    [super viewWillDisappear:animated];
}

#pragma mark -
#pragma mark API Call & Application Logic
/**
    Invokes request to eBay Shopping service for GetSingleItem

    The response is delivered to didReceiveResponse:forRequest: below.
 */
- (void)getSingleItem:(NSString *)itemID
{
    @try
    {
        // Get service invoker
        EBayServiceInvoker *serviceInvoker = [EBayServiceInvokerFactory serviceForType:kEBayServiceTypeShopping];
		serviceInvoker.debugMode = YES;
        
        // Create request
        Shopping_GetSingleItemRequestType *request = [[[Shopping_GetSingleItemRequestType alloc] init] autorelease];
        request.itemID = itemID;
        request.includeSelector = @"Details,ShippingCosts";
        
        [self setCurrentGetSingleItemRequest:request];   // Remember request so -viewWillDisappear: can cancel it
    
        // Invoke request
        [serviceInvoker invoke:request withDelegate:self];
    }
    @catch (EBayException *exception)
    {
        [ProblemLogger logEBayException:exception];
    }
}


/// Updates display using data in GetSingleItem response
- (void)handleGetSingleItemResponse:(Shopping_GetSingleItemResponseType *)response 
{
    Shopping_SimpleItemType *item = response.item;
    [self setLoadedItemID:item.itemID];
    
    [priceLabel setText:[PriceFormatter stringFromValue:item.currentPrice.value
                                               currency:item.currentPrice.currencyID]];
    
    static NSDateFormatter* dateFormatter = nil;
    if (!dateFormatter)
    {
        dateFormatter = [[NSDateFormatter alloc] init];
        [dateFormatter setDateStyle:kCFDateFormatterShortStyle];
        [dateFormatter setTimeStyle:kCFDateFormatterMediumStyle];
    }    
    [startTimeLabel setText:[dateFormatter stringFromDate:item.startTime]];
    [endTimeLabel setText:[dateFormatter stringFromDate:item.endTime]];

    TimeLeft *timeLeft = [[TimeLeft alloc] initWithISODuration:item.timeLeft];
    [timeLeftLabel setText:[timeLeft shortString]];
    [timeLeftLabel setTextColor:[timeLeft textColor]];
    [timeLeft release];
                          
    [locationLabel setText:item.location];
    
    [imageLoader setImageURL:[item.pictureURL objectAtIndex:0]];
}


/// Clears information that will be filled in by -handleGetSingleItemResponse:
- (void)clearDisplayWhileWaitingForData
{
    [imageView setImage:temporaryImage];
    [startTimeLabel setText:nil];
    [endTimeLabel setText:nil];
    [timeLeftLabel setText:nil];
    [locationLabel setText:nil];
}

- (IBAction)viewOnMobileWebByItemID:(id)sender
{
    @try
    {
        EBayAffiliateTracking *affiliateTracking = [EBayAffiliateTracking sharedInstance];
		// construct roverirzed URL with specific item id and launch the URL in external browser.
        [affiliateTracking launchViewItemPageWithItem:[selectedItem itemId]];
    }
    @catch (NSException *exception)
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Affiliate Tracking error"
                                                        message:[exception reason]
                                                       delegate:nil
                                              cancelButtonTitle:@"OK"
                                              otherButtonTitles:nil];
        [alert show];
        [alert release];
    }
}

- (IBAction)viewOnMobileWebByRoverizedURL:(id)sender
{
	@try
    {
        EBayAffiliateTracking *affiliateTracking = [EBayAffiliateTracking sharedInstance];
		// launch already roverized URL returned by API call
        [affiliateTracking launchNonMobileRoverizedURLString:[selectedItem viewItemURL]];
    }
    @catch (NSException *exception)
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Affiliate Tracking error"
                                                        message:[exception reason]
                                                       delegate:nil
                                              cancelButtonTitle:@"OK"
                                              otherButtonTitles:nil];
        [alert show];
        [alert release];
    }
}


#pragma mark -
#pragma mark EBayServiceDelegate

- (void)didReceiveResponse:(id)response forRequest:(id)request
{    
    if ([response isKindOfClass:[Shopping_GetSingleItemResponseType class]])
    {
        [self setCurrentGetSingleItemRequest:nil];
        [self handleGetSingleItemResponse:response];
    }
}


- (void)didFailWithErrors:(NSArray*)errors forRequest:(id)request
{    
    if ([request isKindOfClass:[Shopping_GetSingleItemRequestType class]])
    {
        [self setCurrentGetSingleItemRequest:nil];
    }

    [ProblemLogger logEBayErrors:errors];
}


- (void)didCancelRequest:(id)request
{
    if ([request isKindOfClass:[Shopping_GetSingleItemRequestType class]])
    {
        [self setCurrentGetSingleItemRequest:nil];
    }
}

@end
