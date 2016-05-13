//
//  BRDirector-ios.m
//  brisk2d-x
//
//  Created by john on 16/5/13.
//  Copyright © 2016年 john. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "BRDirector.hpp"

NS_BR_BEGIN

void BRDirector::initDirector()
{
    UIWindow* window = [UIApplication sharedApplication].keyWindow;
    
    UIViewController* viewController = [[UIViewController alloc] initWithNibName:nil bundle:nil];
    viewController.edgesForExtendedLayout = UIRectEdgeAll;
    viewController.view = [[UIView alloc] initWithFrame:window.bounds];
    
    // Set RootViewController to window
    if ( [[UIDevice currentDevice].systemVersion floatValue] < 6.0)
    {
        // warning: addSubView doesn't work on iOS6
        [window addSubview: viewController.view];
    }
    else
    {
        // use this method on ios6
        [window setRootViewController:viewController];
    }
    
    [window makeKeyAndVisible];
//
//    [viewController pper];
    
    [[UIApplication sharedApplication] setStatusBarHidden:true];
    
    
    UILabel* label = [[UILabel alloc] initWithFrame:CGRectMake(100, 100, 100, 100)];
    label.text = @"safsdfsdfsdf";
    label.textColor = [UIColor redColor];
    
    [viewController.view addSubview:label];
}

NS_BR_END
