//
//  HCDefine.h
//  Pods
//
//  Created by Zac on 2021/1/14.
//

#ifndef HCDefine_h
#define HCDefine_h

#import <Foundation/Foundation.h>


#pragma mark - --常量宏--

#define HC_SCREEN_WIDTH   [UIScreen mainScreen].bounds.size.width
#define HC_SCREENH_HEIGHT [UIScreen mainScreen].bounds.size.height




#pragma mark - --判断宏--



//判断字符串是否为空
#define HC_STRING_IS_NOT_EMPTY(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length]< 1 ? YES : NO )
//判断数组是否为空
#define HC_ARRAY_IS_NOT_EMPTY(array) (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0)
//判断字典是否为空
#define HC_DICT_IS_NOT_EMPTY(dic) (dic == nil || [dic isKindOfClass:[NSNull class]] || dic.allKeys == 0)



#pragma mark - --日志宏--

//判断DEBUG模式的日志
#ifdef DEBUG
# define HC_LOG_INFO ([NSString stringWithFormat:@"[文件名:%s]" "[函数名:%s]" "[行号:%d]", __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__]);
#else
# define HC_LOG_INFO ();
#endif

#define HC_LOG_ERROR_INFO(reson) ([NSString stringWithFormat:@"%@ %@ %@ %@ ", reson,@"❌", @"Error", HC_LOG_INFO])
#define HC_LOG_WARN_INFO(reson) ([NSString stringWithFormat:@"%@ %@ %@ %@ ", reson,@"⚠️", @"Warn", HC_LOG_INFO])
#define HC_LOG_INFO_INFO(reson) ([NSString stringWithFormat:@"%@ %@ %@ %@ ", reson,@"ℹ️", @"Info", HC_LOG_INFO])
#define HC_LOG_DEBUG_INFO(reson) ([NSString stringWithFormat:@"%@ %@ %@ %@ ", reson,@"🛠", @"Debug", HC_LOG_INFO])
#define HC_LOG_VERBOSE_INFO(reson) ([NSString stringWithFormat:@"%@ %@ %@ %@ ", reson,@"📝", @"Verbose", HC_LOG_INFO])


#pragma mark - --其他宏--


//GCD - 一次性执行
#define HC_DISPATCH_ONCE_BLOCK(onceBlock) static dispatch_once_t onceToken; dispatch_once(&onceToken, onceBlock);
//GCD - 在Main线程上运行
#define HC_DISPATCH_MAIN_THREAD(mainQueueBlock) dispatch_async(dispatch_get_main_queue(), mainQueueBlock);
//GCD - 开启异步线程
#define HC_DISPATCH_GLOBAL_QUEUE_DEFAULT(globalQueueBlock) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), globalQueueBlocl);



#endif /* HCDefine_h */
