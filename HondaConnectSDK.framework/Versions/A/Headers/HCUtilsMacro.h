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

//日志输出
#ifndef __OPTIMIZE__
    //这里执行的是debug模式下，打印日志，当前行
    #define HCLog(...) printf("%s %s %s\n",__TIME__, __PRETTY_FUNCTION__ , [[NSString stringWithFormat:__VA_ARGS__] UTF8String]);
#else
        //这里执行的是release模式下，不打印日志
    #define HCLog(...)
#endif

//获取系统对象
#define KKeyWindow          [UIApplication sharedApplication].keyWindow

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


//字符空串保护
#define safeNullString(str)\
    ^(){\
        if (NULLString(str)) {\
            return @"";\
        }else {\
            return str;\
        }\
    }()

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


#endif /* UtilsMacro_h */
