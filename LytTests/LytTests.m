//
//  LytTests.m
//  LytTests
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

#import <XCTest/XCTest.h>
#import "Lyt.h"

@interface LYTView (LytUtils)

- (LYTView*)lyt_ancestorSharedWithView:(LYTView*)view;

@end

@interface NSArray (LytUtils)

- (NSArray *)lyt_flattenMap:(id (^)(LYTView *view))block;

@end

@interface LytTests : XCTestCase

@end

@implementation LytTests {
    LYTView *_view;
}


- (void)setUp
{
    _view = [LYTView new];
}

#pragma mark ancestorSharedWithView

- (void)testAncestorSharedWithView_Nil
{
    LYTView *otherView = [LYTView new];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:otherView];
    
    XCTAssertNil(result);
}

- (void)testAncestorSharedWithView_Self
{
    LYTView *result = [_view lyt_ancestorSharedWithView:_view];

    XCTAssertEqualObjects(result, _view, @"");
}

- (void)testAncestorSharedWithView_Child
{
    LYTView *child = [LYTView new];
    [_view addSubview:child];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:child];
    
    XCTAssertEqualObjects(result, _view, @"");
}

- (void)testAncestorSharedWithView_Parent
{
    LYTView *parent = [LYTView new];
    [parent addSubview:_view];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:parent];
    
    XCTAssertEqualObjects(result, parent, @"");
}

- (void)testAncestorSharedWithView_Sibling
{
    LYTView *parent = [LYTView new];
    [parent addSubview:_view];
    LYTView *sibling = [LYTView new];
    [parent addSubview:sibling];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:sibling];
    
    XCTAssertEqualObjects(result, parent, @"");
}

- (void)testAncestorSharedWithView_Grandparent
{
    LYTView *parent = [LYTView new];
    [parent addSubview:_view];
    LYTView *grandparent = [LYTView new];
    [grandparent addSubview:parent];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:grandparent];
    
    XCTAssertEqualObjects(result, grandparent, @"");
}

- (void)testAncestorSharedWithView_Grandchild
{
    LYTView *child = [LYTView new];
    [_view addSubview:child];
    LYTView *grandchild = [LYTView new];
    [child addSubview:grandchild];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:grandchild];
    
    XCTAssertEqualObjects(result, _view, @"");
}

- (void)testAncestorSharedWithView_Uncle
{
    LYTView *grandparent = [LYTView new];
    LYTView *parent = [LYTView new];
    [grandparent addSubview:parent];
    LYTView *uncle = [LYTView new];
    [grandparent addSubview:uncle];
    [parent addSubview:_view];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:uncle];
    
    XCTAssertEqualObjects(result, grandparent, @"");
}

- (void)testAncestorSharedWithView_Nephew
{
    LYTView *parent = [LYTView new];
    [parent addSubview:_view];
    LYTView *sibling = [LYTView new];
    [parent addSubview:sibling];
    LYTView *nephew = [LYTView new];
    [sibling addSubview:nephew];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:nephew];
    
    XCTAssertEqualObjects(result, parent, @"");
}

- (void)testAncestorSharedWithView_Cousin
{
    LYTView *grandparent = [LYTView new];
    LYTView *parent = [LYTView new];
    [grandparent addSubview:parent];
    LYTView *uncle = [LYTView new];
    [grandparent addSubview:uncle];
    [parent addSubview:_view];
    LYTView *cousin = [LYTView new];
    [uncle addSubview:cousin];
    
    LYTView *result = [_view lyt_ancestorSharedWithView:cousin];
    
    XCTAssertEqualObjects(result, grandparent, @"");
}

#pragma mark flattenMap

- (void)testFlattenMap_Empty
{
    NSArray *result = [@[] lyt_flattenMap:^id(LYTView *view) { return nil; }];
    
    XCTAssertEqualObjects(result, @[], @"");
}

- (void)testFlattenMap_AssertNotAView
{
#if DEBUG
    XCTAssertThrows([@[@YES] lyt_flattenMap:^id(LYTView *view) { return nil; }], @"");
#endif
}

- (void)testFlattenMap_Value
{
    NSArray *result = [@[[LYTView new], [LYTView new]] lyt_flattenMap:^id(LYTView *view) { return @YES; }];
    NSArray *expectedResut =  @[@YES, @YES];

    XCTAssertEqualObjects(result, expectedResut, @"");
}

- (void)testFlattenMap_Array
{
    NSArray *result = [@[[LYTView new], [LYTView new]] lyt_flattenMap:^id(LYTView *view) { return @[@YES, @NO]; }];
    NSArray *expectedResut =  @[@YES, @NO, @YES, @NO];
    XCTAssertEqualObjects(result, expectedResut, @"");
}

@end
