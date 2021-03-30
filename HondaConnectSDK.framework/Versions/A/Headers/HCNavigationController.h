//
//  HCNavigationController.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ViewController;

NS_ASSUME_NONNULL_BEGIN

@interface HCNavigationController : UINavigationController

@property(nonatomic, getter=isNavigationBottomLineHidden) BOOL navigationBottomLineHidden;

- (instancetype)initWithFullScreenRootViewController:(ViewController*)rootViewController;

@end

NS_ASSUME_NONNULL_END
