//
//  FlipSideView.h
//  Calculator
//
//  Created by Ishaan Gandhi on 5/29/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorViewController.h"

@protocol FlipSideViewDelegate
- (void)accessTokenFound:(NSString *)accessToken;
- (void)displayRequired;
- (void)closeTapped;
@end

@interface FlipSideView : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>{
    UIWebView *_webView;
    NSString *_apiKey;
    NSString *_requestedPermissions;
    NSMutableArray *backgrounds;
    IBOutlet UIImageView *background;
    CalculatorViewController *controller;
    int curBackground;
    IBOutlet UIPickerView *pickerView;
    id <FlipSideViewDelegate> _delegate;
}

-(IBAction)back;
-(IBAction)preview;
-(IBAction)set;

@end