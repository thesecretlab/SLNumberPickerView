//
//  SBLNumberPickerView.h
//  A themed number picker.
//
//  Created by Jon Manning on 21/04/12.
//  Copyright (c) 2012 Secret Lab. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SLNumberPickerView;

@protocol SLNumberPickerViewDelegate <NSObject>

- (void) numberPickerViewDidChangeValue:(SLNumberPickerView*)picker;

@end

@interface SLNumberPickerView : UIView <UIScrollViewDelegate>

+ (SLNumberPickerView*)numberPickerView;

@property (strong, nonatomic) IBOutlet UIScrollView *number1;
@property (strong, nonatomic) IBOutlet UIScrollView *number2;
@property (strong, nonatomic) IBOutlet UIScrollView *number3;

@property (readonly) NSInteger value;

@property (nonatomic, weak) IBOutlet id <SLNumberPickerViewDelegate> delegate;

@end
