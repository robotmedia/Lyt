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

#if TARGET_OS_IPHONE
@import UIKit;
#define LYTView UIView
#else
@import AppKit;
#define LYTView NSView
#endif

@interface LYTView (Lyt)

// Alignment

- (NSLayoutConstraint*)lyt_alignTopToParent;

- (NSLayoutConstraint*)lyt_alignTopToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignTopToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_alignTopToView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignRightToParent;

- (NSLayoutConstraint*)lyt_alignRightToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignRightToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_alignRightToView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignBottomToParent;

- (NSLayoutConstraint*)lyt_alignBottomToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignBottomToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_alignBottomToView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignLeftToParent;

- (NSLayoutConstraint*)lyt_alignLeftToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignLeftToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_alignLeftToView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_alignSidesToParent;

- (NSArray*)lyt_alignSidesToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_alignSidesToView:(LYTView*)view;

- (NSArray*)lyt_alignSidesToView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_alignToParent;

- (NSArray*)lyt_alignToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_alignToView:(LYTView*)view;

- (NSArray*)lyt_alignToView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToParent;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToParent;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParent;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(LYTView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToParent;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningSidesToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningSidesToView:(LYTView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningToParent;

- (NSArray*)lyt_constraintsByAligningToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningToView:(LYTView*)view margin:(CGFloat)margin;

// Centering

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

// Placement

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

// Position and sizing

- (NSLayoutConstraint*)lyt_setX:(CGFloat)x;

- (NSLayoutConstraint*)lyt_setY:(CGFloat)y;

- (NSArray*)lyt_setOrigin:(CGPoint)origin;

- (NSLayoutConstraint*)lyt_setWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_setHeight:(CGFloat)height;

- (NSArray*)lyt_setSize:(CGSize)size;

- (NSArray*)lyt_setFrame:(CGRect)frame;

- (NSLayoutConstraint*)lyt_matchWidthToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_matchHeightToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintBySettingX:(CGFloat)x;

- (NSLayoutConstraint*)lyt_constraintBySettingY:(CGFloat)y;

- (NSArray*)lyt_constraintsBySettingOrigin:(CGPoint)origin;

- (NSLayoutConstraint*)lyt_constraintBySettingWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_constraintBySettingHeight:(CGFloat)height;

- (NSArray*)lyt_constraintsBySettingSize:(CGSize)size;

- (NSArray*)lyt_constraintsBySettingFrame:(CGRect)frame;

- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(LYTView*)view;

- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(LYTView*)view;

- (NSArray*)lyt_constraintsByMatchingSizeToView:(LYTView*)view;

@end

