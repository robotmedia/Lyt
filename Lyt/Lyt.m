//
//  Lyt.h
//  Lyt
//
//  Created by Hermés Piqué on 26/03/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//

#import "Lyt.h"

@interface UIView (LytUtils)

- (UIView*)lyt_ancestorSharedWithView:(UIView*)view;

- (void)lyt_addConstraint:(NSLayoutConstraint*)constraint toAncestorSharedWithView:(UIView*)view;

- (void)lyt_addConstraints:(NSArray*)constraints toAncestorSharedWithView:(UIView*)view;

@end

@implementation UIView (LytUtils)

- (UIView*)lyt_ancestorSharedWithView:(UIView*)view
{
    if (view == nil) return nil;
    if (self.superview == view) return view;
    return [self lyt_ancestorSharedWithView:view.superview];
}

- (void)lyt_addConstraint:(NSLayoutConstraint*)constraint toAncestorSharedWithView:(UIView*)view
{
    UIView *ancestor = [self lyt_ancestorSharedWithView:view];
    [ancestor addConstraint:constraint];
}

- (void)lyt_addConstraints:(NSArray*)constraints toAncestorSharedWithView:(UIView*)view
{
    UIView *ancestor = [self lyt_ancestorSharedWithView:view];
    [ancestor addConstraints:constraints];
}

@end

@implementation UIView (Lyt)

#pragma mark Alignment

