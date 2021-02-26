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


///**
// * 更新请求头(HTTPResponse)
// */
//+ (void) updateHttpHeadersWithHTTPResponse:(NSHTTPURLResponse *)urlResponse;

///**
// * 更新请求头(续租结果TokenModel)
// */
//+ (void) updateHttpHeadersWithTokenModel:(HCTokenModel *)tokenModel;

/**
 * 更新请求头(SDK使用者调用)
 */
+ (void) updateHttpHeadersWithGHACToken:(NSString *)token;


@end

NS_ASSUME_NONNULL_END
