//
//  settingsViewController.h
//  pacemaker
//
//  Created by Bess Ho on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol settingsViewControllerDelegate;

@interface settingsViewController : UIViewController {
    
}

@property (nonatomic, assign) id <settingsViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end

@protocol settingsViewControllerDelegate
- (void)settingsViewControllerDidFinish:(settingsViewController *)controller;
@end
