//
//  HCIVehicleAuthService.h
//  HondaConnectSDK_Example
//
//  Created by 贾宇恒 on 2021/3/12.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCIVehicleAuthService : NSObject

/**验证被授权人手机号*/
+ (id<HCRpcContextProtocl>)verifyPhoneNumber:(NSString *)phoneNumber vinCode:(NSString *)vinCode onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 发送授权
/// @param userId 被授权人userId
/// @param authType 授权方式
/// @param authScope 授权范围
/// @param parameters 时间参数
+ (id<HCRpcContextProtocl>)sendAuthWithVinCode:(NSString *)vinCode
                                    authUserId:(NSString *)userId
                                      authType:(NSInteger)authType
                                     authScope:(NSInteger)authScope
                                 dateParameter:(NSDictionary *)parameters
                                     onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                     onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 拉去授权车辆信息
/// @param userId 被授权人userId
+ (id<HCRpcContextProtocl>)checkAuthVehicleWithVinCode:(NSString *)vinCode
                                            authUserId:(NSString *)userId
                                             onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                             onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/// 修改授权
/// @param authorizationId 被授权人id
/// @param startDate 开始时间
/// @param expiration 结束时间
+ (id<HCRpcContextProtocl>)modifyAuthWithAuthorizationId:(NSString *)authorizationId
                                               startDate:(NSString *)startDate
                                              expiration:(NSString *)expiration
                                               onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                               onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 操作授权
/// @param operation 收回, 放弃, 归还
/// @param authorizationId 被授权人ID
+ (id<HCRpcContextProtocl>)handleAuthWithOperation:(NSInteger)operation
                                   authorizationId:(NSString *)authorizationId
                                         onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                         onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/// 授权详情
/// @param authorizationId 被授权人id
+ (id<HCRpcContextProtocl>)getAuthDetailWithAuthorizationId:(NSString *)authorizationId
                                                  onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                                  onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 查看或我获得的授权列表
/// @param identity 身份(车主1, 非车主0)
+ (id<HCRpcContextProtocl>)getAuthVehiclesWithIdentity:(NSInteger)identity
                                             onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                             onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
