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

#import "TargetConditionals.h" // See: http://stackoverflow.com/questions/3742525/target-os-iphone-and-applicationtests
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#define LYTView UIView
#else
#import <AppKit/AppKit.h>
#define LYTView NSView
#endif

@interface LYTView (Lyt)

#pragma mark Alignment

/**
 Adds a constraint that aligns the top edge of the view with the top edge of the parent view.
 @return A constraint that aligns the top edge of the view with the top edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignTopToParent;

/**
 Adds a constraint that aligns the top edge of the view with the given inner margin from the top edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the top edge of the view with the given inner margin from the top edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignTopToParentWithMargin:(CGFloat)margin;

/**
 Adds a constraint that aligns the top edge of the view with the top edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the top edge of the view with the top edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignTopToView:(LYTView*)view;

/**
 Adds a constraint that aligns the top edge of the view with the given inner margin from the top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the top edge of the view with the given inner margin from the top edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignTopToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds a constraint that aligns the right edge of the view with the right edge of the parent view.
 @return A constraint that aligns the right edge of the view with the right edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignRightToParent;

/**
 Adds a constraint that aligns the right edge of the view with the given inner margin from the right edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the right edge of the view with the given inner margin from the right edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignRightToParentWithMargin:(CGFloat)margin;

/**
 Adds a constraint that aligns the right edge of the view with the right edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the right edge of the view with the right edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignRightToView:(LYTView*)view;

/**
 Adds a constraint that aligns the right edge of the view with the given inner margin from right top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the right edge of the view with the given inner margin from the right edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignRightToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds a constraint that aligns the bottom edge of the view with the bottom edge of the parent view.
 @return A constraint that aligns the bottom edge of the view with the bottom edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignBottomToParent;

/**
 Adds a constraint that aligns the bottom edge of the view with the given inner margin from the bottom edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the bottom edge of the view with the given inner margin from the bottom edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignBottomToParentWithMargin:(CGFloat)margin;

/**
 Adds a constraint that aligns the bottom edge of the view with the bottom edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the bottom edge of the view with the bottom edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignBottomToView:(LYTView*)view;

/**
 Adds a constraint that aligns the bottom edge of the view with the given inner margin from bottom top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the bottom edge of the view with the given inner margin from the bottom edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignBottomToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds a constraint that aligns the left edge of the view with the left edge of the parent view.
 @return A constraint that aligns the left edge of the view with the left edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignLeftToParent;

/**
 Adds a constraint that aligns the left edge of the view with the given inner margin from the left edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the left edge of the view with the given inner margin from the left edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_alignLeftToParentWithMargin:(CGFloat)margin;

/**
 Adds a constraint that aligns the left edge of the view with the left edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the left edge of the view with the left edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignLeftToView:(LYTView*)view;

/**
 Adds a constraint that aligns the left edge of the view with the given inner margin from left top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the left edge of the view with the given inner margin from the left edge of the given view.
 */
- (NSLayoutConstraint*)lyt_alignLeftToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that align the sides of the view with the sides of the parent view.
 @return An array of constraints that align the sides of the view with the sides of the parent view.
 */
- (NSArray*)lyt_alignSidesToParent;

/**
 Adds constraints that align the sides of the view with the given inner margin from the sides of the parent view.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the view with the given inner margin from the sides of the parent view.
 */
- (NSArray*)lyt_alignSidesToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the sides of the view with the sides of the given view.
 @param view The reference view.
 @return An array of constraints that align the sides of the view with the sides of the given view.
 */
- (NSArray*)lyt_alignSidesToView:(LYTView*)view;

/**
 Adds constraints that align the sides of the view with the given inner margin from the sides of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the view with the given inner margin from the sides of the given view.
 */
- (NSArray*)lyt_alignSidesToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that align the edges of the view with the edges of the parent view.
 @return An array of constraints that align the edges of the view with the edges of the parent view.
 */
