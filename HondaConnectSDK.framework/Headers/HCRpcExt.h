//
//  HCRpcExt.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/7.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AFSecurityPolicy, AFURLSessionManager, HCRpcContext;

static inline BOOL isObjNull(id obj) {
    return !obj || obj == [NSNull null];
}

//主线程主队列
#ifndef dispatch_main_async_safe
#define dispatch_main_async_safe(block)\
    if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(dispatch_get_main_queue())) {\
        block();\
    } else {\
        dispatch_async(dispatch_get_main_queue(), block);\
    }
#endif

/**
 * 请求类型
 */
typedef NS_ENUM(NSInteger, HCRpcRequestMethod) {
    HCRpcRequestMethod_GET,
    HCRpcRequestMethod_POST,
    HCRpcRequestMethod_DELETE,
    HCRpcRequestMethod_PUT,
};

#pragma mark - Rpc工具类
@interface HCRpcUtils : NSObject

/**
 * 请求地址是否需要验证请求头
 */
+ (BOOL)urlNeedAuthorization:(NSString *)url;

/**
 * 自定义AF的安全策略
 */
+ (AFSecurityPolicy*)customSecurityPolicy;

/**
 * 校验证书
 */
+ (void)checkCredential:(AFURLSessionManager *)manager;

/**
 * 续租accessToken
 */
+ (void)invokeRefreshTokenOnSuccess:(void (^)(void))successBlock;

/**
 * 执行RpcCache
 */
+ (BOOL)invokeRpcCache:(HCRpcContext *)context host:(NSString *)host;

@end

#pragma mark - Rpc任务队列
@interface HCRpcTaskQueue : NSOperationQueue

+ (instancetype)shareInstance;

@end


#pragma mark - Rpc缓存
@interface HCRpcCaches : NSObject

@property (nonatomic, strong, readonly) NSMutableArray<HCRpcContext*> *caches;

@property (atomic, assign) BOOL refreshing;

+ (HCRpcCaches *)shareInstance;

/**
 * 添加RpcContext
 */
- (void)addRpcContext:(HCRpcContext *)context;

/**
 * 移除某一RpcContext
 */
- (void)removeRpcContext:(HCRpcContext *)context;

/**
 * 取消所有HTTP请求
 */
- (void)cancelAllRequest;

/**
 * 取消所有HTTP请求，清空RpcCaches
 */
- (void)clearRpcCaches;

@end


//#pragma mark - 服务器返回续租Token模型
//@interface HCTokenBodyModel : NSObject
//
//@property(nonatomic, copy)   NSString *access_token;
//@property(nonatomic, copy)   NSString *expires_in;
//@property(nonatomic, copy)   NSString *refresh_token;
//
//@end
//
//@interface HCTokenModel : NSObject
//
//@property (nonatomic, copy)   NSString *code;
//@property (nonatomic, copy)   NSString *desc;
//@property (nonatomic, assign) long responseTime;
//@property (nonatomic, copy)   NSString *tips;
//@property (nonatomic, strong) HCTokenBodyModel *responseBody;
//
//@end

