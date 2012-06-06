//
//  ViewController.m
//  NumberPicker
//
//  Created by Jon Manning on 6/06/12.
//  Copyright (c) 2012 Secret Lab. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize valueLabel;

- (void)numberPickerViewDidChangeValue:(SLNumberPickerView *)picker {
    NSString* valueString = [NSString stringWithFormat:@"Value: %i", picker.value];
    valueLabel.text = valueString;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

@end
