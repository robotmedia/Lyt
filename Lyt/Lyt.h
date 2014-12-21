//
//  Lyt.h
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

#import <TargetConditionals.h> // See: http://stackoverflow.com/questions/3742525/target-os-iphone-and-applicationtests
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

/**
 Adds a constraint that horizontally centers the view in the parent view.
 @return A constraint that horizontally centers the view in the parent view.
 */
- (NSLayoutConstraint*)lyt_centerXInParent;

/**
 Adds a constraint that horizontally aligns the center of the view with the given offset from the center of the parent view.
 @param offset The offset length.
 @return A constraint that horizontally aligns the center of the view with the given offset from the center of the parent view.
 */
- (NSLayoutConstraint*)lyt_centerXInParentWithOffset:(CGFloat)offset;

/**
 Adds a constraint that horizontally centers the view with the given view.
 @param view The reference view.
 @return A constraint that horizontally centers the view with the given view.
 */
- (NSLayoutConstraint*)lyt_centerXWithView:(LYTView*)view;

/**
 Adds a constraint that horizontally aligns the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return A constraint that horizontally aligns the center of the view with the given offset from the center of the given view.
 */
- (NSLayoutConstraint*)lyt_centerXWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Adds a constraint that vertically centers the view in the parent view.
 @return A constraint that vertically centers the view in the parent view.
 */
- (NSLayoutConstraint*)lyt_centerYInParent;

/**
 Adds a constraint that vertically aligns the center of the view with the given offset from the center of the parent view.
 @param offset The offset length.
 @return A constraint that vertically aligns the center of the view with the given offset from the center of the parent view.
 */
- (NSLayoutConstraint*)lyt_centerYInParentWithOffset:(CGFloat)offset;

/**
 Adds a constraint that vertically centers the view with the given view.
 @param view The reference view.
 @return A constraint that vertically centers the view with the given view.
 */
- (NSLayoutConstraint*)lyt_centerYWithView:(LYTView*)view;

/**
 Adds a constraint that vertically aligns the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return A constraint that vertically aligns the center of the view with the given offset from the center of the given view.
 */
- (NSLayoutConstraint*)lyt_centerYWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Adds constraints that center the view in the parent view.
 @return An array of constraints that center the view in the parent view.
 */
- (NSArray*)lyt_centerInParent;

/**
 Adds constraints that align the center of the view with the given offset from the center of the parent view.
 @param offset The offset length to be applied in both the X and Y axis.
 @return An array of constraints that align the center of the view with the given offset from the center of the parent view.
 */
- (NSArray*)lyt_centerInParentWithOffset:(CGFloat)offset;

/**
 Adds constraints that center the view with the given view.
 @param view The reference view.
 @return An array of constraints that center the view with the given view.
 */
- (NSArray*)lyt_centerWithView:(LYTView*)view;

/**
 Adds constraints that align the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length to be applied in both the X and Y axis.
 @return An array of constraints that align the center of the view with the given offset from the center of the given view.
 */
- (NSArray*)lyt_centerWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Returns a constraint that horizontally centers the view in the parent view.
 @return A constraint that horizontally centers the view in the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringXInParent;

/**
 Returns a constraint that horizontally aligns the center of the view with the given offset from the center of the parent view.
 @param offset The offset length.
 @return A constraint that horizontally aligns the center of the view with the given offset from the center of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringXInParentWithOffset:(CGFloat)offset;

/**
 Returns a constraint that horizontally centers the view with the given view.
 @param view The reference view.
 @return A constraint that horizontally centers the view with the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(LYTView*)view;

/**
 Returns a constraint that horizontally aligns the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return A constraint that horizontally aligns the center of the view with the given offset from the center of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Returns a constraint that vertically centers the view in the parent view.
 @return A constraint that vertically centers the view in the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringYInParent;

/**
 Returns a constraint that vertically aligns the center of the view with the given offset from the center of the parent view.
 @param offset The offset length.
 @return A constraint that vertically aligns the center of the view with the given offset from the center of the parent view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringYInParentWithOffset:(CGFloat)offset;

/**
 Returns a constraint that vertically centers the view with the given view.
 @param view The reference view.
 @return A constraint that vertically centers the view with the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(LYTView*)view;

/**
 Returns a constraint that vertically aligns the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return A constraint that vertically aligns the center of the view with the given offset from the center of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Returns constraints that center the view in the parent view.
 @return An array of constraints that center the view in the parent view.
 */
- (NSArray*)lyt_constraintsByCenteringInParent;

