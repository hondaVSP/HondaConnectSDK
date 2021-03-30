//
//  HCUIConfig+Nimbus.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//


#import "HCUIConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCUIConfig (Nimbus)

@property(nonatomic, copy) UIImage *emptyImage;

@property(nonatomic, copy) NSString *emptyLabelText;

@property(nonatomic, copy) UIFont *emptyLabelFont;

@property(nonatomic, copy) UIColor *emptyLabelColor;

@property(nonatomic, assign) CGFloat emptyspaceHeightForEmptyDataSet;

@end

NS_ASSUME_NONNULL_END
