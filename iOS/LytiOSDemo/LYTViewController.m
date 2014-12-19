//
//  LYTViewController.m
//  Lyt
//
//  Created by Hermes Pique on 26/03/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "LYTViewController.h"
#import "Lyt.h"

static CGFloat const TopMargin = 44;
static CGFloat const SideMargin = 12;
static CGFloat const Separator = 8;

@implementation LYTViewController {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyLabel;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    _titleLabel = [self addLabelWithText:NSLocalizedString(@"Introducing Lyt", @"") color:[UIColor redColor]];
    _subtitleLabel = [self addLabelWithText:NSLocalizedString(@"A UIView and NSArray category to make autolayout (more) readable and less verbose.", @"") color:[UIColor yellowColor]];
    _bodyLabel = [self addLabelWithText:NSLocalizedString(@"Lyt offers hundreds of methods. Current families are:\nlyt_align*\nlyt_center*\nlyt_distribute*\nlyt_match*\nlyt_place*\nlyt_set*", @"") color:[UIColor greenColor]];
    
    [self layoutWithLyt];

    // [self layoutWithVisualFormat];
}

- (void)layoutWithLyt
{
    [_titleLabel lyt_alignTopToParentWithMargin:TopMargin];
    [@[_titleLabel, _subtitleLabel, _bodyLabel] lyt_distributeYWithSpacing:Separator];

    [_titleLabel lyt_centerXInParent];
    [@[_bodyLabel, _subtitleLabel] lyt_alignSidesToParentWithMargin:SideMargin];
}

- (void)layoutWithVisualFormat
{
    NSDictionary *views = NSDictionaryOfVariableBindings(_titleLabel, _subtitleLabel, _bodyLabel);
    NSDictionary *metrics = @{@"TopMargin" : @(TopMargin), @"SideMargin" : @(SideMargin), @"Separator" : @(Separator)};
    
    NSArray *verticalConstraints = [NSLayoutConstraint constraintsWithVisualFormat:@"V:|-TopMargin-[_titleLabel]-Separator-[_subtitleLabel]-Separator-[_bodyLabel]"
                                                                           options:NSLayoutFormatAlignAllCenterX
                                                                           metrics:metrics
                                                                             views:views];
    [self.view addConstraints:verticalConstraints];
    
    NSArray *horizontalConstraints =
    [@[
       [NSLayoutConstraint constraintsWithVisualFormat:@"H:|-SideMargin-[_subtitleLabel]-SideMargin-|"
                                               options:kNilOptions
                                               metrics:metrics
                                                 views:views],
       [NSLayoutConstraint constraintsWithVisualFormat:@"H:|-SideMargin-[_bodyLabel]-SideMargin-|"
                                               options:kNilOptions
                                               metrics:metrics
                                                 views:views],
       ] valueForKeyPath:@"@unionOfArrays.self"];
    [self.view addConstraints:horizontalConstraints];
}

#pragma mark Utils

- (UILabel*)addLabelWithText:(NSString*)text color:(UIColor*)color
{
    UILabel *label = [UILabel new];
    label.text = text;
    label.translatesAutoresizingMaskIntoConstraints = NO;
    label.backgroundColor = color;
    label.numberOfLines = 0;
    [self.view addSubview:label];
    return label;
}

@end
