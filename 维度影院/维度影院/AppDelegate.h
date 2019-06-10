//
//  AppDelegate.h
//  维度影院
//
//  Created by 杨阳 on 2019/6/10.
//  Copyright © 2019 杨阳. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

