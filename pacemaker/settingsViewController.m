//
//  settingsViewController.m
//  pacemaker
//
//  Created by Bess Ho on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "settingsViewController.h"

@implementation settingsViewController

@synthesize delegate=_delegate;

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
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

#pragma mark - Actions
- (IBAction)done:(id)sender
{
    [self.delegate settingsViewControllerDidFinish:self];
}

@end
