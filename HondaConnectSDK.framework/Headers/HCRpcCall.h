//
//  HCRpcCall.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/7.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 网络请求call

#import <Foundation/Foundation.h>
#import "HCRpcContext.h"

@class AFNetworking;
@class AFHTTPSessionManager;

NS_ASSUME_NONNULL_BEGIN


@interface HCRpcCall : NSObject

/**
 * 执行请求
 * GHAC SDK调用
 */
+ (BOOL)invoke:(HCRpcContext *)context;

/**慢网管执行请求 GHAC SDK调用*/
+ (BOOL)fileWayInvoke:(HCRpcContext *)context;

/**
 * 使用相应的Host执行请求
 * GHAC SDK调用
 */
+ (BOOL)invokeWithContext:(HCRpcContext *)context withHost:(NSString *)host;


/**
 * 执行请求
 * App调用
 */
+ (BOOL)appInvoke:(HCRpcContext *)context;

/**
 * 使用相应的Host执行请求
 * App调用
 */
+ (BOOL)appInvokeWithContext:(HCRpcContext *)context withHost:(NSString *)host withTimeout:(NSTimeInterval)timeout;


@end

NS_ASSUME_NONNULL_END
