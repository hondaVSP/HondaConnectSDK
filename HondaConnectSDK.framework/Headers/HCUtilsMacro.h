//
//  HCUtilsMacro.h
//  HondaApp_iOS
//
//  Created by 苏超 on 2019/7/15.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//


//全局工具类宏定义
#ifndef HCUtilsMacro_h
#define HCUtilsMacro_h


//获取系统对象
#define KKeyWindow          [UIApplication sharedApplication].keyWindow

//常用尺寸
#define KStatusBarHeight    [[UIApplication sharedApplication] statusBarFrame].size.height
#define KNavBarHeight       44.0
#define KTabBarHeight       ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
#define KTopHeight          (KStatusBarHeight + KNavBarHeight)
#define ScreenHeight        [UIScreen mainScreen].bounds.size.height
#define ScreenWidth         [UIScreen mainScreen].bounds.size.width
//#define StatusHeight        [[UIApplication sharedApplication] statusBarFrame].size.height
#define ScreenBounds        [UIScreen mainScreen].bounds
//适配的屏幕的高和宽
#define FitWidth [UIScreen mainScreen].bounds.size.width / 375
#define FitHeight [UIScreen mainScreen].bounds.size.height / 667
//安全区EdgeInsets
#define ViewSafeAreInsets(view) ({UIEdgeInsets insets; if(@available(iOS 11.0, *)) {insets = view.safeAreaInsets;} else {insets = UIEdgeInsetsZero;} insets;})

//View 圆角和加边框
#define ViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

//View 圆角
#define ViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]



//颜色
#define kRandomColor    KRGBColor(arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0)        //随机色生成

//字体
#define SYSTEMFONT(FONTSIZE)    [UIFont systemFontOfSize:FONTSIZE]


// 是否为空
//#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))
#define isNull(key) (key == nil  || [key isEqual:[NSNull null]] || (NSNull*)key == [NSNull null] )

//空字符串判断
#define NULLString(string) ((![string isKindOfClass:[NSString class]])||[string isEqualToString:@""] || (string == nil) ||  [string isKindOfClass:[NSNull class]]||[[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0)
//空字符串判断（不包括空格）
#define NULLStringWithoutWhitespace(string) ((![string isKindOfClass:[NSString class]]) || [string isEqualToString:@""] || (string == nil) ||  [string isKindOfClass:[NSNull class]])

//强弱引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type) __strong typeof(type) type = weak##type;

//主线程主队列
#ifndef dispatch_main_async_safe
#define dispatch_main_async_safe(block)\
    if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(dispatch_get_main_queue())) {\
        block();\
    } else {\
        dispatch_async(dispatch_get_main_queue(), block);\
    }
#endif


#ifndef weakify
    #if DEBUG
        #if __has_feature(objc_arc)
        #define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
        #else
        #define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
        #endif
    #else
        #if __has_feature(objc_arc)
        #define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
        #else
        #define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
        #endif
    #endif
#endif

#ifndef strongify
    #if DEBUG
        #if __has_feature(objc_arc)
        #define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
        #else
        #define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
        #endif
    #else
        #if __has_feature(objc_arc)
        #define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
        #else
        #define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
        #endif
    #endif
#endif


/*
//判断iPhoneX所有系列
#define IS_PhoneXAll (IS_IPHONE_X || IS_IPHONE_Xr || IS_IPHONE_Xs_Max)
#define k_Height_NavContentBar 44.0f
#define k_Height_StatusBar (IS_PhoneXAll? 44.0 : 20.0)
#define k_Height_StatusBarAndNavigationBarBar (IS_PhoneXAll ? 88.0 : 64.0)
#define k_Height_TabBar (IS_PhoneXAll ? (49.f+34.f) : 49.0)
#define k_Height_TabbarSafeBottomMargin (IS_PhoneXAll ? 34.f : 0.f)// Tabbar safe bottom margin.
//判断是否是ipad
#define isPads ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
//判断iPhone4系列
#define kiPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone5系列
#define kiPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone6 6s 7系列
#define kiPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone6p 6sp 7p系列
#define kiPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneX，Xs（iPhoneX，iPhoneXs）
#define IS_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXr
#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXsMax
#define IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size)&& !isPad : NO)
 */

#endif /* UtilsMacro_h */
