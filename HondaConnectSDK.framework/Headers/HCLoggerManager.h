//
//  HCLoggerManager.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/4/9.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#import "HCOssLogger.h"
extern int ddLogLevel;

NS_ASSUME_NONNULL_BEGIN

@interface HCLoggerManager : NSObject

+ (void)configSDKLog;

@end

NS_ASSUME_NONNULL_END
