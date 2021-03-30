//
//  HCViewController.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <KVOController/KVOController.h>

@class HCViewModel;

NS_ASSUME_NONNULL_BEGIN



@interface HCViewController : UIViewController

@property (nonatomic, readonly, strong) HCViewModel *viewModel;

@property (nonatomic, readonly, strong) FBKVOController *kvoCtrl;

- (instancetype)initWithViewModel:(HCViewModel*)viewModel;

+ (instancetype)createWithViewModel:(HCViewModel*)viewModel;

@end



@interface HCViewController (ACtion)

- (void) back;

@end



NS_ASSUME_NONNULL_END
