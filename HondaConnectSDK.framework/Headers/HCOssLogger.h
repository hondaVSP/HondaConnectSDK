//
//  HCOssLogger.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/4/9.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <CocoaLumberjack/CocoaLumberjack.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCOssLoggerFormatter : NSObject <DDLogFormatter>

@end

@interface HCOssLogger : DDAbstractLogger


@end

NS_ASSUME_NONNULL_END
