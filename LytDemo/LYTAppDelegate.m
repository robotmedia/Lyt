//
//  LYTAppDelegate.m
//  LytDemo
//
//  Created by Hermés Piqué on 26/03/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//

#import "LYTAppDelegate.h"
#import "LYTViewController.h"

@implementation LYTAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    self.window.rootViewController = [LYTViewController new];
    [self.window makeKeyAndVisible];
    return YES;
}

@end
