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

- (NSArray*)lyt_alignSidesToView:(UIView*)view;

- (NSArray*)lyt_alignSidesToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningSidesToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningToView:(UIView*)view margin:(CGFloat)margin;

// Centering

- (NSLayoutConstraint*)lyt_centerXWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_centerXWithView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_centerYWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_centerYWithView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_centerWithView:(UIView*)view;

- (NSArray*)lyt_centerWithView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByCenteringWithView:(UIView*)view;

- (NSArray*)lyt_constraintsByCenteringWithView:(UIView*)view margin:(CGFloat)margin;

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

