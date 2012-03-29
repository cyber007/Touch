//
//  TouchAppDelegate.h
//  Touch
//
//  Created by NYU User on 10/27/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface TouchAppDelegate: UIResponder <UIApplicationDelegate> {
    View *view;
    UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;
@end
