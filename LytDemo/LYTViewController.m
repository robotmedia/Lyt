//
//  LYTViewController.m
//  Lyt
//
//  Created by Hermés Piqué on 26/03/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//

#import "LYTViewController.h"
#import "Lyt.h"

static CGFloat const TopMargin = 44;
static CGFloat const SideMargin = 12;
static CGFloat const Separator = 8;

@implementation LYTViewController {
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    _titleLabel = [UILabel new];
    _titleLabel.text = NSLocalizedString(@"Introducing Lyt", @"");
    _titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
    _titleLabel.backgroundColor = [UIColor redColor];
    [self.view addSubview:_titleLabel];
    
    _bodyLabel = [UILabel new];
    _bodyLabel.text = NSLocalizedString(@"A UIView category to make autolayout readable.", @"");
    _bodyLabel.translatesAutoresizingMaskIntoConstraints = NO;
    _bodyLabel.backgroundColor = [UIColor yellowColor];
    _bodyLabel.numberOfLines = 0;
    [self.view addSubview:_bodyLabel];
    
    [self layoutWithLyt];

    // [self layoutWithVisualFormat];
}

- (void)layoutWithLyt
{
    [_titleLabel lyt_alignTopToView:self.view margin:TopMargin];
    [_titleLabel lyt_centerXInParent];
    
    [_bodyLabel lyt_alignSidesToView:self.view margin:SideMargin];
    [_bodyLabel lyt_placeBelowView:_titleLabel margin:Separator];
}

- (void)layoutWithVisualFormat
{
    NSDictionary *views = NSDictionaryOfVariableBindings(_titleLabel, _bodyLabel);
    NSDictionary *metrics = @{@"TopMargin" : @(TopMargin), @"SideMargin" : @(SideMargin), @"Separator" : @(Separator)};
    
    NSArray *verticalConstraints = [NSLayoutConstraint constraintsWithVisualFormat:@"V:|-TopMargin-[_titleLabel]-Separator-[_bodyLabel]"
                                                                           options:NSLayoutFormatAlignAllCenterX
                                                                           metrics:metrics
                                                                             views:views];
    [self.view addConstraints:verticalConstraints];
    
    NSArray *horizontalConstraints = [NSLayoutConstraint constraintsWithVisualFormat:@"H:|-SideMargin-[_bodyLabel]-SideMargin-|"
                                                                             options:kNilOptions
                                                                             metrics:metrics
                                                                               views:views];
    [self.view addConstraints:horizontalConstraints];
}

@end