- (NSArray*)lyt_alignToParent;

/**
 Adds constraints that align the edges of the view with the given inner margin from the edges of the parent view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the view with the given inner margin from the edges of the parent view.
 */
- (NSArray*)lyt_alignToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the edges of the view with the given inner margin from the edges of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the view with the given inner margin from the edges of the given view.
 */
- (NSArray*)lyt_alignToView:(LYTView*)view;

/**
 Adds constraints that align the edges of the view with the given inner margin from the edges of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the view with the given inner margin from the edges of the given view.
 */
- (NSArray*)lyt_alignToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that aligns the top edge of the view with the top edge of the parent view.
 @return A constraint that aligns the top edge of the view with the top edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningTopToParent;

/**
 Returns a constraint that aligns the top edge of the view with the given inner margin from the top edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the top edge of the view with the given inner margin from the top edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningTopToParentWithMargin:(CGFloat)margin;

/**
 Returns a constraint that aligns the top edge of the view with the top edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the top edge of the view with the top edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(LYTView*)view;

/**
 Returns a constraint that aligns the top edge of the view with the given inner margin from the top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the top edge of the view with the given inner margin from the top edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that aligns the right edge of the view with the right edge of the parent view.
 @return A constraint that aligns the right edge of the view with the right edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningRightToParent;

/**
 Returns a constraint that aligns the right edge of the view with the given inner margin from the right edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the right edge of the view with the given inner margin from the right edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningRightToParentWithMargin:(CGFloat)margin;

/**
 Returns a constraint that aligns the right edge of the view with the right edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the right edge of the view with the right edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(LYTView*)view;

/**
 Returns a constraint that aligns the right edge of the view with the given inner margin from right top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the right edge of the view with the given inner margin from the right edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that aligns the bottom edge of the view with the bottom edge of the parent view.
 @return A constraint that aligns the bottom edge of the view with the bottom edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParent;

/**
 Returns a constraint that aligns the bottom edge of the view with the given inner margin from the bottom edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the bottom edge of the view with the given inner margin from the bottom edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParentWithMargin:(CGFloat)margin;

/**
 Returns a constraint that aligns the bottom edge of the view with the bottom edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the bottom edge of the view with the bottom edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(LYTView*)view;

/**
 Returns a constraint that aligns the bottom edge of the view with the given inner margin from bottom top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the bottom edge of the view with the given inner margin from the bottom edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that aligns the left edge of the view with the left edge of the parent view.
 @return A constraint that aligns the left edge of the view with the left edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningLeftToParent;

/**
 Returns a constraint that aligns the left edge of the view with the given inner margin from the left edge of the parent view.
 @param margin The inner margin length.
 @return A constraint that aligns the left edge of the view with the given inner margin from the left edge of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningLeftToParentWithMargin:(CGFloat)margin;

/**
 Returns a constraint that aligns the left edge of the view with the left edge of the given view.
 @param view The reference view.
 @return A constraint that aligns the left edge of the view with the left edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(LYTView*)view;

/**
 Returns a constraint that aligns the left edge of the view with the given inner margin from left top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return A constraint that aligns the left edge of the view with the given inner margin from the left edge of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the edges of the view with the given inner margin from the edges of the parent view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the view with the given inner margin from the edges of the parent view.
 */
- (NSArray*)lyt_constraintsByAligningSidesToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the sides of the view with the given inner margin from the sides of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the view with the given inner margin from the sides of the given view.
 */
- (NSArray*)lyt_constraintsByAligningSidesToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the edges of the view with the edges of the parent view.
 @return An array of constraints that align the edges of the view with the edges of the parent view.
 */
- (NSArray*)lyt_constraintsByAligningToParent;

/**
 Returns constraints that align the edges of the view with the given inner margin from the edges of the parent view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the view with the given inner margin from the edges of the parent view.
 */
- (NSArray*)lyt_constraintsByAligningToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the edges of the view with the given inner margin from the edges of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the view with the given inner margin from the edges of the given view.
 */
