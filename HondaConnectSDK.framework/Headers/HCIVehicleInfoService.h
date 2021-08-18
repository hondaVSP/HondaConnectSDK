//
//  HCIVehicleInfoService.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"
#import <CoreLocation/CoreLocation.h>


NS_ASSUME_NONNULL_BEGIN

@interface HCIVehicleInfoService : NSObject


/**
 * 查询用户授权车辆列表
 */
+ (id<HCRpcContextProtocl>) getVehicleListWithIdentity:(NSString *)identity
                                               vinCode:(NSString *)vinCode
                                             onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                             onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 切换车辆
 */
+ (id<HCRpcContextProtocl>) switchVehicle:(NSString *)vehicleId
                                onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 查询车辆状态
 */
+ (id<HCRpcContextProtocl>) getVehicleStatus:(NSString *)vinCode
                                   onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                   onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 查询车辆信息
 */
+ (id<HCRpcContextProtocl>) getVehicleInfoWithVinCode:(NSString *)vinCode
                                   onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                   onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 绑定车辆
 */
//+ (id<HCRpcContextProtocl>) bindVehicle:(NSString *)secretInfo
//                              onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
//                              onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 绑定车辆 SDK调用使用此方法
 */
+ (id<HCRpcContextProtocl>) bindVehicle:(NSString *)secretInfo
                                vinCode:(NSString *)vinCode
                        onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                        onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 APP根据vin查看功能显隐列表
 */
+ (id<HCRpcContextProtocl>) vehicleFunctionSetting:(NSString *)vinCode
                                         onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                         onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**获取车主自己的车*/
+ (id<HCRpcContextProtocl>)getOwnVehicleListOnSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                            onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 临时登录接口（未注册广本自动注册广本）
 */
+ (id<HCRpcContextProtocl>) loginTest:(NSString *)phoneNum
                            onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                            onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;
/**获取车辆设置消息开关*/
+ (id<HCRpcContextProtocl>)checkVehicleMessageSettingStateWithWinCode:(NSString *)vinCode
                                                            onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                                            onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;
/**设置车辆设置页驾驶报告开关*/
+ (id<HCRpcContextProtocl>)setDrivingReportOn:(NSInteger)on
                                      vinCode:(NSString *)vinCode
                                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**设置车辆设置页ETC服务开关*/
+ (id<HCRpcContextProtocl>)setEtcStatusOn:(NSInteger)on
                                  vinCode:(NSString *)vinCode
                                onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**设置车辆设置页消息推送开关*/
+ (id<HCRpcContextProtocl>)setMessageSwitchOn:(NSInteger)on
                                          key:(NSString *)key
                                      vinCode:(NSString *)vinCode
                                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**修改车辆昵称*/
+ (id<HCRpcContextProtocl>)modifyVehicleNickname:(NSString *)nickname
                                         vinCode:(NSString *)vinCode
                                       onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                       onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**获取解绑车辆验证码*/
+ (id<HCRpcContextProtocl>)getVerificationCodeForRelievingVehicleOnSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                                                 onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**解绑车辆*/
+ (id<HCRpcContextProtocl>)relieveVehicleWithVinCode:(NSString *)vinCode
                                                code:(NSString *)code
                                           onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                           onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;
 
/**
 * 查询车辆位置信息
 */
+ (id<HCRpcContextProtocl>) getVehicleLocation:(NSString*)vinCode
                                     onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                     onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 发送到车
 */
+ (id<HCRpcContextProtocl>) sendToCar:(NSString*)vinCode
                            pointName:(NSString *)pointName
                         pointAddress:(NSString *)pointAddress
                         coordinate2D:(CLLocationCoordinate2D)coor
                        pointProvince:(nullable NSString *)pointProvince
                            pointCity:(nullable NSString *)pointCity
                            pointArea:(nullable NSString *)pointArea
                            onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                            onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**控车*/
+ (id<HCRpcContextProtocl>)vehicleControlWithVinCode:(NSString *)vinCode
                                   controlParameters:(NSDictionary *)parameters
                                           onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                           onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**轮询控车结果*/
+ (id<HCRpcContextProtocl>)checkControlResult:(NSString *)requestId
                                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**获取车载导航记录列表*/
+ (id<HCRpcContextProtocl>)getNavigationRecordsWithVinCode:(NSString *)vinCode
                                                      page:(NSInteger)page
                                                 onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                                 onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**获取导航详情*/
+ (id<HCRpcContextProtocl>)getNavigationDetailWithVinCode:(NSString *)vinCode
                                                startTime:(long)startTime
                                                  endTime:(long)endTime
                                                onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                                onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
