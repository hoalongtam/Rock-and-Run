//
//  FindItemsViewController.m
//  searchAndAffiliate
//
//  Created by william yang on 4/24/11.
//  Copyright 2011 eBay CDC. All rights reserved.
//

#import "FindItemsViewController.h"

#import "ProblemLogger.h"
#import "ItemTableViewCell.h"
#import "PriceFormatter.h"
#import "TimeLeft.h"
#import "ListingDetailsViewController.h"

static BOOL isFixedPrice(FindingService_SearchItem *item)
{
    NSString *listingType = item.listingInfo.listingType;
    return [listingType isEqualToString:@"FixedPrice"] ||
	[listingType isEqualToString:@"StoreInventory"];
}

@interface FindItemsViewController ()

-(void)searchWithKeywordsOneBayServer:(NSString *)keywords;

-(void)setCell:(ItemTableViewCell *)cell fromSearchItem:(FindingService_SearchItem *)item;

@end

@implementation FindItemsViewController

@synthesize delegate=_delegate; // Delegate

@synthesize tableData;
@synthesize spinner;
@synthesize listingDetailsViewController;

@synthesize theSearchBar;
@synthesize theTableView;

#pragma mark -
#pragma mark UISearchBarDelegate

- (void)searchBarTextDidBeginEditing:(UISearchBar *)searchBar {
    [self.theSearchBar setShowsCancelButton:YES animated:YES];
    self.theTableView.allowsSelection = NO;
    self.theTableView.scrollEnabled = NO;
}

- (void)searchBarCancelButtonClicked:(UISearchBar *)searchBar {
    self.theSearchBar.text=@"";
    
    [self.theSearchBar setShowsCancelButton:NO animated:YES];
    [self.theSearchBar resignFirstResponder];
    self.theTableView.allowsSelection = YES;
    self.theTableView.scrollEnabled = YES;
}

- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar {
	
    [self.theSearchBar setShowsCancelButton:NO animated:YES];
    [self.theSearchBar resignFirstResponder];
    self.theTableView.allowsSelection = YES;
    self.theTableView.scrollEnabled = YES;
	
    if (![self.theSearchBar.text isEqual:@""]) {
		// Search on eBay Server
		if (self.theSearchBar.selectedScopeButtonIndex == 0) {
			[self searchWithKeywordsOneBayServer: self.theSearchBar.text];
		} else { // search on eBay mobile web
			// Get affiliate tracking helper singleton
			EBayAffiliateTracking *affiliateTracking = [EBayAffiliateTracking sharedInstance];
			// Launch search result page with affiliate tracking information in external browser 
			[affiliateTracking launchSearchResultPageWithKeyword:self.theSearchBar.text];
		}
	}
}

#pragma mark -
#pragma mark Search on eBay Server

-(void)searchWithKeywordsOneBayServer:(NSString *)keywords {
	
	// Instantiate a FindItemsByKeyword request and set the keywords 
	// to the text in the search text control.
	FindingService_FindItemsByKeywordsRequest* request = [[[FindingService_FindItemsByKeywordsRequest alloc] init] autorelease];
	request.keywords = keywords;
	FindingService_PaginationInput *pagination = [[[FindingService_PaginationInput alloc] init] autorelease];
	pagination.entriesPerPage = [NSNumber numberWithInt:10];
	request.paginationInput = pagination;
	
	@try
	{
		// Obtain the appropriate service invoker by using the service invoker factory.
		EBayServiceInvoker* findingInvoker = [EBayServiceInvokerFactory serviceForType:kEBayServiceTypeFinding];
	    findingInvoker.debugMode = YES;
		
		// Invoke the request.
		[findingInvoker invoke:request withDelegate:self];
	}
	@catch (EBayException *exception)  // Be prepared to handle exceptions.
	{
        [ProblemLogger logEBayException:exception];
	}
	
}

#pragma mark -
#pragma mark EBayServiceDelegate

// We received a response for our request.
- (void)didReceiveResponse:(id)response forRequest:(id)request
{
    // Cast the generic response to the appropriate type.
    FindingService_FindItemsByKeywordsResponse* findResponse = (FindingService_FindItemsByKeywordsResponse*)response;
    
    // Show found items in the table
    [self.tableData removeAllObjects];
	[self.tableData addObjectsFromArray:findResponse.searchResult.item];
	[self.theTableView reloadData];
}

