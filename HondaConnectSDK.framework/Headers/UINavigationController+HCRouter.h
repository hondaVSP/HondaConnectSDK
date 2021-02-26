//
//  UINavigationController+HCRouter.h
//  CocoaLumberjackDemo
//
//  Created by 蔡宇航 on 2021/2/6.
//  Copyright © 2021 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCViewModel.h"
#import "HCNimbusViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface UINavigationController (HCRouter)

/// 页面push，参数放入parameters里，控制器名称设置viewControllerName即可
- (void)pushWithViewModel:(HCViewModel *)viewModel animated:(BOOL)animated;

/// 页面push，参数放入parameters里，控制器名称设置viewControllerName即可，successBlock成功回调，failureBlock失败回调
- (void)pushWithViewModel:(HCViewModel *)viewModel animated:(BOOL)animated onSuccess:(void(^ __nullable)(void))successBlock onFailure:(void(^ __nullable)(void))failureBlock;

/// 页面pop，参数放入parameters，控制器名称设置viewControllerName即可
- (void)popWithViewModel:(HCViewModel *)viewModel animated:(BOOL)animated;

/// 页面pop，无传值参数
- (void)popWithViewControllersName:(NSString *)viewControllerName
                          animated:(BOOL)animated;

/// 页面present
- (void)presentWithViewModel:(HCViewModel *)viewModel animated:(BOOL)animated completion:(void (^ __nullable)(void))completion;

// 页面dismiss
- (void)dismissWithViewModel:(HCViewModel *)viewModel animated:(BOOL)animated completion:(void (^ __nullable)(void))completion;


@end

NS_ASSUME_NONNULL_END
