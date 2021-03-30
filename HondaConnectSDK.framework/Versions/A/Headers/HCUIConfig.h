//
//  HCUIConfig.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCUIConfig : NSObject

//controller
@property(nonatomic, copy) UIColor* viewControllerBackgroundColor;

//statusBar
@property(nonatomic, assign) UIStatusBarStyle statusBarStyle;

//navigationBar
@property(nonatomic, copy) UIColor* navigationBarBarTintColor;
@property(nonatomic, copy) UIColor* navigationBarTintColor;
@property(nonatomic, copy) UIImage* navigationBarBackItemImage;
@property(nonatomic, copy) UIColor* navigationBarLineColor;

//tabbar
@property(nonatomic, copy) UIColor* tabBarLineColor;

//tableviewcontroller
@property(nonatomic, copy) UIColor* tableViewSeparatorColor;
@property(nonatomic, copy) UIColor* tableViewBackgroundColor;
@property(nonatomic, assign) CGFloat tableViewHeightForFooterInSection;
@property(nonatomic, assign) CGFloat tableViewHeightForHeaderInSection;
@property(nonatomic, assign) CGFloat tableViewHeightForHeaderInEmptySection;
@property(nonatomic, assign) UITableViewStyle tableViewStyle;
@property(nonatomic, assign) UITableViewCellSeparatorStyle tableViewSeparatorStyle;
@property(nonatomic, copy) UIColor* tableSectionHeaderTitleColor;
@property(nonatomic, copy) UIFont* tableSectionHeaderTitleFont;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
