//
//  HKAppEventModuleManager.h
//  iOS_ClusterAnnotation_3D
//
//  Created by Zac on 2020/12/6.
//  Copyright © 2020 AutoNavi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCBaseEventModuleManager : NSObject

+ (instancetype)sharedInstance;

/**
 当前需要执行的module容器
 */
@property (nonatomic, strong) NSMutableArray *appEventModules;

/**
 初始化所有的AppDelegate相关的Event Modules
 */
- (void)registerAllModules;

/**
触发evetn module处理AppDelegate回调事件

@param eventSEL AppDelegate 回调事件消息
@param complete module处理handle
*/
- (void)handleApplicationEvent:(SEL)eventSEL
                      complete:(void(^)(id module, SEL sel))complete;

/**
 移除module对象
 */
- (void)removeModule:(NSString *)moduleID;

@end

NS_ASSUME_NONNULL_END
