//
//  Lyt.h
//  Lyt
//
//  Created by Hermés Piqué on 26/03/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Lyt)

// Alignment

- (NSLayoutConstraint*)lyt_alignTopToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignTopToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignRightToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignRightToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignBottomToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignBottomToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignLeftToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignLeftToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignCenterXToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignCenterXToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignCenterYToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignCenterYToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_alignSidesToView:(UIView*)view;

- (NSArray*)lyt_alignSidesToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_alignCenterToView:(UIView*)view;

- (NSArray*)lyt_alignCenterToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningCenterXToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningCenterXToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningCenterYToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningCenterYToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningCenterToView:(UIView*)view;

- (NSArray*)lyt_constraintsByAligningCenterToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningSidesToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningToView:(UIView*)view margin:(CGFloat)margin;

// Placement

- (NSLayoutConstraint*)lyt_placeAboveView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeBelowView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeLeftToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftToView:(UIView*)view margin:(CGFloat)margin;

// Sizing

- (NSLayoutConstraint*)lyt_setWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_setHeight:(CGFloat)height;

- (NSArray*)lyt_setSize:(CGSize)size;

- (NSLayoutConstraint*)lyt_matchWidthToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_matchHeightToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintWithWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_constraintWithHeight:(CGFloat)height;

- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(UIView*)view;

- (NSArray*)lyt_constraintsByMatchingSizeToView:(UIView*)view;

- (NSArray*)lyt_constraintsWithSize:(CGSize)size;

@end