/**
 Returns constraints that align the center of the view with the given offset from the center of the parent view.
 @param offset The offset length to be applied in both the X and Y axis.
 @return An array of constraints that align the center of the view with the given offset from the center of the parent view.
 */
- (NSArray*)lyt_constraintsByCenteringInParentWithOffset:(CGFloat)offset;

/**
 Returns constraints that center the view with the given view.
 @param view The reference view.
 @return An array of constraints that center the view with the given view.
 */
- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view;

/**
 Returns constraints that align the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length to be applied in both the X and Y axis.
 @return An array of constraints that align the center of the view with the given offset from the center of the given view.
 */
- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view offset:(CGFloat)offset;

#pragma mark Placement

/**
 Adds a constraint that places the view above the given view.
 @param view The reference view.
 @return A constraint that places the view above the given view.
 */
- (NSLayoutConstraint*)lyt_placeAboveView:(LYTView*)view;

/**
 Adds a constraint that places the view above the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view above the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_placeAboveView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds a constraint that places the view right of the given view.
 @param view The reference view.
 @return A constraint that places the view right of the given view.
 */
- (NSLayoutConstraint*)lyt_placeRightOfView:(LYTView*)view;

/**
 Adds a constraint that places the view right of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view right of the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_placeRightOfView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds a constraint that places the view below the given view.
 @param view The reference view.
 @return A constraint that places the view below the given view.
 */
- (NSLayoutConstraint*)lyt_placeBelowView:(LYTView*)view;

/**
 Adds a constraint that places the view below the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view below the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_placeBelowView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds a constraint that places the view left of the given view.
 @param view The reference view.
 @return A constraint that places the view left of the given view.
 */
- (NSLayoutConstraint*)lyt_placeLeftOfView:(LYTView*)view;

/**
 Adds a constraint that places the view left of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view left of the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_placeLeftOfView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that places the view above the given view.
 @param view The reference view.
 @return A constraint that places the view above the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(LYTView*)view;

/**
 Returns a constraint that places the view above the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view above the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that places the view right of the given view.
 @param view The reference view.
 @return A constraint that places the view right of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(LYTView*)view;

/**
 Returns a constraint that places the view right of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view right of the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that places the view below the given view.
 @param view The reference view.
 @return A constraint that places the view below the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(LYTView*)view;

/**
 Returns a constraint that places the view below the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view below the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns a constraint that places the view left of the given view.
 @param view The reference view.
 @return A constraint that places the view left of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(LYTView*)view;

/**
 Returns a constraint that places the view left of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return A constraint that places the view left of the given view with the given distance.
 */
- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(LYTView*)view margin:(CGFloat)margin;

#pragma mark Position and sizing

/**
 Adds a constraint that sets the x origin of the view with the given value.
 @param x The x origin.
 @return A constraint that sets the x origin of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setX:(CGFloat)x;

/**
 Adds a constraint that sets the y origin of the view with the given value.
 @param y The y origin.
 @return A constraint that sets the y origin of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setY:(CGFloat)y;

/**
 Adds constraints that set the origin of the view with the given value.
 @param origin The origin.
 @return An array of constraints that set the origin of the view with the given value.
 */
- (NSArray*)lyt_setOrigin:(CGPoint)origin;

/**
 Adds a constraint that sets the width of the view with the given value.
 @param width The width.
 @return A constraint that sets the width of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setWidth:(CGFloat)width;

/**
 Adds a constraint that sets the maximum width of the view with the given value.
 @param width The maximum width.
 @return A constraint that sets the maximum width of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setMaxWidth:(CGFloat)width;

/**
 Adds a constraint that sets the minimum width of the view with the given value.
 @param width The minimum width.
 @return A constraint that sets the minimum width of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setMinWidth:(CGFloat)width;

/**
 Adds a constraint that sets the height of the view with the given value.
 @param height The height.
 @return A constraint that sets the height of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setHeight:(CGFloat)height;

/**
 Adds a constraint that sets the maximum height of the view with the given value.
 @param height The maximum height.
 @return A constraint that sets the maximum height of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setMaxHeight:(CGFloat)height;

/**
 Adds a constraint that sets the minimum height of the view with the given value.
 @param height The minimum height.
 @return A constraint that sets the minimum height of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_setMinHeight:(CGFloat)height;

/**
 Adds constraints that set the size of the view with the given value.
 @param size The size.
 @return An array of constraints that set the size of the view with the given value.
 */
- (NSArray*)lyt_setSize:(CGSize)size;

/**
 Adds constraints that set the maximum size of the view with the given value.
 @param size The maximum size.
 @return An array of constraints that set the maximum size of the view with the given value.
 */
