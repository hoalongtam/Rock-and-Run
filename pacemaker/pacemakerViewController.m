//
//  pacemakerViewController.m
//  pacemaker
//
//  Created by Bess Ho on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "pacemakerViewController.h"

@implementation pacemakerViewController

@synthesize captureButton;
@synthesize headerLabel;
@synthesize taphereLabel;
@synthesize startButton;

#pragma mark - Memory management
- (void)dealloc
{
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle
- (void)viewDidLoad
{
    [super viewDidLoad];

}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

#pragma mark - View Controller
- (void)settingsViewControllerDidFinish:(settingsViewController *)controller
{
    [self dismissModalViewControllerAnimated:YES];
}

- (IBAction)showSettings:(id)sender
{    
    settingsViewController *controller = [[settingsViewController alloc] initWithNibName:@"settingsViewController" bundle:nil];
    
    controller.delegate = self;
    
    controller.modalTransitionStyle = UIModalTransitionStyleCoverVertical;
    [self presentModalViewController:controller animated:YES];
    
    [controller release];
}

- (void)infoViewControllerDidFinish:(infoViewController *)controller
{
    [self dismissModalViewControllerAnimated:YES];
}

- (IBAction)showInfo:(id)sender
{    
    infoViewController *controller = [[infoViewController alloc] initWithNibName:@"infoViewController" bundle:nil];
    
    controller.delegate = self;
    
    controller.modalTransitionStyle = UIModalTransitionStyleCoverVertical;
    [self presentModalViewController:controller animated:YES];
    
    [controller release];
}

- (void)buyViewControllerDidFinish:(buyViewController *)controller
{
    [self dismissModalViewControllerAnimated:YES];
}

- (IBAction)showBuy:(id)sender
{    
    buyViewController *controller = [[buyViewController alloc] initWithNibName:@"buyViewController" bundle:nil];
    
    controller.delegate = self;
    
    controller.modalTransitionStyle = UIModalTransitionStyleCoverVertical;
    [self presentModalViewController:controller animated:YES];
    
    [controller release];
}


// eBay
- (void)FindItemsViewControllerDidFinish:(FindItemsViewController *)controller
{
    [self dismissModalViewControllerAnimated:YES];
}

- (IBAction)showEbay:(id)sender
{    
    FindItemsViewController *controller = [[FindItemsViewController alloc] initWithNibName:@"FindItemsViewController" bundle:nil];
    
    controller.delegate = self;
    
    controller.modalTransitionStyle = UIModalTransitionStyleCoverVertical;
    [self presentModalViewController:controller animated:YES];
    
    [controller release];
}

// Song
- (void)MainViewControllerDidFinish:(MainViewController *)controller
{
    [self dismissModalViewControllerAnimated:YES];
}

- (IBAction)showSong:(id)sender
{    
    MainViewController *controller = [[MainViewController alloc] initWithNibName:@"MainView" bundle:nil];
    
    controller.delegate = self;
    
    controller.modalTransitionStyle = UIModalTransitionStyleCoverVertical;
    [self presentModalViewController:controller animated:YES];
    
    [controller release];
}

#pragma mark - Actions
- (IBAction)showCapture:(id)sender
{
    captureButton.hidden = YES;
    taphereLabel.hidden = YES;
    headerLabel.hidden = YES;
    
    // Update header label
    CGRect displayFrame = CGRectMake(20, 100, 300, 60);
    displayLabel = [[UILabel alloc] initWithFrame:displayFrame];
    displayLabel.font = [UIFont boldSystemFontOfSize:30.0];
    displayLabel.textAlignment = UITextAlignmentCenter;
    displayLabel.textColor = [UIColor blackColor];
    displayLabel.backgroundColor = [UIColor clearColor];
    displayLabel.text = @"Current";
    [self.view addSubview:displayLabel];
    
    // Display BPM
    CGRect bpmFrame = CGRectMake(20, 150, 300, 60);
    bpmLabel = [[UILabel alloc] initWithFrame:bpmFrame];
    bpmLabel.font = [UIFont boldSystemFontOfSize:60.0];
    bpmLabel.textAlignment = UITextAlignmentCenter;
    bpmLabel.textColor = [UIColor blackColor];
    bpmLabel.backgroundColor = [UIColor clearColor];
	bpmLabel.text = @"000 BPM";
	[self.view addSubview:bpmLabel];
    
    // Display Start Button
    startButton.hidden = NO;
}

- (IBAction)startButton:(id)sender
{
    captureButton.hidden = NO;
    taphereLabel.hidden = NO;
    headerLabel.hidden = NO;
    
    displayLabel.hidden = YES;
    bpmLabel.hidden = YES;
}

@end