- (NSArray*)lyt_constraintsByAligningToView:(LYTView*)view margin:(CGFloat)margin;

#pragma mark Centering

- (NSLayoutConstraint*)lyt_centerXInParent;

- (NSLayoutConstraint*)lyt_centerXInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_centerXWithView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_centerXWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_centerYInParent;

- (NSLayoutConstraint*)lyt_centerYInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_centerYWithView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_centerYWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_centerInParent;

- (NSArray*)lyt_centerInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_centerWithView:(LYTView*)view;

- (NSArray*)lyt_centerWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParent;

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParent;

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_constraintsByCenteringInParent;

- (NSArray*)lyt_constraintsByCenteringInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view;

- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view offset:(CGFloat)offset;

#pragma mark Placement

- (NSLayoutConstraint*)lyt_placeAboveView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_placeAboveView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeRightOfView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_placeRightOfView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeBelowView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_placeBelowView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeLeftOfView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_placeLeftOfView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(LYTView*)view margin:(CGFloat)margin;

#pragma mark Position and sizing

- (NSLayoutConstraint*)lyt_setX:(CGFloat)x;

- (NSLayoutConstraint*)lyt_setY:(CGFloat)y;

- (NSArray*)lyt_setOrigin:(CGPoint)origin;

- (NSLayoutConstraint*)lyt_setWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_setHeight:(CGFloat)height;

- (NSArray*)lyt_setSize:(CGSize)size;

- (NSArray*)lyt_setFrame:(CGRect)frame;

- (NSLayoutConstraint*)lyt_matchWidthToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_matchHeightToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_matchWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;;

- (NSLayoutConstraint*)lyt_matchHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

- (NSLayoutConstraint*)lyt_constraintBySettingX:(CGFloat)x;

- (NSLayoutConstraint*)lyt_constraintBySettingY:(CGFloat)y;

- (NSArray*)lyt_constraintsBySettingOrigin:(CGPoint)origin;

- (NSLayoutConstraint*)lyt_constraintBySettingWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_constraintBySettingHeight:(CGFloat)height;

- (NSArray*)lyt_constraintsBySettingSize:(CGSize)size;

- (NSArray*)lyt_constraintsBySettingFrame:(CGRect)frame;

- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;

- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

- (NSArray*)lyt_constraintsByMatchingSizeToView:(LYTView*)view;

@end

@interface NSArray (Lyt)

#pragma mark Distribution

- (NSArray*)lyt_distributeXWithSpacing:(CGFloat)spacing;

- (NSArray*)lyt_distributeYWithSpacing:(CGFloat)spacing;

- (NSArray*)lyt_distributeTopWithDistance:(CGFloat)distance;

- (NSArray*)lyt_distributeCenterYWithDistance:(CGFloat)distance;

- (NSArray*)lyt_distributeBottomWithDistance:(CGFloat)distance;

- (NSArray*)lyt_distributeLeftWithDistance:(CGFloat)distance;

- (NSArray*)lyt_distributeCenterXWithDistance:(CGFloat)distance;

- (NSArray*)lyt_distributeRightWithDistance:(CGFloat)distance;

- (NSArray*)lyt_constraintsByDistributingXWithSpacing:(CGFloat)spacing;

- (NSArray*)lyt_constraintsByDistributingYWithSpacing:(CGFloat)spacing;

- (NSArray*)lyt_constraintsByDistributingTopWithDistance:(CGFloat)distance;

- (NSArray*)lyt_constraintsByDistributingCenterYWithDistance:(CGFloat)distance;

- (NSArray*)lyt_constraintsByDistributingBottomWithDistance:(CGFloat)distance;

- (NSArray*)lyt_constraintsByDistributingLeftWithDistance:(CGFloat)distance;

- (NSArray*)lyt_constraintsByDistributingCenterXWithDistance:(CGFloat)distance;

- (NSArray*)lyt_constraintsByDistributingRightWithDistance:(CGFloat)distance;

#pragma mark Alignment