- (NSArray*)lyt_setMaxSize:(CGSize)size;

/**
 Adds constraints that set the minimum size of the view with the given value.
 @param size The minimum size.
 @return An array of constraints that set the minimum size of the view with the given value.
 */
- (NSArray*)lyt_setMinSize:(CGSize)size;

/**
 Adds constraints that set the frame of the view with the given value.
 @param frame The frame.
 @return An array of constraints that sets the frame of the view with the given value.
 */
- (NSArray*)lyt_setFrame:(CGRect)frame;

/**
 Adds a constraint that matches the width of the view to the width of the given view.
 @param view The reference view.
 @return A constraint that matches the width of the view to the width of the given view.
 */
- (NSLayoutConstraint*)lyt_matchWidthToView:(LYTView*)view;

/**
 Adds a constraint that matches the height of the view to the height of the given view.
 @param view The reference view.
 @return A constraint that matches the height of the view to the height of the given view.
 */
- (NSLayoutConstraint*)lyt_matchHeightToView:(LYTView*)view;

/**
 Adds a constraint that matches the width of the view to a multiple of the width of the given view.
 @param view The reference view.
 @param mutiplier The width multiplier.
 @return A constraint that matches the width of the view to a multiple of the width of the given view.
 */
- (NSLayoutConstraint*)lyt_matchWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;;

/**
 Adds a constraint that matches the height of the view to a multiple of the height of the given view.
 @param view The reference view.
 @param mutiplier The height multiplier.
 @return A constraint that matches the height of the view to a multiple of the height of the given view.
 */
- (NSLayoutConstraint*)lyt_matchHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

/**
 Returns a constraint that sets the x origin of the view with the given value.
 @param x The x origin.
 @return A constraint that sets the x origin of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingX:(CGFloat)x;

/**
 Returns a constraint that sets the y origin of the view with the given value.
 @param y The y origin.
 @return A constraint that sets the y origin of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingY:(CGFloat)y;

/**
 Returns constraints that set the origin of the view with the given value.
 @param origin The origin.
 @return An array of constraints that set the origin of the view with the given value.
 */
- (NSArray*)lyt_constraintsBySettingOrigin:(CGPoint)origin;

/**
 Returns a constraint that sets the width of the view with the given value.
 @param width The width.
 @return A constraint that sets the width of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingWidth:(CGFloat)width;

/**
 Returns a constraint that sets the maximum width of the view with the given value.
 @param width The maximum width.
 @return A constraint that sets the maximum width of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingMaxWidth:(CGFloat)width;

/**
 Returns a constraint that sets the minimum width of the view with the given value.
 @param width The minimum width.
 @return A constraint that sets the minimum width of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingMinWidth:(CGFloat)width;

/**
 Returns a constraint that sets the height of the view with the given value.
 @param height The height.
 @return A constraint that sets the height of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingHeight:(CGFloat)height;

/**
 Returns a constraint that sets the maximum height of the view with the given value.
 @param height The maximum height.
 @return A constraint that sets the maximum height of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingMaxHeight:(CGFloat)height;

/**
 Returns a constraint that sets the minimum height of the view with the given value.
 @param height The minimum height.
 @return A constraint that sets the minimum height of the view with the given value.
 */
- (NSLayoutConstraint*)lyt_constraintBySettingMinHeight:(CGFloat)height;

/**
 Returns constraints that set the size of the view with the given value.
 @param size The size.
 @return A array of constraints that set the size of the view with the given value.
 */
- (NSArray*)lyt_constraintsBySettingSize:(CGSize)size;

/**
 Returns constraints that set the maximum size of the view with the given value.
 @param size The maximum size.
 @return A array of constraints that set the maximum size of the view with the given value.
 */
- (NSArray*)lyt_constraintsBySettingMaxSize:(CGSize)size;

/**
 Returns constraints that set the minimum size of the view with the given value.
 @param size The minimum size.
 @return A array of constraints that set the minimum size of the view with the given value.
 */
- (NSArray*)lyt_constraintsBySettingMinSize:(CGSize)size;

/**
 Returns constraints that set the frame of the view with the given value.
 @param frame The frame.
 @return An array of constraints that set the frame of the view with the given value.
 */
- (NSArray*)lyt_constraintsBySettingFrame:(CGRect)frame;

