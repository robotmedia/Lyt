//
//  LytTests.m
//  LytTests
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

#import <XCTest/XCTest.h>
#import "Lyt.h"

@interface UIView (LytUtils)

- (UIView*)lyt_ancestorSharedWithView:(UIView*)view;

@end

@interface LytTests : XCTestCase

@end

@implementation LytTests {
    UIView *_view;
}


- (void)setUp
{
    _view = [UIView new];
}

- (void)testAncestorSharedWithView_Nil
{
    UIView *otherView = [UIView new];
    
    UIView *result = [_view lyt_ancestorSharedWithView:otherView];
    
    XCTAssertNil(result);
}

- (void)testAncestorSharedWithView_Self
{
    UIView *result = [_view lyt_ancestorSharedWithView:_view];

    XCTAssertEqualObjects(result, _view, @"");
}

- (void)testAncestorSharedWithView_Child
{
    UIView *child = [UIView new];
    [_view addSubview:child];
    
    UIView *result = [_view lyt_ancestorSharedWithView:child];
    
    XCTAssertEqualObjects(result, _view, @"");
}

- (void)testAncestorSharedWithView_Parent
{
    UIView *parent = [UIView new];
    [parent addSubview:_view];
    
    UIView *result = [_view lyt_ancestorSharedWithView:parent];
    
    XCTAssertEqualObjects(result, parent, @"");
}

- (void)testAncestorSharedWithView_Sibling
{
    UIView *parent = [UIView new];
    [parent addSubview:_view];
    UIView *sibling = [UIView new];
    [parent addSubview:sibling];
    
    UIView *result = [_view lyt_ancestorSharedWithView:sibling];
    
    XCTAssertEqualObjects(result, parent, @"");
}

- (void)testAncestorSharedWithView_Grandparent
{
    UIView *parent = [UIView new];
    [parent addSubview:_view];
    UIView *grandparent = [UIView new];
    [grandparent addSubview:parent];
    
    UIView *result = [_view lyt_ancestorSharedWithView:grandparent];
    
    XCTAssertEqualObjects(result, grandparent, @"");
}

- (void)testAncestorSharedWithView_Grandchild
{
    UIView *child = [UIView new];
    [_view addSubview:child];
    UIView *grandchild = [UIView new];
    [child addSubview:grandchild];
    
    UIView *result = [_view lyt_ancestorSharedWithView:grandchild];
    
    XCTAssertEqualObjects(result, _view, @"");
}

- (void)testAncestorSharedWithView_Uncle
{
    UIView *grandparent = [UIView new];
    UIView *parent = [UIView new];
    [grandparent addSubview:parent];
    UIView *uncle = [UIView new];
    [grandparent addSubview:uncle];
    [parent addSubview:_view];
    
    UIView *result = [_view lyt_ancestorSharedWithView:uncle];
    
    XCTAssertEqualObjects(result, grandparent, @"");
}

- (void)testAncestorSharedWithView_Nephew
{
    UIView *parent = [UIView new];
    [parent addSubview:_view];
    UIView *sibling = [UIView new];
    [parent addSubview:sibling];
    UIView *nephew = [UIView new];
    [sibling addSubview:nephew];
    
    UIView *result = [_view lyt_ancestorSharedWithView:nephew];
    
    XCTAssertEqualObjects(result, parent, @"");
}

- (void)testAncestorSharedWithView_Cousin
{
    UIView *grandparent = [UIView new];
    UIView *parent = [UIView new];
    [grandparent addSubview:parent];
    UIView *uncle = [UIView new];
    [grandparent addSubview:uncle];
    [parent addSubview:_view];
    UIView *cousin = [UIView new];
    [uncle addSubview:cousin];
    
    UIView *result = [_view lyt_ancestorSharedWithView:cousin];
    
    XCTAssertEqualObjects(result, grandparent, @"");
}

@end
