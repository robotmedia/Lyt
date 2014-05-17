//
//  LYTAppDelegate.m
//  LytOSXDemo
//
//  Created by Hermés Piqué on 17/05/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//

#import "LYTOSXDemoAppDelegate.h"
#import "Lyt.h"

static CGFloat const TopMargin = 44;
static CGFloat const SideMargin = 12;
static CGFloat const Separator = 8;

@implementation LYTOSXDemoAppDelegate {
    NSTextField *_titleLabel;
    NSTextField *_bodyLabel;
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    _titleLabel = [self.class labelWithText:NSLocalizedString(@"Introducing Lyt", @"")];
    _titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
    [self.window.contentView addSubview:_titleLabel];
    
    _bodyLabel = [self.class labelWithText:NSLocalizedString(@"A UIView category to make autolayout (more) readable and less verbose.", @"")];
    _bodyLabel.translatesAutoresizingMaskIntoConstraints = NO;
    [self.window.contentView addSubview:_bodyLabel];
    
    [self layoutWithLyt];
    
    // [self layoutWithVisualFormat];
}

- (void)layoutWithLyt
{
    [_titleLabel lyt_alignTopToParentWithMargin:TopMargin];
    [_titleLabel lyt_centerXInParent];
    
    [_bodyLabel lyt_alignSidesToParentWithMargin:SideMargin];
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
    [self.window.contentView addConstraints:verticalConstraints];
    
    NSArray *horizontalConstraints = [NSLayoutConstraint constraintsWithVisualFormat:@"H:|-SideMargin-[_bodyLabel]-SideMargin-|"
                                                                             options:kNilOptions
                                                                             metrics:metrics
                                                                               views:views];
    [self.window.contentView addConstraints:horizontalConstraints];
}

#pragma mark Utils

+ (NSTextField*)labelWithText:(NSString*)text
{
    NSTextField *label = [NSTextField new];
    [label setBezeled:NO];
    [label setEditable:NO];
    [label setStringValue:text];
    return label;
}

@end