- (NSLayoutConstraint*)lyt_alignTopToParentWithMargin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningTopToParentWithMargin:margin];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignTopToView:(UIView*)view
{
    return [self lyt_alignTopToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignTopToView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningTopToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignRightToView:(UIView*)view
{
    return [self lyt_alignRightToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignRightToView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningRightToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignBottomToView:(UIView*)view
{
    return [self lyt_alignBottomToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignBottomToView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningBottomToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_alignLeftToView:(UIView*)view
{
    return [self lyt_alignLeftToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_alignLeftToView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByAligningLeftToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSArray*)lyt_alignSidesToParentWithMargin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByAligningSidesToParentWithMargin:margin];
    [self.superview addConstraints:constraints];
    return constraints;
}

- (NSArray*)lyt_alignSidesToView:(UIView*)view
{
    return [self lyt_alignSidesToView:view margin:0];
}

- (NSArray*)lyt_alignSidesToView:(UIView*)view margin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByAligningSidesToView:view margin:margin];
    [self lyt_addConstraints:constraints toAncestorSharedWithView:view];
    return constraints;
}

- (NSLayoutConstraint*)lyt_constraintByAligningTopToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintByAligningTopToView:self.superview margin:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view
{
    return [self lyt_constraintByAligningTopToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeTop multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view
{
    return [self lyt_constraintByAligningBottomToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeBottom relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeBottom multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view
{
    return [self lyt_constraintByAligningLeftToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeLeft relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeLeft multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view
{
    return [self lyt_constraintByAligningRightToView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeRight relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeRight multiplier:1 constant:margin];
}

- (NSArray*)lyt_constraintsByAligningSidesToParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintsByAligningSidesToView:self.superview margin:margin];
}

- (NSArray*)lyt_constraintsByAligningSidesToView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *leftConstraint = [self lyt_constraintByAligningLeftToView:view margin:margin];
    NSLayoutConstraint *rightConstraint = [self lyt_constraintByAligningRightToView:view margin:-margin];
    return @[leftConstraint, rightConstraint];
}

- (NSArray*)lyt_constraintsByAligningToView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *leftConstraint = [self lyt_constraintByAligningLeftToView:view margin:margin];
    NSLayoutConstraint *rightConstraint = [self lyt_constraintByAligningRightToView:view margin:-margin];
    NSLayoutConstraint *topConstraint = [self lyt_constraintByAligningTopToView:view margin:margin];
    NSLayoutConstraint *bottomConstraint = [self lyt_constraintByAligningBottomToView:view margin:-margin];
    return @[leftConstraint, rightConstraint, topConstraint, bottomConstraint];
}

#pragma mark Centering

- (NSLayoutConstraint*)lyt_centerXInParent
{
    return [self lyt_centerXInParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_centerXInParentWithMargin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringXInParentWithMargin:margin];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_centerXWithView:(UIView*)view
{
    return [self lyt_centerXWithView:view margin:0];
}

- (NSLayoutConstraint*)lyt_centerXWithView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringXWithView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_centerYInParent
{
    return [self lyt_centerYInParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_centerYInParentWithMargin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringYInParentWithMargin:margin];
    [self.superview addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_centerYWithView:(UIView*)view
{
    return [self lyt_centerYWithView:view margin:0];
}

- (NSLayoutConstraint*)lyt_centerYWithView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByCenteringYWithView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSArray*)lyt_centerInParent
{
    return [self lyt_centerInParentWithMargin:0];
}

- (NSArray*)lyt_centerInParentWithMargin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByCenteringInParentWithMargin:margin];
    [self.superview addConstraints:constraints];
    return constraints;
}

- (NSArray*)lyt_centerWithView:(UIView*)view
{
    return [self lyt_centerWithView:view margin:0];
}

- (NSArray*)lyt_centerWithView:(UIView*)view margin:(CGFloat)margin
{
    NSArray *constraints = [self lyt_constraintsByCenteringWithView:view margin:margin];
    [self lyt_addConstraints:constraints toAncestorSharedWithView:view];
    return constraints;
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParent
{
    return [self lyt_constraintByCenteringXInParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintByCenteringXWithView:self.superview margin:margin];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(UIView*)view
{
    return [self lyt_constraintByCenteringXWithView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeCenterX multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParent
{
    return [self lyt_constraintByCenteringYInParentWithMargin:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintByCenteringYWithView:self.superview margin:margin];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(UIView*)view
{
    return [self lyt_constraintByCenteringYWithView:view margin:0];
}

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeCenterY relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeCenterY multiplier:1 constant:margin];
}

- (NSArray*)lyt_constraintsByCenteringInParent
{
    return [self lyt_constraintsByCenteringInParentWithMargin:0];
}

- (NSArray*)lyt_constraintsByCenteringInParentWithMargin:(CGFloat)margin
{
    return [self lyt_constraintsByCenteringWithView:self.superview margin:margin];
}

- (NSArray*)lyt_constraintsByCenteringWithView:(UIView*)view
{
    return [self lyt_constraintsByCenteringWithView:view margin:0];
}

- (NSArray*)lyt_constraintsByCenteringWithView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *centerXConstraint = [self lyt_constraintByCenteringXWithView:view margin:margin];
    NSLayoutConstraint *centerYConstraint = [self lyt_constraintByCenteringYWithView:view margin:margin];
    return @[centerXConstraint, centerYConstraint];
}

#pragma mark Placement

- (NSLayoutConstraint*)lyt_placeAboveView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByPlacingAboveView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_placeBelowView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByPlacingBelowView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_placeLeftToView:(UIView*)view margin:(CGFloat)margin
{
    NSLayoutConstraint *constraint = [self lyt_constraintByPlacingLeftToView:view margin:margin];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftToView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeLeft relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeRight multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeBottom relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeTop multiplier:1 constant:margin];
}

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(UIView*)view margin:(CGFloat)margin
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeBottom multiplier:1 constant:margin];
}

#pragma mark Sizing

- (NSLayoutConstraint*)lyt_setWidth:(CGFloat)width
{
    NSLayoutConstraint *constraint = [self lyt_constraintWithWidth:width];
    [self addConstraint:constraint];
    return constraint;
}

- (NSLayoutConstraint*)lyt_setHeight:(CGFloat)height
{
    NSLayoutConstraint *constraint = [self lyt_constraintWithHeight:height];
    [self addConstraint:constraint];
    return constraint;
}

- (NSArray*)lyt_setSize:(CGSize)size
{
    NSArray *constraints = [self lyt_constraintsWithSize:size];
    [self addConstraints:constraints];
    return constraints;
}

- (NSLayoutConstraint*)lyt_matchWidthToView:(UIView*)view
{
    NSLayoutConstraint *constraint = [self lyt_constraintByMatchingWidthToView:view];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_matchHeightToView:(UIView*)view
{
    NSLayoutConstraint *constraint = [self lyt_constraintByMatchingHeightToView:view];
    [self lyt_addConstraint:constraint toAncestorSharedWithView:view];
    return constraint;
}

- (NSLayoutConstraint*)lyt_constraintWithWidth:(CGFloat)width
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeWidth relatedBy:NSLayoutRelationEqual toItem:nil attribute:NSLayoutAttributeNotAnAttribute multiplier:1 constant:width];
}

- (NSLayoutConstraint*)lyt_constraintWithHeight:(CGFloat)height
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeHeight relatedBy:NSLayoutRelationEqual toItem:nil attribute:NSLayoutAttributeNotAnAttribute multiplier:1 constant:height];
}

- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(UIView*)view
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeWidth relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeWidth multiplier:1 constant:0];
}

- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(UIView*)view
{
    return [NSLayoutConstraint constraintWithItem:self attribute:NSLayoutAttributeHeight relatedBy:NSLayoutRelationEqual toItem:view attribute:NSLayoutAttributeHeight multiplier:1 constant:0];
}

- (NSArray*)lyt_constraintsByMatchingSizeToView:(UIView*)view
{
    NSLayoutConstraint *widthConstraint = [self lyt_constraintByMatchingWidthToView:view];
    NSLayoutConstraint *heightConstraint = [self lyt_constraintByMatchingHeightToView:view];
    return @[widthConstraint, heightConstraint];
}

- (NSArray*)lyt_constraintsWithSize:(CGSize)size
{
    NSLayoutConstraint *widthConstraint = [self lyt_constraintWithWidth:size.width];
    NSLayoutConstraint *heightConstraint = [self lyt_constraintWithHeight:size.height];
    return @[widthConstraint, heightConstraint];
}

@end