/**
 Returns a constraint that matches the width of the view to the width of the given view.
 @param view The reference view.
 @return A constraint that matches the width of the view to the width of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(LYTView*)view;

/**
 Returns a constraint that matches the height of the view to the height of the given view.
 @param view The reference view.
 @return A constraint that matches the height of the view to the height of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(LYTView*)view;

/**
 Returns a constraint that matches the width of the view to a multiple of the width of the given view.
 @param view The reference view.
 @param mutiplier The width multiplier.
 @return A constraint that matches the width of the view to a multiple of the width of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;

/**
 Returns a constraint that matches the height of the view to a multiple of the height of the given view.
 @param view The reference view.
 @param mutiplier The height multiplier.
 @return A constraint that matches the height of the view to a multiple of the height of the given view.
 */
- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

/**
 Returns constraints that match the size of the view to the size of the given view.
 @param view The reference view.
 @return An array of constraints that match the size of the view to the size of the given view.
 */
- (NSArray*)lyt_constraintsByMatchingSizeToView:(LYTView*)view;

@end

@interface NSArray (Lyt)

#pragma mark Distribution

/**
 Adds constraints to horizontally distribute the views in the array so that the spacing between them equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param spacing The spacing length.
 @returns An array of constraints that horizontally distribute the views in the array so that the spacing between them equals the given value.
 */
- (NSArray*)lyt_distributeXWithSpacing:(CGFloat)spacing;

/**
 Adds constraints to vertically distribute the views in the array so that the spacing between them equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param spacing The spacing length.
 @returns An array of constraints that vertically distribute the views in the array so that the spacing between them equals the given value.
 */
- (NSArray*)lyt_distributeYWithSpacing:(CGFloat)spacing;

/**
 Adds constraints to vertically distribute the views in the array so that the distance between their top edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param distance The distance length.
 @returns An array of constraints that vertically distribute the views in the array so that the distance between their top edges equals the given value.
 */
- (NSArray*)lyt_distributeTopWithDistance:(CGFloat)distance;

/**
 Adds constraints to vertically distribute the views in the array so that the vertical distance between their centers equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param distance The distance length.
 @returns An array of constraints that vertically distribute the views in the array so that the vertical distance between their centers equals the given value.
 */
- (NSArray*)lyt_distributeCenterYWithDistance:(CGFloat)distance;

/**
 Adds constraints to vertically distribute the views in the array so that the distance between their bottom edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param distance The distance length.
 @returns An array of constraints that vertically distribute the views in the array so that the distance between their bottom edges equals the given value.
 */
- (NSArray*)lyt_distributeBottomWithDistance:(CGFloat)distance;

/**
 Adds constraints to horizontally distribute the views in the array so that the distance between their left edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param distance The distance length.
 @returns An array of constraints that horizontally distribute the views in the array so that the distance between their left edges equals the given value.
 */
- (NSArray*)lyt_distributeLeftWithDistance:(CGFloat)distance;

/**
 Adds constraints to horizontally distribute the views in the array so that the horizontal distance between their centers equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param distance The distance length.
 @returns An array of constraints that horizontally distribute the views in the array so that the horizontal distance between their centers equals the given value.
 */
- (NSArray*)lyt_distributeCenterXWithDistance:(CGFloat)distance;

/**
 Adds constraints to horizontally distribute the views in the array so that the distance between their right edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param distance The distance length.
 @returns An array of constraints that horizontally distribute the views in the array so that the distance between their right edges equals the given value.
 */
- (NSArray*)lyt_distributeRightWithDistance:(CGFloat)distance;

/**
 Returns constraints to horizontally distribute the views in the array so that the spacing between them equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param spacing The spacing length.
 @returns An array of constraints that horizontally distribute the views in the array so that the spacing between them equals the given value.
 */
- (NSArray*)lyt_constraintsByDistributingXWithSpacing:(CGFloat)spacing;

/**
 Returns constraints to vertically distribute the views in the array so that the spacing between them equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param spacing The spacing length.
 @returns An array of constraints that vertically distribute the views in the array so that the spacing between them equals the given value.
 */
- (NSArray*)lyt_constraintsByDistributingYWithSpacing:(CGFloat)spacing;

/**
 Returns constraints to vertically distribute the views in the array so that the distance between their top edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param distance The distance length.
 @returns An array of constraints that vertically distribute the views in the array so that the distance between their top edges equals the given value.
 */
- (NSArray*)lyt_constraintsByDistributingTopWithDistance:(CGFloat)distance;

/**
 Returns constraints to vertically distribute the views in the array so that the vertical distance between their centers equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param distance The distance length.
 @returns An array of constraints that vertically distribute the views in the array so that the vertical distance between their centers equals the given value.
 */
- (NSArray*)lyt_constraintsByDistributingCenterYWithDistance:(CGFloat)distance;

