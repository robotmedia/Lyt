//
//  Lyt.h
//  Lyt
//
//  Created by Hermés Piqué on 26/03/14.
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

#import "Lyt.h"

@implementation LYTView (LytUtils)

- (LYTView*)lyt_ancestorSharedWithView:(LYTView*)aView
{
#if TARGET_OS_IPHONE
    // TODO: Inneficient if view isn't a sibling or direct ancestor
    if (aView == nil) return nil;
    if (self == aView) return self;
    if (self == aView.superview) return self;
    LYTView *ancestor = [self.superview lyt_ancestorSharedWithView:aView];
    if (ancestor) return ancestor;
    return [self lyt_ancestorSharedWithView:aView.superview];
#else
    return [self ancestorSharedWithView:aView];
#endif
}

- (void)lyt_addConstraint:(NSLayoutConstraint*)constraint toAncestorSharedWithView:(LYTView*)view
{
    LYTView *ancestor = [self lyt_ancestorSharedWithView:view];
    [ancestor addConstraint:constraint];
}

- (void)lyt_addConstraints:(NSArray*)constraints toAncestorSharedWithView:(LYTView*)view
{
    LYTView *ancestor = [self lyt_ancestorSharedWithView:view];
    [ancestor addConstraints:constraints];
}

@end

@implementation LYTView (Lyt)

#pragma mark Alignment

