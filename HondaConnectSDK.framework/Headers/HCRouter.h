//
//  HCRouter.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCViewController.h"

@class HCViewModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCRouter : NSObject

+ (instancetype)sharedInstance;

- (HCViewController *)viewControllerForViewModel:(HCViewModel *)viewModel;

@end

NS_ASSUME_NONNULL_END