/**
 Returns constraints to vertically distribute the views in the array so that the distance between their bottom edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its Y origin.
 @param distance The distance length.
 @returns An array of constraints that vertically distribute the views in the array so that the distance between their bottom edges equals the given value.
 */
- (NSArray*)lyt_constraintsByDistributingBottomWithDistance:(CGFloat)distance;

/**
 Returns constraints to horizontally distribute the views in the array so that the distance between their left edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param distance The distance length.
 @returns An array of constraints that horizontally distribute the views in the array so that the distance between their left edges equals the given value.
 */
- (NSArray*)lyt_constraintsByDistributingLeftWithDistance:(CGFloat)distance;

/**
 Returns constraints to horizontally distribute the views in the array so that the horizontal distance between their centers equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param distance The distance length.
 @returns An array of constraints that horizontally distribute the views in the array so that the horizontal distance between their centers equals the given value.
 */
- (NSArray*)lyt_constraintsByDistributingCenterXWithDistance:(CGFloat)distance;

/**
 Returns constraints to horizontally distribute the views in the array so that the distance between their right edges equals the given value.
 @discussion In order for the layout to be unambiguous one of the views (typically the first) must have other constraints that define its X origin.
 @param distance The distance length.
 @returns An array of constraints that horizontally distribute the views in the array so that the distance between their right edges equals the given value.
 */
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

/**
 Adds constraints that horizontally center the views in the array in their respective parent views.
 @return An array of constraints that horizontally center the views in the array in their respective parent views.
 */
- (NSArray*)lyt_centerXInParent;

/**
 Adds constraints that horizontally align the center of the views in the array with the given offset from the center of their respective parent views.
 @param offset The offset length.
 @return An array of constraints that horizontally align the center of the views in the array with the given offset from the center of their respective parent views.
 */
- (NSArray*)lyt_centerXInParentWithOffset:(CGFloat)offset;

/**
 Adds constraints that horizontally center the views in the array with the given view.
 @param view The reference view.
 @return An array of constraints that horizontally center the views in the array with the given view.
 */
- (NSArray*)lyt_centerXWithView:(LYTView*)view;

/**
 Adds constraints that horizontally align the center of the views in the array with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return An array of constraints that horizontally align the center of the views in the array with the given offset from the center of the given view.
 */
- (NSArray*)lyt_centerXWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Adds constraints that vertically center the views in the array in their respective parent views.
 @return An array of constraints that vertically center the views in the array in their respective parent views.
 */
- (NSArray*)lyt_centerYInParent;

/**
 Adds constraints that vertically align the center of the views in the array with the given offset from the center of their respective parent views.
 @param offset The offset length.
 @return An array of constraints that vertically align the center of the views in the array with the given offset from the center of their respective parent views.
 */
- (NSArray*)lyt_centerYInParentWithOffset:(CGFloat)offset;

/**
 Adds constraints that vertically center the views in the array with the given view.
 @param view The reference view.
 @return An array of constraints that vertically center the views in the array with the given view.
 */
- (NSArray*)lyt_centerYWithView:(LYTView*)view;

/**
 Adds constraints that vertically align the center of the views in the array with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return An array of constraints that vertically align the center of the views in the array with the given offset from the center of the given view.
 */
- (NSArray*)lyt_centerYWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Adds constraints that center the views in the array in their respective parent views.
 @return An array of constraints that center the views in the array in their respective parent views.
 */
- (NSArray*)lyt_centerInParent;

/**
 Adds constraints that align the center of the views in the array with the given offset from the center of their respective parent views.
 @param offset The offset length to be applied in both the X and Y axis.
 @return An array of constraints that align the center of the views in the array with the given offset from the center of their respective parent views.
 */
- (NSArray*)lyt_centerInParentWithOffset:(CGFloat)offset;

/**
 Adds constraints that center the views in the array with the given view.
 @param view The reference view.
 @return An array of constraints that center the views in the array with the given view.
 */
- (NSArray*)lyt_centerWithView:(LYTView*)view;

/**
 Adds constraints that align the center of the views in the array with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return An array of constraints that align the center of the views in the array with the given offset from the center of the given view.
 */
- (NSArray*)lyt_centerWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Returns a constraint that horizontally centers the view in the parent view.
 @return A constraint that horizontally centers the view in the parent view.
 */
- (NSArray*)lyt_constraintByCenteringXInParent;

/**
 Returns a constraint that horizontally aligns the center of the view with the given offset from the center of the parent view.
 @param offset The offset length.
 @return A constraint that horizontally aligns the center of the view with the given offset from the center of the parent view.
 */
