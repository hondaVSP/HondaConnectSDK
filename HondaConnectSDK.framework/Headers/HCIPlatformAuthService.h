//
//  HCIPlatformAuthService.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/9.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 第三方授权请求服务

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCIPlatformAuthService : NSObject

/**
 * 查询第三方授权信息。包括喜马拉雅FM、考拉FM等
 */
+ (id<HCRpcContextProtocl>) getBindPlatformInfoOnSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                        onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 获取喜马拉雅授权HTML5页面URL
 */
+ (id<HCRpcContextProtocl>) getPlatformBindOfXMLYOnSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                        onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 喜马拉雅授权确认
 */
+ (id<HCRpcContextProtocl>) bindOfXMLY:(NSString *)code
                              withCpId:(NSInteger)cpId
                          withDeviceId:(NSString *)deviceId
                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 喜马拉雅取消授权
 */
+ (id<HCRpcContextProtocl>) unbindOfXMLY:(NSInteger)cpId
                onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
            onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 获取考拉授权HTML5页面URL
 */
+ (id<HCRpcContextProtocl>) getPlatformBindOfKoala:(NSString *)deviceId
                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 考拉取消授权
 */
+ (id<HCRpcContextProtocl>) unbindOfKoalaOnSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;



@end

NS_ASSUME_NONNULL_END
