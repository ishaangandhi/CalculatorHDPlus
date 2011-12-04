//
//  CalculatorViewController.h
//  Calculator
//
//  Created by Ishaan Gandhi on 5/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CalculatorViewController : UIViewController 
{
    BOOL orientation;
    
    //Calculator Values
    BOOL userIsInTheMiddleOfTypingANumber;    
    double operand;
    double memory;
    double memoryTwo;
    double waitingOperand;
    NSString *waitingOperation;
    
    //Interface
    IBOutlet UILabel *screen;
    IBOutlet UILabel *landScreen;
    
    IBOutlet UIImageView *screenImage;
    IBOutlet UIImageView *landScreenImage;
    
    IBOutlet UILabel *errorField;
    IBOutlet UILabel *landErrorField;
    
    IBOutlet UIImageView *backgroundImage;
    IBOutlet UIImageView *landBackgroundImage;
     
    IBOutlet UIView *port;
    IBOutlet UIView *land;
    
    //Facebook Elements
    //IBOutlet UIButton *facebookButton;
    //IBOutlet UIButton *infoButton;
    //IBOutlet UILabel  *facebookLabel;
    //IBOutlet UIImageView *facebookImageView;
    //Facebook *facebook;
    //NSArray *_permissions;

}

//@property (nonatomic, retain) Facebook *facebook;
//@property (nonatomic, retain) IBOutletCollection(UILabel) UILabel *screenCollection;

@property BOOL orientation;

-(IBAction)AC;
-(IBAction)digitPressed:(UIButton *)sender;
-(IBAction)flip;
-(IBAction)operationPressed:(UIButton *)sender;
//-(IBAction)publishOnFacebook;
-(IBAction)mClear;
-(IBAction)mStore;
-(IBAction)mRecall;
-(IBAction)mTwoClear;
-(IBAction)mTwoStore;
-(IBAction)mTwoRecall;
-(IBAction)pointPressed;

-(void)changeImage:(NSInteger)image;

@end