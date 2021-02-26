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


/// 车队数据创建
//+ (void)createCarTeam:(BaseViewController *)viewController
//            onSuccess:(void (^)(HMCommonResult * result))successBlock
//            onFailure:(void (^)(NSError * _Nonnull error))failureBlock;
/**
 * 创建车队
 */
+ (id<HCRpcContextProtocl>) createVehicleTeam:(NSString*)vinCode
                                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 车队详细信息查询
//+ (void)selCarTeamDetailOnSuccess:(void (^)(HMCommonResult * result))successBlock
//                        onFailure:(void (^)(NSError * _Nonnull error))failureBlock;

/**
 * 查询车队详细信息
 */
+ (id<HCRpcContextProtocl>) getVehicleTeamDetail:(NSString*)vinCode
                                       onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                       onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


///// 队长解散车队
//+ (void)leaderDissolveTeam:(BaseViewController *)viewController
//                 carTeamId:(NSString *)carTeamId
//                 onSuccess:(void (^)(HMCommonResult * result))successBlock
//                 onFailure:(void (^)(NSError * _Nonnull error))failureBlock;

/**
 * 解散车队
 */
+ (id<HCRpcContextProtocl>) dissolveVehicleTeam:(NSString*)vinCode
                                         teamId:(NSString *)teamId
                                      onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                      onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;



///// 成员加入车队
//+ (void)memberJoinTeam:(BaseViewController *)viewController
//        carTeamCommond:(NSString *)carTeamCommond
//             onSuccess:(void (^)(HMCommonResult * result))successBlock
//             onFailure:(void (^)(NSError * _Nonnull error))failureBlock;

/**
 * 加入车队
 */
+ (id<HCRpcContextProtocl>) joinVehicleTeam:(NSString*)vinCode
                             carTeamCommond:(NSString *)carTeamCommond
                                  onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                  onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;



///// 成员退出车队
//+ (void)memberQuitTeam:(BaseViewController *)viewController
//             onSuccess:(void (^)(HMCommonResult * result))successBlock
//             onFailure:(void (^)(NSError * _Nonnull error))failureBlock;

/**
 * 退出车队
 */
+ (id<HCRpcContextProtocl>) quitVehicleTeamOnSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                           onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

///// 队长移除车队成员
//+ (void)leaderDeleteMember:(BaseViewController *)viewController
//              memberUserId:(NSString *)memberUserId
//                 onSuccess:(void (^)(HMCommonResult * result))successBlock
//                    onFailure:(void (^)(NSError * _Nonnull error))failureBlock;

/**
 * 移除车队成员
 */
+ (id<HCRpcContextProtocl>) removeVehicleTeamMember:(NSString *)memberUserId
                                          onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                          onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

///// 队长修改车队目的地
//+ (void)leaderUpdateDestination:(BaseViewController *)viewController
//                      carTeamId:(NSString *)carTeamId
//             destinationSiteLon:(NSString *)destinationSiteLon
//             destinationSiteLat:(NSString *)destinationSiteLat
//             destinationAddress:(NSString *)destinationAddress
//                destinationName:(NSString *)destinationName
//                      onSuccess:(void (^)(HMCommonResult * result))successBlock
//                      onFailure:(void (^)(NSError * _Nonnull error))failureBlock;

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

///// 队长修改车队名称
//+ (void)leaderUpdateTeamName:(BaseViewController *)viewController
//                 carTeamName:(NSString *)carTeamName
//                   carTeamId:(NSString *)carTeamId
//                   onSuccess:(void (^)(HMCommonResult * result))successBlock
//                   onFailure:(void (^)(NSError * _Nonnull error))failureBlock;

/**
 * 修改车队名称
 */
+ (id<HCRpcContextProtocl>) updateVehicleTeamName:(NSString *)carTeamId
                                      carTeamName:(NSString *)carTeamName
                                        onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                        onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


@end

NS_ASSUME_NONNULL_END
