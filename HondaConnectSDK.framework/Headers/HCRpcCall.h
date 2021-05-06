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

/**
 * 网络状态
 */
typedef NS_ENUM(NSInteger, HMNetworkStatus) {
    HMNetworkStatusUnknown          = -1,
    HMNetworkStatusNotReachable     = 0,
    HMNetworkStatusReachableViaWWAN = 1,
    HMNetworkStatusReachableViaWiFi = 2,
};

@interface HCRpcCall : NSObject

///// 有网YES, 无网NO
//- (BOOL)isNetwork;
//
///// 手机网络YES, 反之NO
//- (BOOL)isWWANNetwork;
//
///// WiFi网络YES, 反之NO
//- (BOOL)isWiFiNetwork;
//
///// 网络状态监听
//+ (void)observeNetworkStatusWithBlock:(void(^)(HMNetworkStatus))networkStatus;
//
///// 停止网络状态监听
//+ (void)stopObserveNetworkStatus;
//
//+(HMServiceCall *) shareServiceCall;
//
//@property(nonatomic, strong)AFHTTPSessionManager *manager;
//
//@property(nonatomic, strong, readonly) NSMutableArray *allSessionTask;  //存储着所有的请求task数组
//
///// 调用请求
//- (void)invoke:(NSString *)urlStr params:(NSDictionary *)params method:(HMRequestMethodType)method onSuccess:(void(^)(id resp))successBlock onFail:(void(^)(NSError *error, NSInteger httpStatusCode))failBlock;
//
//
///// 取消所有HTTP请求
//- (void)cancelAllRequest;
//
///// 取消指定URL的HTTP请求
//- (void)cancelRequestWithURL:(NSString *)URL;

/**
 * 执行请求
 * GHAC SDK调用
 */
+ (BOOL)invoke:(HCRpcContext *)context;

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
