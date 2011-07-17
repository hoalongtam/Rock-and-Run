//
//  infoViewController.h
//  pacemaker
//
//  Created by Bess Ho on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol infoViewControllerDelegate;

@interface infoViewController : UIViewController {
    
}

@property (nonatomic, assign) id <infoViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end

@protocol infoViewControllerDelegate
- (void)infoViewControllerDidFinish:(infoViewController *)controller;
@end