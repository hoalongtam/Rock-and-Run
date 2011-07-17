//
//  infoViewController.m
//  pacemaker
//
//  Created by Bess Ho on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "infoViewController.h"

@implementation infoViewController

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
    // Do any additional setup after loading the view from its nib.
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

#pragma mark - Actions
- (IBAction)done:(id)sender
{
    [self.delegate infoViewControllerDidFinish:self];
}

@end
