//
//  buyViewController.h
//  pacemaker
//
//  Created by Bess Ho on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol buyViewControllerDelegate;

@interface buyViewController : UIViewController {
    
}

@property (nonatomic, assign) id <buyViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end

@protocol buyViewControllerDelegate
- (void)buyViewControllerDidFinish:(buyViewController *)controller;
@end
