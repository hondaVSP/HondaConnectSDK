//
//  HCUIMarco.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#ifndef HCUIMarco_h
#define HCUIMarco_h


/// 颜色相关
#define RGB(r, g, b)        [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:1.0f]
#define RGBA(r, g, b, a)    [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a]

/// 屏幕尺寸相关
#define SCREEN_WIDTH        ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT       ([[UIScreen mainScreen] bounds].size.height)

/// tabBar高度
#define APPLICATION_TAB_BAR_HEIGHT      ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
/// 状态栏高度
#define APPLICATION_STATUS_BAR_HEIGHT   [[UIApplication sharedApplication] statusBarFrame].size.height
/// 导航栏高度
#define APPLICATION_NAV_BAR_HEIGHT      44.0
/// 导航条+状态栏高度
#define APPLICATION_TOP_BAR_HEIGHT      (APPLICATION_STATUS_BAR_HEIGHT + APPLICATION_NAV_BAR_HEIGHT)

#endif /* UIMarco_h */