// The request failed with errors.
- (void)didFailWithErrors:(NSArray*)errors forRequest:(id)request
{
	
    [ProblemLogger logEBayErrors:errors];
}

// The request was canceled.
- (void)didCancelRequest:(id)request
{	
    NSLog(@"--- Request canceled ---");
}

#pragma mark -
#pragma mark UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [tableData count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView
         cellForRowAtIndexPath:(NSIndexPath *)indexPath {
	
	// Initialize & Populate table cell
	NSString *cellID = [ItemTableViewCell reuseIdentifier];
    ItemTableViewCell *cell = (ItemTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellID];
    if (!cell)
    {
        cell = [ItemTableViewCell itemTableViewCellFromNib];
    }
    [self setCell:cell fromSearchItem:[self.tableData objectAtIndex:[indexPath row]]];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Initialize listing details veiw controller
	if (!listingDetailsViewController)
    {
        listingDetailsViewController = [[ListingDetailsViewController alloc] initWithNibName:@"ListingDetailsView"
                                                                                      bundle:nil];
    }
    
    FindingService_SearchItem *item = [self.tableData objectAtIndex:[indexPath row]];
    [listingDetailsViewController setSelectedItem:item];
    [listingDetailsViewController setIsFixedPrice:isFixedPrice(item)];
    
    // Populate listing details with any additional data we've already loaded
    ItemTableViewCell *cell = (ItemTableViewCell *)[tableView cellForRowAtIndexPath:indexPath];
    [listingDetailsViewController setTemporaryImage:[[cell thumbnailView] image]];
    
	// switch to the listing details view
    [[self navigationController] pushViewController:listingDetailsViewController animated:YES];
}

/// Sets attributes of a table view cell using the given item
- (void)setCell:(ItemTableViewCell *)cell fromSearchItem:(FindingService_SearchItem *)item
{
    [[cell titleLabel] setText:item.title];
    
    FindingService_Amount* convertedCurrentPrice = item.sellingStatus.convertedCurrentPrice;
    [[cell priceLabel] setText:[PriceFormatter stringFromConvertedCurrentPrice:convertedCurrentPrice.value
                                                                      currency:convertedCurrentPrice.currencyId]];
    
    if (isFixedPrice(item))
    {
        [[cell bidsLabel] setText:nil];
    }
    else
    {
        NSNumber *bidCount = item.sellingStatus.bidCount;
        NSString *formatString = nil;
        if ([bidCount unsignedIntegerValue] == 1)
        {
            formatString = @"%@ bid";
        }
        else
        {
            formatString = @"%@ bids";
        }
        NSString *bidsText = [[NSString alloc] initWithFormat:formatString, bidCount];
        [[cell bidsLabel] setText:bidsText];
        [bidsText release];
    }
    
    TimeLeft *timeLeft = [[TimeLeft alloc] initWithISODuration:item.sellingStatus.timeLeft];
    UILabel *timeLeftLabel = [cell timeLeftLabel];
    [timeLeftLabel setText:[timeLeft shortString]];
    [timeLeftLabel setTextColor:[timeLeft textColor]];
    [timeLeft release];
    
    [cell setImageURL:item.galleryURL];
}

#pragma mark -
#pragma mark Memory management

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

#pragma mark -
#pragma mark View lifecycle

- (void)viewDidUnload {
	
	[super viewDidLoad];
}

- (void)viewDidLoad {
	[super viewDidLoad];
	
	self.tableData = [[NSMutableArray alloc] init];
	
	// The back button
	UIBarButtonItem *backButton = [[UIBarButtonItem alloc] initWithTitle:@"Search"
																   style:UIBarButtonItemStylePlain
																  target:nil
																  action:nil];
	[[self navigationItem] setBackBarButtonItem:backButton];
	[backButton release];
}

- (void)viewDidAppear:(BOOL)animated {
	//[self.theSearchBar becomeFirstResponder];
	[super viewDidAppear:animated];
}

#pragma mark -
#pragma mark Cleanup

- (void)dealloc {
	self.theTableView = nil;
	self.theSearchBar = nil;
	self.tableData = nil;
    [super dealloc];
}

#pragma mark - Actions
- (IBAction)done:(id)sender
{
    [self.delegate FindItemsViewControllerDidFinish:self];
}

@end
