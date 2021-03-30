//
//  UIView+HCSpinner.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/3/30.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 全局Loading-Spinner

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (HCSpinner)

/// 显示loading
- (void)showLoadingSpinner;

/// 隐藏loading
- (void)hideLoadingSpinner;
/**局部loading*/
- (void)makePartLoading;
/**隐藏局部loading*/
- (void)hidePartLoading;

@end

NS_ASSUME_NONNULL_END
