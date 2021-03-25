//
//  HCUtility.h
//  HondaApp_iOS
//
//  Created by 苏超 on 2019/7/16.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <sys/sysctl.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCUtility : NSObject
/**获取今天是周几*/
+ (NSInteger)getWeekDayFordate;

/// 读取本地json文件中的内容
+ (NSArray *)areas;

+ (NSString *)md5big:(NSString*)input;
+ (NSString *)md5small:(NSString*)input;
/**
 获取每日23:59:59
 
 @param date 日期
 @return 23:59:59日期
 */
+ (NSDate *)maxTime:(NSDate *)date;

/**
 时间数组 (0返回<date *>, 1返回<string *>)

 @param flag 0返回<date *>, 1返回<string *>
 @return NSArray
 */
+ (NSArray *)timeArrayWithFlag:(NSInteger)flag;


/**
 * 字符串中是否包含无效、非法字符(目前仅用于输入内容判断，如其他内容判断需扩展)
 */
+ (BOOL)stringIncludingInvalidCharacter:(NSString *)string;


/**
 * 获取当前正在显示的控制器
 @param isInclude 是否包含alertViewController
 */
+ (UIViewController *)findCurrentShowViewControllerFrom:(UIViewController *)vc
                                 includeAlertController:(BOOL)isInclude;



/// 时间戳转换时间 --- 故障提醒发生时间
/// @param mStr 时间戳字符串
+ (NSString *)getFaultTime:(NSString *)mStr;
/**
 时间戳转换时间
 */
+ (NSString *)getTimestamp:(NSString*)mStr;
/**
 时间戳转换时间 --- 消息详情
 */
+ (NSString *)getTimestampWithMessageDetail:(NSString*)mStr;
/**
 时间戳转换时间 --- 车辆管理
 */
+ (NSString *)getTimestampWithCarManager:(NSString*)mStr;
/**
 时间戳转换时间 --- 历史轨迹
 */
+ (NSString *)getTimestampWithHistory:(NSString*)mStr;
/**
 时间戳转换时间 --- 消息中心
 */
+ (NSString *)getTimestampWithMessage:(NSString*)mStr;

//获取缓存路径
+ (NSString *)getCachesPath:(NSString *)fileName;
//计算单个文件大小的方法
+ (long long)fileSizeAtPath:(NSString *)path;
//计算一个文件夹大小
+ (float)folderSizeAtPath:(NSString *)path;
//清空缓存方法
+ (void)cleanCaches:(NSString *)path;

//整形转字符串
+ (NSString *)toStringBy:(NSInteger)value;

//字典中的数据转换成URL
+(NSString *)getUrlByDic:(NSDictionary *)dic Url:(NSString *)urlstr;
//URL
+(NSDictionary *)changeStrToDic:(NSString *)string;

//16进制颜色改为UIcolor
+(UIColor *)getColor:(NSString *) hexColor;

/*手机号码验证 MODIFIED BY HELENSONG*/
//+(BOOL) isValidateMobile:(NSString *)mobile;

//判断字符串是否为空
+(BOOL) isBlankString:(NSString *)string;

//字典转json
+ (NSString*)dictionaryToJson:(NSDictionary *)dic;

//生成guid
+ (NSString *)getUniqueStrByUUID;

//反序列化
+(NSDictionary *)jsonDictionarBystring:(NSString *)message;

//压缩图片到指定尺寸大小
+ (UIImage *)compressOriginalImage:(UIImage *)image toSize:(CGSize)size;

//压缩图片到指定文件大小
+ (NSData *)compressOriginalImage:(UIImage *)image toMaxDataSizeKBytes:(CGFloat)size;

//判断是否有空格
+ (BOOL)isHaveSpaceInString:(NSString *)string;

//判断是否有中文
+ (BOOL)isHaveChineseInString:(NSString *)string;

//判断字符串是否全部为数字
+ (BOOL)isAllNum:(NSString *)string;

/// 是否是有效数字
/// @param number string
+ (BOOL)validateNumber:(NSString *)number;

/**有效手机号*/
+ (BOOL)validateTelephone:(NSString *)mobile;

//获取当前的viewcontroller
+ (UIViewController *)getCurrentVC;


//对图片进行模糊处理
+ (UIImage *)blurWithOriginalImage:(UIImage *)image blurName:(NSString *)name radius:(NSInteger)radius;


//对图片进行滤镜处理
+ (UIImage *)filterWithOriginalImage:(UIImage *)image filterName:(NSString *)name;

//获取当前时间
//format: @"yyyy-MM-dd HH:mm:ss"、@"yyyy年MM月dd日 HH时mm分ss秒"
+ (NSString *)currentDateWithFormat:(NSString *)format;

//计算上次日期距离现在多久
+ (NSString *)timeIntervalFromLastTime:(NSString *)lastTime

                        lastTimeFormat:(NSString *)format1

                         ToCurrentTime:(NSString *)currentTime

                     currentTimeFormat:(NSString *)format2;



//根据日期算出周几
+ (NSString*)weekdayStringFromDate:(NSDate*)inputDate;


@end

NS_ASSUME_NONNULL_END