- (NSArray*)lyt_constraintByCenteringXInParentWithOffset:(CGFloat)offset;

/**
 Returns a constraint that horizontally centers the view with the given view.
 @param view The reference view.
 @return A constraint that horizontally centers the view with the given view.
 */
- (NSArray*)lyt_constraintByCenteringXWithView:(LYTView*)view;

/**
 Returns a constraint that horizontally aligns the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return A constraint that horizontally aligns the center of the view with the given offset from the center of the given view.
 */
- (NSArray*)lyt_constraintByCenteringXWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Returns a constraint that vertically centers the view in the parent view.
 @return A constraint that vertically centers the view in the parent view.
 */
- (NSArray*)lyt_constraintByCenteringYInParent;

/**
 Returns a constraint that vertically aligns the center of the view with the given offset from the center of the parent view.
 @param offset The offset length.
 @return A constraint that vertically aligns the center of the view with the given offset from the center of the parent view.
 */
- (NSArray*)lyt_constraintByCenteringYInParentWithOffset:(CGFloat)offset;

/**
 Returns a constraint that vertically centers the view with the given view.
 @param view The reference view.
 @return A constraint that vertically centers the view with the given view.
 */
- (NSArray*)lyt_constraintByCenteringYWithView:(LYTView*)view;

/**
 Returns a constraint that vertically aligns the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length.
 @return A constraint that vertically aligns the center of the view with the given offset from the center of the given view.
 */
- (NSArray*)lyt_constraintByCenteringYWithView:(LYTView*)view offset:(CGFloat)offset;

/**
 Returns constraints that center the view in the parent view.
 @return An array of constraints that center the view in the parent view.
 */
- (NSArray*)lyt_constraintsByCenteringInParent;

/**
 Returns constraints that align the center of the view with the given offset from the center of the parent view.
 @param offset The offset length to be applied in both the X and Y axis.
 @return An array of constraints that align the center of the view with the given offset from the center of the parent view.
 */
- (NSArray*)lyt_constraintsByCenteringInParentWithOffset:(CGFloat)offset;

/**
 Returns constraints that center the view with the given view.
 @param view The reference view.
 @return An array of constraints that center the view with the given view.
 */
- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view;

/**
 Returns constraints that align the center of the view with the given offset from the center of the given view.
 @param view The reference view.
 @param offset The offset length to be applied in both the X and Y axis.
 @return An array of constraints that align the center of the view with the given offset from the center of the given view.
 */
- (NSArray*)lyt_constraintsByCenteringWithView:(LYTView*)view offset:(CGFloat)offset;

#pragma mark Placement

/**
 Adds constraints that place the views of the array above the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array above the given view.
 */
- (NSArray*)lyt_placeAboveView:(LYTView*)view;

/**
 Adds constraints that place the views of the array above the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraints that place the views of the array above the given view with the given distance.
 */
- (NSArray*)lyt_placeAboveView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that place the views of the array right of the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array right of the given view.
 */
- (NSArray*)lyt_placeRightOfView:(LYTView*)view;

/**
 Adds constraints that place the views of the array right of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraintsthat  place the views of the array right of the given view with the given distance.
 */
- (NSArray*)lyt_placeRightOfView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that place the views of the array below the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array below the given view.
 */
- (NSArray*)lyt_placeBelowView:(LYTView*)view;

/**
 Adds constraints that place the views of the array below the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraints that place the views of the array below the given view with the given distance.
 */
- (NSArray*)lyt_placeBelowView:(LYTView*)view margin:(CGFloat)margin;

/**
 Adds constraints that place the views of the array left of the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array right of the given view.
 */
- (NSArray*)lyt_placeLeftOfView:(LYTView*)view;

/**
 Adds constraints that place the views of the array left of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraintsthat  place the views of the array left of the given view with the given distance.
 */
- (NSArray*)lyt_placeLeftOfView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that place the views of the array above the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array above the given view.
 */
- (NSArray*)lyt_constraintByPlacingAboveView:(LYTView*)view;

/**
 Returns constraints that place the views of the array above the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraints that place the views of the array above the given view with the given distance.
 */
- (NSArray*)lyt_constraintByPlacingAboveView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that place the views of the array right of the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array right of the given view.
 */
- (NSArray*)lyt_constraintByPlacingRightOfView:(LYTView*)view;

/**
 Returns constraints that place the views of the array right of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraintsthat  place the views of the array right of the given view with the given distance.
 */
- (NSArray*)lyt_constraintByPlacingRightOfView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that place the views of the array below the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array below the given view.
 */
