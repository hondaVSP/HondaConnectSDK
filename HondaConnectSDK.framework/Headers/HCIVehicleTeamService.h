//
//  HCIVehicleTeamService.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/4.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCIVehicleTeamService : NSObject


/**
 * 创建车队
 */
+ (id<HCRpcContextProtocl>) createVehicleTeam:(NSString*)vinCode
                                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 查询车队详细信息
 */
+ (id<HCRpcContextProtocl>) getVehicleTeamDetail:(NSString*)vinCode
                                       onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                       onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 解散车队
 */
+ (id<HCRpcContextProtocl>) dissolveVehicleTeam:(NSString *)teamId
                        onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 加入车队
 */
+ (id<HCRpcContextProtocl>) joinVehicleTeam:(NSString*)vinCode
                             carTeamCommond:(NSString *)carTeamCommond
                                  onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                  onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 退出车队
 */
+ (id<HCRpcContextProtocl>) quitVehicleTeamOnSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                           onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 移除车队成员
 */
+ (id<HCRpcContextProtocl>) removeVehicleTeamMember:(NSString *)memberUserId
                                          onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                          onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 修改车队目的地
 */
+ (id<HCRpcContextProtocl>) updateVehicleTeamDestination:(NSString *)carTeamId
                        destinationSiteLon:(NSString *)destinationSiteLon
                        destinationSiteLat:(NSString *)destinationSiteLat
                        destinationAddress:(NSString *)destinationAddress
                        destinationName:(NSString *)destinationName
                        onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                        onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 修改车队名称
 */
+ (id<HCRpcContextProtocl>) updateVehicleTeamName:(NSString *)carTeamId
                                      carTeamName:(NSString *)carTeamName
                                        onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                        onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


@end

NS_ASSUME_NONNULL_END
