//
//  FindItemsViewController.h
//  searchAndAffiliate
//
//  Created by william yang on 4/24/11.
//  Copyright 2011 eBay CDC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ListingDetailsViewController;

@protocol FindItemsViewControllerDelegate; // Delegate

@interface FindItemsViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, EBayServiceDelegate>  {
	// container holding search results
	NSMutableArray *tableData;
	
	// table view showing search results
	UITableView *theTableView;
	UISearchBar *theSearchBar;
	
	ListingDetailsViewController *listingDetailsViewController;
}

@property (retain) NSMutableArray *tableData;
@property (retain) UIActivityIndicatorView *spinner;
@property (retain) ListingDetailsViewController *listingDetailsViewController;

@property (nonatomic, retain) IBOutlet UITableView *theTableView;
@property (nonatomic, retain) IBOutlet UISearchBar *theSearchBar;

// Delegate
@property (nonatomic, assign) id <FindItemsViewControllerDelegate> delegate;
- (IBAction)done:(id)sender;

@end

// Delegate
@protocol FindItemsViewControllerDelegate
- (void)FindItemsViewControllerDidFinish:(FindItemsViewController *)controller;
@end