//
//  AppDelegate.h
//  dasddsa
//
//  Created by Mac on 2018/1/29.
//  Copyright © 2018年 YuXianMin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

