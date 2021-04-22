//
//  HCRpcConfig.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/7.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HCTokenModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCRpcConfig : NSObject

+ (HCRpcConfig *)shareInstance;

/**
 * 服务网关地址
 */
@property(nonatomic, copy) NSString *gateway;

/**
 * 超时时间(默认15s)
 */
@property(nonatomic, assign) CGFloat timeoutInterval;

/**
 * 请求头
 */
@property(nonatomic, strong) NSMutableDictionary<NSString*, NSString*>* httpHeaders;

/**
 * token(访问令牌)
 */
@property (nonatomic, copy, readonly) NSString *token;


/**
 * 更新请求头(HTTPResponse)(App调用)
 */
+ (void) updateHttpHeadersWithHTTPResponse:(NSHTTPURLResponse *)urlResponse;

/**
 * 更新请求头(续租结果TokenModel)(App调用)
 */
+ (void) updateHttpHeadersWithTokenModel:(HCTokenModel *)tokenModel;

/**
 * 临时放到h文件，等hc3.0请求替换完成，放入m文件里
 */
+ (void) updateHttpHeadersWithAccessToken:(NSString *)accessToken withRefreshToken:(NSString *)refreshToken;

/**
 * 更新网关地址(SDK调用者使用)
 */
+ (void) updateHttpGateway:(NSString *)gateway;

/**
 * 更新请求头(SDK使用者调用)
 */
+ (void) updateHttpHeadersWithGHACToken:(NSString *)token;


@end

NS_ASSUME_NONNULL_END