- (NSArray*)lyt_constraintByPlacingBelowView:(LYTView*)view;

/**
 Returns constraints that place the views of the array below the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraints that place the views of the array below the given view with the given distance.
 */
- (NSArray*)lyt_constraintByPlacingBelowView:(LYTView*)view margin:(CGFloat)margin;

/**
 Returns constraints that place the views of the array left of the given view.
 @param view The reference view.
 @return An array of constraints that place the views of the array right of the given view.
 */
- (NSArray*)lyt_constraintByPlacingLeftOfView:(LYTView*)view;

/**
 Returns constraints that place the views of the array left of the given view with the given distance.
 @param view The reference view.
 @param margin The distance between views.
 @return An array of constraintsthat  place the views of the array left of the given view with the given distance.
 */
- (NSArray*)lyt_constraintByPlacingLeftOfView:(LYTView*)view margin:(CGFloat)margin;

#pragma mark Position and Sizing

/**
 Adds constraints that set the x origin of the views in the array with the given value.
 @param x The x origin.
 @return An array of constraints that set the x origin of the views in the array with the given value.
 */
- (NSArray*)lyt_setX:(CGFloat)x;

/**
 Adds constraints that set the y origin of the views in the array with the given value.
 @param y The y origin.
 @return An array of constraints that set the y origin of the views in the array with the given value.
 */
- (NSArray*)lyt_setY:(CGFloat)y;

/**
 Adds constraints that set the origin of the views in the array with the given value.
 @param origin The origin.
 @return An array of constraints that set the origin of the views in the array with the given value.
 */
- (NSArray*)lyt_setOrigin:(CGPoint)origin;

/**
 Adds constraints that set the width of the views in the array with the given value.
 @param width The width.
 @return An array of constraints that set the width of the views in the array with the given value.
 */
- (NSArray*)lyt_setWidth:(CGFloat)width;

/**
 Adds constraints that set the maximum width of the views in the array with the given value.
 @param width The maximum width.
 @return An array of constraints that set the maximum of the views in the array with the given value.
 */
- (NSArray*)lyt_setMaxWidth:(CGFloat)width;

/**
 Adds constraints that set the minimum width of the views in the array with the given value.
 @param width The minimum width.
 @return An array of constraints that set the minimum of the views in the array with the given value.
 */
- (NSArray*)lyt_setMinWidth:(CGFloat)width;

/**
 Adds constraints that set the height of the views in the array with the given value.
 @param height The height.
 @return An array of constraints that set the height of the views in the array with the given value.
 */
- (NSArray*)lyt_setHeight:(CGFloat)height;

/**
 Adds constraints that set the maximum height of the views in the array with the given value.
 @param height The maximum height.
 @return An array of constraints that set the maximum height of the views in the array with the given value.
 */
- (NSArray*)lyt_setMaxHeight:(CGFloat)height;

/**
 Adds constraints that set the minimum height of the views in the array with the given value.
 @param height The minimum height.
 @return An array of constraints that set the minimum height of the views in the array with the given value.
 */
- (NSArray*)lyt_setMinHeight:(CGFloat)height;

/**
 Adds constraints that set the size of the views in the array with the given value.
 @param size The size.
 @return An array of constraints that set the size of the views in the array with the given value.
 */
- (NSArray*)lyt_setSize:(CGSize)size;

/**
 Adds constraints that set the maximum size of the views in the array with the given value.
 @param size The maximum size.
 @return An array of constraints that set the maximum size of the views in the array with the given value.
 */
- (NSArray*)lyt_setMaxSize:(CGSize)size;

/**
 Adds constraints that set the minimum size of the views in the array with the given value.
 @param size The minimum size.
 @return An array of constraints that set the minimum size of the views in the array with the given value.
 */
- (NSArray*)lyt_setMinSize:(CGSize)size;

/**
 Adds constraints that set the frame of the views in the array with the given value.
 @param frame The frame.
 @return An array of constraints that set the frame of the views in the array with the given value.
 */
- (NSArray*)lyt_setFrame:(CGRect)frame;

/**
 Adds constraints that match the width of the views in the array to the width of the given view.
 @param view The reference view.
 @return An array of constraints that match the width of the views in the array to the width of the given view.
 */
- (NSArray*)lyt_matchWidthToView:(LYTView*)view;

/**
 Adds constraints that match the height of the views in the array to the height of the given view.
 @param view The reference view.
 @return An array of constraints that match the height of the views in the array to the height of the given view.
 */
- (NSArray*)lyt_matchHeightToView:(LYTView*)view;

