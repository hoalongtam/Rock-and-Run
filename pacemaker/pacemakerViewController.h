//
//  pacemakerViewController.h
//  pacemaker
//
//  Created by Bess Ho on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "settingsViewController.h"
#import "infoViewController.h"
#import "buyViewController.h"
#import "FindItemsViewController.h"
#import "MainViewController.h"

@interface pacemakerViewController : UIViewController
<settingsViewControllerDelegate,infoViewControllerDelegate,buyViewControllerDelegate,FindItemsViewControllerDelegate,MainViewControllerDelegate>
{
    // Declare viewController
    settingsViewController *settingsView;
    infoViewController *infoView;
    buyViewController *buyView;
    FindItemsViewController *ebayView;
    MainViewController *mainView;
    
    // Declare Capture
    IBOutlet UIButton *captureButton;
    IBOutlet UILabel *headerLabel;
    IBOutlet UILabel *taphereLabel;
    
    // Declare BPM
    UILabel *displayLabel;
    UILabel *bpmLabel;
    IBOutlet UIButton *startButton;
}

@property (nonatomic, retain) UIButton *captureButton;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) UILabel *taphereLabel;
@property (nonatomic, retain) UIButton *startButton;

- (IBAction)showSettings:(id)sender;
- (IBAction)showInfo:(id)sender;
- (IBAction)showBuy:(id)sender;
- (IBAction)showCapture:(id)sender;
- (IBAction)startButton:(id)sender;
- (IBAction)showEbay:(id)sender;
- (IBAction)showSong:(id)sender;

@end
