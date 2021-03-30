//
//  HKAppEventModulePortocol.h
//  iOS_ClusterAnnotation_3D
//
//  Created by Zac on 2020/12/6.
//  Copyright © 2020 AutoNavi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HCBaseEventModulePortocol <UIApplicationDelegate>

@required

/**
 module执行优先级
 */
- (NSInteger)moduleLevel;

/**
 执行完释放module
 */
- (void)destoryModule;

/**
 获取moduleID
 */
- (NSString *)moduleID;

@end

NS_ASSUME_NONNULL_END