/**
 Adds constraints that match the width of the views in the array to a multiple of the width of the given view.
 @param view The reference view.
 @param mutiplier The width multiplier.
 @return An array of constraints that match the width of the views in the array to a multiple of the width of the given view.
 */
- (NSArray*)lyt_matchWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;;

/**
 Adds constraints that match the height of the views in the array to a multiple of the height of the given view.
 @param view The reference view.
 @param mutiplier The height multiplier.
 @return An array of constraints that match the height of the views in the array to a multiple of the height of the given view.
 */
- (NSArray*)lyt_matchHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

/**
 Returns constraints that set the x origin of the views in the array with the given value.
 @param x The x origin.
 @return An array of constraints that set the x origin of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingX:(CGFloat)x;

/**
 Returns constraints that set the y origin of the views in the array with the given value.
 @param y The y origin.
 @return An array of constraints that set the y origin of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingY:(CGFloat)y;

/**
 Returns constraints that set the origin of the views in the array with the given value.
 @param origin The origin.
 @return An array of constraints that set the origin of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintsBySettingOrigin:(CGPoint)origin;

/**
 Returns constraints that set the width of the views in the array with the given value.
 @param width The width.
 @return An array of constraints that set the width of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingWidth:(CGFloat)width;

/**
 Returns constraints that set the maximum width of the views in the array with the given value.
 @param width The maximum width.
 @return An array of constraints that set the maximum width of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingMaxWidth:(CGFloat)width;

/**
 Returns constraints that set the minimum width of the views in the array with the given value.
 @param width The minimum width.
 @return An array of constraints that set the minimum width of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingMinWidth:(CGFloat)width;

/**
 Returns constraints that set the height of the views in the array with the given value.
 @param height The height.
 @return An array of constraints that set the height of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingHeight:(CGFloat)height;

/**
 Returns constraints that set the maximum height of the views in the array with the given value.
 @param height The maximum height.
 @return An array of constraints that set the maximum height of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingMaxHeight:(CGFloat)height;

/**
 Returns constraints that set the minimum height of the views in the array with the given value.
 @param height The minimum height.
 @return An array of constraints that set the minimum height of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintBySettingMinHeight:(CGFloat)height;

/**
 Returns constraints that set the size of the views in the array with the given value.
 @param size The size.
 @return An array of constraints that set the size of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintsBySettingSize:(CGSize)size;

/**
 Returns constraints that set the maximum size of the views in the array with the given value.
 @param size The maximum size.
 @return An array of constraints that set the  maximum size of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintsBySettingMaxSize:(CGSize)size;

/**
 Returns constraints that set the minimum size of the views in the array with the given value.
 @param size The minimum size.
 @return An array of constraints that set the  minimum size of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintsBySettingMinSize:(CGSize)size;

/**
 Returns constraints that set the frame of the views in the array with the given value.
 @param frame The frame.
 @return An array of constraints that set the frame of the views in the array with the given value.
 */
- (NSArray*)lyt_constraintsBySettingFrame:(CGRect)frame;

/**
 Returns constraints that match the width of the views in the array to the width of the given view.
 @param view The reference view.
 @return An array of constraints that match the width of the views in the array to the width of the given view.
 */
- (NSArray*)lyt_constraintByMatchingWidthToView:(LYTView*)view;

/**
 Returns constraints that match the height of the views in the array to the height of the given view.
 @param view The reference view.
 @return An array of constraints that match the height of the views in the array to the height of the given view.
 */
- (NSArray*)lyt_constraintByMatchingHeightToView:(LYTView*)view;

/**
 Returns constraints that match the width of the views in the array to a multiple of the width of the given view.
 @param view The reference view.
 @param mutiplier The width multiplier.
 @return An array of constraints that match the width of the views in the array to a multiple of the width of the given view.
 */
- (NSArray*)lyt_constraintByMatchingWidthToView:(LYTView*)view multiplier:(CGFloat)multiplier;

/**
 Returns constraints that match the height of the views in the array to a multiple of the height of the given view.
 @param view The reference view.
 @param mutiplier The height multiplier.
 @return An array of constraints that match the height of the views in the array to a multiple of the height of the given view.
 */
- (NSArray*)lyt_constraintByMatchingHeightToView:(LYTView*)view multiplier:(CGFloat)multiplier;

/**
 Returns constraints that match the size of the views in the array to the size of the given view.
 @param view The reference view.
 @return An array of constraints that match the size of the views in the array to the size of the given view.
 */
- (NSArray*)lyt_constraintsByMatchingSizeToView:(LYTView*)view;

@end