/**
 Adds constraints that align the top edges of the views in the array with the respective top edges of their parent views.
 @return An array of constraints that align the top edges of the views in the array with the respective top edges of their parent views.
 */
- (NSArray*)lyt_alignTopToParent;

/**
 Adds constraints that align the top edges of the views in the array with the given inner margin from the respective top edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the top edges of the views in the array with the given inner margin from the respective top edges of their parent views.
 */
- (NSArray*)lyt_alignTopToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the top edges of the views in the array with the top edge of the given view.
 @param view The reference view.
 @return An array of constraints that align the top edges of the views in the array with the top edge of the given view.
 */
- (NSArray*)lyt_alignTopToView:(LYTView*)view;

/**
 Adds constraints that align the top edges of the views in the array with the given inner margin from the top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the top edges of the views in the array with the given inner margin from the top edge of the given view.
 */
- (NSArray*)lyt_alignTopToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that align the right edges of the views in the array with the respective right edges of their parent views.
 @return An array of constraints that align the right edges of the views in the array with the respective right edges of their parent views.
 */
- (NSArray*)lyt_alignRightToParent;

/**
 Adds constraints that align the right edges of the views in the array with the given inner margin from the respective right edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the right edges of the views in the array with the given inner margin from the respective right edges of their parent views.
 */
- (NSArray*)lyt_alignRightToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the right edges of the views in the array with the right edge of the given view.
 @param view The reference view.
 @return An array of constraints that align the right edges of the views in the array with the right edge of the given view.
 */
- (NSArray*)lyt_alignRightToView:(LYTView*)view;

/**
 Adds constraints that align the right edges of the views in the array with the given inner margin from the right edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the right edges of the views in the array with the given inner margin from the right edge of the given view.
 */
- (NSArray*)lyt_alignRightToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that align the bottom edges of the views in the array with the respective bottom edges of their parent views.
 @return An array of constraints that align the bottom edges of the views in the array with the respective bottom edges of their parent views.
 */
- (NSArray*)lyt_alignBottomToParent;

/**
 Adds constraints that align the bottom edges of the views in the array with the given inner margin from the respective bottom edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the bottom edges of the views in the array with the given inner margin from the respective bottom edges of their parent views.
 */
- (NSArray*)lyt_alignBottomToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the bottom edges of the views in the array with the bottom edge of the given view.
 @param view The reference view.
 @return An array of constraints that align the bottom edges of the views in the array with the bottom edge of the given view.
 */
- (NSArray*)lyt_alignBottomToView:(LYTView*)view;

/**
 Adds constraints that align the bottom edges of the views in the array with the given inner margin from the bottom edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the bottom edges of the views in the array with the given inner margin from the bottom edge of the given view.
 */
- (NSArray*)lyt_alignBottomToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that align the left edges of the views in the array with the respective left edges of their parent views.
 @return An array of constraints that align the left edges of the views in the array with the respective left edges of their parent views.
 */
- (NSArray*)lyt_alignLeftToParent;

/**
 Adds constraints that align the left edges of the views in the array with the given inner margin from the respective left edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the left edges of the views in the array with the given inner margin from the respective left edges of their parent views.
 */
- (NSArray*)lyt_alignLeftToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_alignLeftToView:(LYTView*)view;

/**
 Adds constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_alignLeftToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that align the sides of the views in the array with the respective sides of their parent views.
 @return An array of constraints that align the sides of the views in the array with the respective sides of their parent views.
 */
- (NSArray*)lyt_alignSidesToParent;

/**
 Adds constraints that align the sides of the views in the array with the given inner margin from the respective sides of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the views in the array with the given inner margin from the respective sides of their parent views.
 */
- (NSArray*)lyt_alignSidesToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the sides of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_alignSidesToView:(LYTView*)view;

/**
 Adds constraints that align the sides of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_alignSidesToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that align the edges of the views in the array with the respective edges of their parent views.
 @return An array of constraints that align the edges of the views in the array with the respective edges of their parent views.
 */