- (NSLayoutConstraint*)lyt_alignTopToParent
{
    return [self lyt_alignTopToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_alignTopToParentWithMargin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningTopToParentWithMargin:margin];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignTopToView:(LYTView*)view
{
    return [self lyt_alignTopToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignTopToView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningTopToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignRightToParent
{
    return [self lyt_alignRightToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_alignRightToParentWithMargin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningRightToView:self.superview margin:margin];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignRightToView:(LYTView*)view
{
    return [self lyt_alignRightToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignRightToView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningRightToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignBottomToParent
{
    return [self lyt_alignBottomToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_alignBottomToParentWithMargin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningBottomToParentWithMargin:margin];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignBottomToView:(LYTView*)view
{
    return [self lyt_alignBottomToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignBottomToView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningBottomToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignLeftToParent
{
    return [self lyt_alignLeftToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_alignLeftToParentWithMargin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningLeftToView:self.superview margin:margin];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignLeftToView:(LYTView*)view
{
    return [self lyt_alignLeftToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignLeftToView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningLeftToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSArray*)lyt_alignSidesToParent
{
    return [self lyt_alignSidesToParentWithMargin:0];
}

- (NSArray*)lyt_alignSidesToParentWithMargin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByAligningSidesToParentWithMargin:margin];
    [self.superview addConstraints:constraints];
    return constraints;
}

- (NSArray*)lyt_alignSidesToView:(LYTView*)view
{
    return [self lyt_alignSidesToView:view margin:0];
}

- (NSArray*)lyt_alignSidesToView:(LYTView*)view margin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByAligningSidesToView:view margin:margin];
    [self lyt_addConstraints:constraints toAncestorSharedWithView:view];
    return constraints;
}

- (NSArray*)lyt_alignToParent
{
    return [self lyt_alignToParentWithMargin:0];
}

- (NSArray*)lyt_alignToParentWithMargin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByAligningToParentWithMargin:margin];
    [self.superview addConstraints:constraints];
    return constraints;
}

- (NSArray*)lyt_alignToView:(LYTView*)view
{
    return [self lyt_alignToView:view margin:0];
}

- (NSArray*)lyt_alignToView:(LYTView*)view margin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByAligningToView:self.superview margin:margin];
    [self.superview addConstraints:constraints];
    return constraints;
}

- (NSLayoutConstraint*)lyt_constraintByAligningTopToParent
{
    return [self lyt_constraintByAligningTopToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningTopToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintByAligningTopToView:self.superview margin:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(LYTView*)view
{
    return [self lyt_constraintByAligningTopToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeTop multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningRightToParent
{
    return [self lyt_constraintByAligningRightToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningRightToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintByAligningRightToView:self.superview margin:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(LYTView*)view
{
    return [self lyt_constraintByAligningRightToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeRight relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeRight multiplier:1 constant:-margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParent
{
    return [self lyt_constraintByAligningBottomToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintByAligningBottomToView:self.superview margin:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(LYTView*)view
{
    return [self lyt_constraintByAligningBottomToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeBottom relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeBottom multiplier:1 constant:-margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToParent
{
    return [self lyt_constraintByAligningLeftToParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintByAligningLeftToView:self.superview margin:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(LYTView*)view
{
    return [self lyt_constraintByAligningLeftToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeLeft relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeLeft multiplier:1 constant:margin];
}

- (NSArray*)lyt_constraintsByAligningSidesToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintsByAligningSidesToView:self.superview margin:margin];
}

- (NSArray*)lyt_constraintsByAligningSidesToView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *leftConstraint = [self lyt_constraintByAligningLeftToView:view margin:margin];
    NSLayoutConstraint *rightConstraint = [self lyt_constraintByAligningRightToView:view margin:margin];
    return @[leftConstraint, rightConstraint];
}

- (NSArray*)lyt_constraintsByAligningToParent
{
    return [self lyt_constraintsByAligningToView:self.superview margin:0];
}

- (NSArray*)lyt_constraintsByAligningToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintsByAligningToView:self.superview margin:margin];
}

- (NSArray*)lyt_constraintsByAligningToView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *topConstraint = [self lyt_constraintByAligningTopToView:view margin:margin];
    NSLayoutConstraint *rightConstraint = [self lyt_constraintByAligningRightToView:view margin:margin];
    NSLayoutConstraint *bottomConstraint = [self lyt_constraintByAligningBottomToView:view margin:margin];
    NSLayoutConstraint *leftConstraint = [self lyt_constraintByAligningLeftToView:view margin:margin];
    return @[topConstraint, rightConstraint, bottomConstraint, leftConstraint];
}

#pragma mark Centering

- (NSLayoutConstraint*)lyt_centerXInParent
{
    return [self lyt_centerXInParentWithOffset:0];
}

- (NSLayoutConstraint*)lyt_centerXInParentWithOffset:(CGFloat)offset
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringXInParentWithOffset:offset];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_centerXWithView:(LYTView*)view
{
    return [self lyt_centerXWithView:view offset:0];
}

- (NSLayoutConstraint*)lyt_centerXWithView:(LYTView*)view offset:(CGFloat)offset
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringXWithView:view offset:offset];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_centerYInParent
{
    return [self lyt_centerYInParentWithOffset:0];
}

- (NSLayoutConstraint*)lyt_centerYInParentWithOffset:(CGFloat)offset
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringYInParentWithOffset:offset];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_centerYWithView:(LYTView*)view
{
    return [self lyt_centerYWithView:view offset:0];
}

- (NSLayoutConstraint*)lyt_centerYWithView:(LYTView*)view offset:(CGFloat)offset
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringYWithView:view offset:offset];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSArray*)lyt_centerInParent
{
    return [self lyt_centerInParentWithOffset:0];
}

- (NSArray*)lyt_centerInParentWithOffset:(CGFloat)offset
{
    NSArray *constraints = [self lyt_constraintsByCenteringInParentWithOffset:offset];
    [self.superview addConstraints:constraints];
    return constraints;
}

- (NSArray*)lyt_centerWithView:(LYTView*)view
{
    return [self lyt_centerWithView:view offset:0];
}

- (NSArray*)lyt_centerWithView:(LYTView*)view offset:(CGFloat)offset
{
    NSArray *constraints = [self lyt_constraintsByCenteringWithView:view offset:offset];
    [self lyt_addConstraints:constraints toAncestorSharedWithView:view];
    return constraints;
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParent
{
    return [self lyt_constraintByCenteringXInParentWithOffset:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParentWithOffset:(CGFloat)offset
{
    return [self lyt_constraintByCenteringXWithView:self.superview offset:offset];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(LYTView*)view
{
    return [self lyt_constraintByCenteringXWithView:view offset:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(LYTView*)view offset:(CGFloat)offset
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeCenterX multiplier:1 constant:offset];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParent
{
    return [self lyt_constraintByCenteringYInParentWithOffset:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParentWithOffset:(CGFloat)offset
{
    return [self lyt_constraintByCenteringYWithView:self.superview offset:offset];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(LYTView*)view
{
    return [self lyt_constraintByCenteringYWithView:view offset:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(LYTView*)view offset:(CGFloat)offset
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeCenterY relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeCenterY multiplier:1 constant:offset];
}

- (NSArray*)lyt_constraintsByCenteringInParent
{
    return [self lyt_constraintsByCenteringInParentWithOffset:0];
}

- (NSArray*)lyt_constraintsByCenteringInParentWithOffset:(CGFloat)offset
{
    return [self lyt_constraintsByCenteringWithView:self.superview offset:offset];
}

- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view
{
    return [self lyt_constraintsByCenteringWithView:view offset:0];
}

- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view offset:(CGFloat)offset
{
    NSLayoutConstraint *centerXConstraint = [self lyt_constraintByCenteringXWithView:view offset:offset];
    NSLayoutConstraint *centerYConstraint = [self lyt_constraintByCenteringYWithView:view offset:offset];
    return @[centerXConstraint, centerYConstraint];
}

#pragma mark Placement

- (NSLayoutConstraint*)lyt_placeAboveView:(LYTView*)view
{
    return [self lyt_placeAboveView:view margin:0];
}

- (NSLayoutConstraint*)lyt_placeAboveView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByPlacingAboveView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_placeRightOfView:(LYTView*)view
{
    return [self lyt_placeRightOfView:view margin:0];
}

- (NSLayoutConstraint*)lyt_placeRightOfView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByPlacingRightOfView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_placeBelowView:(LYTView*)view
{
    return [self lyt_placeBelowView:view margin:0];
}

- (NSLayoutConstraint*)lyt_placeBelowView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByPlacingBelowView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_placeLeftOfView:(LYTView*)view
{
    return [self lyt_placeLeftOfView:view margin:0];
}

- (NSLayoutConstraint*)lyt_placeLeftOfView:(LYTView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByPlacingLeftOfView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(LYTView*)view
{
    return [self lyt_constraintByPlacingAboveView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeBottom relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeTop multiplier:1 constant:-margin];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(LYTView*)view
{
    return [self lyt_constraintByPlacingRightOfView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeLeft relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeRight multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(LYTView*)view
{
    return [self lyt_constraintByPlacingBelowView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeBottom multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(LYTView*)view
{
    return [self lyt_constraintByPlacingLeftOfView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(LYTView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeRight relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeLeft multiplier:1 constant:-margin];
}

#pragma mark Sizing

- (NSLayoutConstraint*)lyt_setX:(CGFloat)x
{
    NSLayoutConstraint *constraint = [self lyt_constraintBySettingX:x];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_setY:(CGFloat)y
{
    NSLayoutConstraint *constraint = [self lyt_constraintBySettingY:y];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSArray*)lyt_setOrigin:(CGPoint)origin
{
    NSArray *constraints = [self lyt_constraintsBySettingOrigin:origin];
    [self.superview addConstraints:constraints];
    return constraints;
}

- (NSLayoutConstraint*)lyt_setWidth:(CGFloat)width
{
    NSLayoutConstraint *constraint = [self lyt_constraintBySettingWidth:width];
    [self addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_setHeight:(CGFloat)height
{
    NSLayoutConstraint *constraint = [self lyt_constraintBySettingHeight:height];
    [self addConstraint:constraint];
    return constraint;
}

- (NSArray*)lyt_setSize:(CGSize)size
{
    NSArray *constraints = [self lyt_constraintsBySettingSize:size];
    [self addConstraints:constraints];
    return constraints;
}

- (NSArray*)lyt_setFrame:(CGRect)frame
{
    NSArray *originConstraints = [self lyt_constraintsBySettingOrigin:frame.origin];
    [self.superview addConstraints:originConstraints];
    NSArray *widthConstraints = [self lyt_constraintsBySettingSize:frame.size];
    [self addConstraints:widthConstraints];
    return [originConstraints arrayByAddingObjectsFromArray:widthConstraints];
}

- (NSLayoutConstraint*)lyt_matchWidthToView:(LYTView*)view
{
    NSLayoutConstraint *constraint = [self lyt_constraintByMatchingWidthToView:view];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_matchHeightToView:(LYTView*)view
{
    NSLayoutConstraint *constraint = [self lyt_constraintByMatchingHeightToView:view];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_constraintBySettingX:(CGFloat)x
{
    return [self lyt_constraintByAligningLeftToParentWithMargin:x];
}

- (NSLayoutConstraint*)lyt_constraintBySettingY:(CGFloat)y
{
    return [self lyt_constraintByAligningTopToParentWithMargin:y];
}

- (NSArray*)lyt_constraintsBySettingOrigin:(CGPoint)origin
{
    NSLayoutConstraint *xConstraint = [self lyt_constraintBySettingX:origin.x];
    NSLayoutConstraint *yConstraint = [self lyt_constraintBySettingY:origin.y];
    return @[xConstraint, yConstraint];
}

- (NSLayoutConstraint*)lyt_constraintBySettingWidth:(CGFloat)width
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeWidth relatedBy:NSLayoutRelationEqual toItem:nil attribute:NSLayoutAttributeNotAnAttribute multiplier:1 constant:width];
}

- (NSLayoutConstraint*)lyt_constraintBySettingHeight:(CGFloat)height
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeHeight relatedBy:NSLayoutRelationEqual toItem:nil attribute:NSLayoutAttributeNotAnAttribute multiplier:1 constant:height];
}

- (NSArray*)lyt_constraintsBySettingSize:(CGSize)size
{
    NSLayoutConstraint *widthConstraint = [self lyt_constraintBySettingWidth:size.width];
    NSLayoutConstraint *heightConstraint = [self lyt_constraintBySettingHeight:size.height];
    return @[widthConstraint, heightConstraint];
}

- (NSArray*)lyt_constraintsBySettingFrame:(CGRect)frame
{
    NSLayoutConstraint *xConstraint = [self lyt_constraintBySettingX:frame.origin.x];
    NSLayoutConstraint *yConstraint = [self lyt_constraintBySettingY:frame.origin.y];
    NSLayoutConstraint *widthConstraint = [self lyt_constraintBySettingWidth:frame.size.width];
    NSLayoutConstraint *heightConstraint = [self lyt_constraintBySettingHeight:frame.size.height];
    return @[xConstraint, yConstraint, widthConstraint, heightConstraint];
}

- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(LYTView*)view
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeWidth relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeWidth multiplier:1 constant:0];
}

- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(LYTView*)view
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeHeight relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeHeight multiplier:1 constant:0];
}

- (NSArray*)lyt_constraintsByMatchingSizeToView:(LYTView*)view
{
    NSLayoutConstraint *widthConstraint = [self lyt_constraintByMatchingWidthToView:view];
    NSLayoutConstraint *heightConstraint = [self lyt_constraintByMatchingHeightToView:view];
    return @[widthConstraint, heightConstraint];
}

@end