- (NSArray*)lyt_alignToParent;

/**
 Adds constraints that align the edges of the views in the array with the given inner margin from the respective edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the views in the array with the given inner margin from the respective edges of their parent views.
 */
- (NSArray*)lyt_alignToParentWithMargin:(CGFloat)margin;

/**
 Adds constraints that align the edges of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_alignToView:(LYTView*)view;

/**
 Adds constraints that align the edges of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_alignToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the top edges of the views in the array with the respective top edges of their parent views.
 @return An array of constraints that align the top edges of the views in the array with the respective top edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningTopToParent;

/**
 Returns constraints that align the top edges of the views in the array with the given inner margin from the respective top edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the top edges of the views in the array with the given inner margin from the respective top edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningTopToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the top edges of the views in the array with the top edge of the given view.
 @param view The reference view.
 @return An array of constraints that align the top edges of the views in the array with the top edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningTopToView:(LYTView*)view;

/**
 Returns constraints that align the top edges of the views in the array with the given inner margin from the top edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the top edges of the views in the array with the given inner margin from the top edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningTopToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the right edges of the views in the array with the respective right edges of their parent views.
 @return An array of constraints that align the right edges of the views in the array with the respective right edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningRightToParent;

/**
 Returns constraints that align the right edges of the views in the array with the given inner margin from the respective right edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the right edges of the views in the array with the given inner margin from the respective right edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningRightToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the right edges of the views in the array with the right edge of the given view.
 @param view The reference view.
 @return An array of constraints that align the right edges of the views in the array with the right edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningRightToView:(LYTView*)view;

/**
 Returns constraints that align the right edges of the views in the array with the given inner margin from the right edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the right edges of the views in the array with the given inner margin from the right edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningRightToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the bottom edges of the views in the array with the respective bottom edges of their parent views.
 @return An array of constraints that align the bottom edges of the views in the array with the respective bottom edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningBottomToParent;

/**
 Returns constraints that align the bottom edges of the views in the array with the given inner margin from the respective bottom edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the bottom edges of the views in the array with the given inner margin from the respective bottom edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningBottomToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the bottom edges of the views in the array with the bottom edge of the given view.
 @param view The reference view.
 @return An array of constraints that align the bottom edges of the views in the array with the bottom edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningBottomToView:(LYTView*)view;

/**
 Returns constraints that align the bottom edges of the views in the array with the given inner margin from the bottom edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the bottom edges of the views in the array with the given inner margin from the bottom edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningBottomToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the left edges of the views in the array with the respective left edges of their parent views.
 @return An array of constraints that align the left edges of the views in the array with the respective left edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningLeftToParent;

/**
 Returns constraints that align the left edges of the views in the array with the given inner margin from the respective left edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the left edges of the views in the array with the given inner margin from the respective left edges of their parent views.
 */
- (NSArray*)lyt_constraintByAligningLeftToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningLeftToView:(LYTView*)view;

/**
 Returns constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the left edges of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_constraintByAligningLeftToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the sides of the views in the array with the given inner margin from the respective sides of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the views in the array with the given inner margin from the respective sides of their parent views.
 */
- (NSArray*)lyt_constraintsByAligningSidesToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the sides of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the sides of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_constraintsByAligningSidesToView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that align the edges of the views in the array with the respective edges of their parent views.
 @return An array of constraints that align the edges of the views in the array with the respective edges of their parent views.
 */
- (NSArray*)lyt_constraintsByAligningToParent;

/**
 Returns constraints that align the edges of the views in the array with the given inner margin from the respective edges of their parent views.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the views in the array with the given inner margin from the respective edges of their parent views.
 */
- (NSArray*)lyt_constraintsByAligningToParentWithMargin:(CGFloat)margin;

/**
 Returns constraints that align the edges of the views in the array with the given inner margin from the left edge of the given view.
 @param view The reference view.
 @param margin The inner margin length.
 @return An array of constraints that align the edges of the views in the array with the given inner margin from the left edge of the given view.
 */
- (NSArray*)lyt_constraintsByAligningToView:(LYTView*)view margin:(CGFloat)margin;

#pragma mark Centering

- (NSArray*)lyt_centerXInParent;

- (NSArray*)lyt_centerXInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_centerXWithView:(LYTView*)view;

- (NSArray*)lyt_centerXWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_centerYInParent;

- (NSArray*)lyt_centerYInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_centerYWithView:(LYTView*)view;

- (NSArray*)lyt_centerYWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_centerInParent;

- (NSArray*)lyt_centerInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_centerWithView:(LYTView*)view;

- (NSArray*)lyt_centerWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_constraintByCenteringXInParent;

- (NSArray*)lyt_constraintByCenteringXInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_constraintByCenteringXWithView:(LYTView*)view;

- (NSArray*)lyt_constraintByCenteringXWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_constraintByCenteringYInParent;

- (NSArray*)lyt_constraintByCenteringYInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_constraintByCenteringYWithView:(LYTView*)view;

- (NSArray*)lyt_constraintByCenteringYWithView:(LYTView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_constraintsByCenteringInParent;

- (NSArray*)lyt_constraintsByCenteringInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view;

- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view offset:(CGFloat)offset;

#pragma mark Placement

- (NSArray*)lyt_placeAboveView:(LYTView*)view;

- (NSArray*)lyt_placeAboveView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_placeRightOfView:(LYTView*)view;

- (NSArray*)lyt_placeRightOfView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_placeBelowView:(LYTView*)view;

- (NSArray*)lyt_placeBelowView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_placeLeftOfView:(LYTView*)view;

- (NSArray*)lyt_placeLeftOfView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintByPlacingAboveView:(LYTView*)view;

- (NSArray*)lyt_constraintByPlacingAboveView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintByPlacingRightOfView:(LYTView*)view;

- (NSArray*)lyt_constraintByPlacingRightOfView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintByPlacingBelowView:(LYTView*)view;

- (NSArray*)lyt_constraintByPlacingBelowView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintByPlacingLeftOfView:(LYTView*)view;

- (NSArray*)lyt_constraintByPlacingLeftOfView:(LYTView*)view margin:(CGFloat)margin;

#pragma mark Position and Sizing

- (NSArray*)lyt_setX:(CGFloat)x;

- (NSArray*)lyt_setY:(CGFloat)y;

- (NSArray*)lyt_setOrigin:(CGPoint)origin;

- (NSArray*)lyt_setWidth:(CGFloat)width;

- (NSArray*)lyt_setHeight:(CGFloat)height;

- (NSArray*)lyt_setSize:(CGSize)size;

- (NSArray*)lyt_setFrame:(CGRect)frame;

- (NSArray*)lyt_matchWidthToView:(LYTView*)view;

- (NSArray*)lyt_matchHeightToView:(LYTView*)view;

- (NSArray*)lyt_matchWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;;

- (NSArray*)lyt_matchHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

- (NSArray*)lyt_constraintBySettingX:(CGFloat)x;

- (NSArray*)lyt_constraintBySettingY:(CGFloat)y;

- (NSArray*)lyt_constraintsBySettingOrigin:(CGPoint)origin;

- (NSArray*)lyt_constraintBySettingWidth:(CGFloat)width;

- (NSArray*)lyt_constraintBySettingHeight:(CGFloat)height;

- (NSArray*)lyt_constraintsBySettingSize:(CGSize)size;

- (NSArray*)lyt_constraintsBySettingFrame:(CGRect)frame;

- (NSArray*)lyt_constraintByMatchingWidthToView:(LYTView*)view;

- (NSArray*)lyt_constraintByMatchingHeightToView:(LYTView*)view;

- (NSArray*)lyt_constraintByMatchingWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;

- (NSArray*)lyt_constraintByMatchingHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

- (NSArray*)lyt_constraintsByMatchingSizeToView:(LYTView*)view;

@end
