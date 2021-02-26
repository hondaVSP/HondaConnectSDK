//
//  HCIVehicleFenceService.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/3/5.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"
#import <CoreLocation/CoreLocation.h>
//#import "HMCommonResult.h"
//@class BaseViewController;

NS_ASSUME_NONNULL_BEGIN

//地理围栏警告类型
typedef NS_ENUM(NSUInteger, HCFenceWarningType) {
    HCFenceWarningType_In     = 1,    //驶入警告
    HCFenceWarningType_Out    = 2,    //驶出警告
    HCFenceWarningType_InOut  = 3,    //驶入驶出警告
};

@interface HCIVehicleFenceService : NSObject


/**
 * 创建电子围栏
 */
+ (id<HCRpcContextProtocl>) createFence:(NSString*)vinCode
                              rangeName:(NSString *)rangeName
                            warningType:(HCFenceWarningType)warningType
                             centerName:(NSString *)centerName
                            addressCoor:(CLLocationCoordinate2D)coor
                           centerRadius:(NSString *)centerRadius
                             mapPicture:(UIImage *)mapPicture
                              onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                              onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 修改电子围栏
 */
+ (id<HCRpcContextProtocl>) updateFence:(NSString*)vinCode
                                fenceId:(NSString *)fenceId
                              rangeName:(NSString *)rangeName
                            warningType:(HCFenceWarningType)warningType
                             centerName:(NSString *)centerName
                            addressCoor:(CLLocationCoordinate2D)coor
                           centerRadius:(NSString *)centerRadius
                             mapPicture:(UIImage *)mapPicture
                              onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                              onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/**
 * 删除电子围栏
 */
+ (id<HCRpcContextProtocl>) deleteFence:(NSString *)fenceId
                              onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                              onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 查询电子围栏列表
 */
+ (id<HCRpcContextProtocl>) selectFenceList:(NSString*)vinCode
                                  onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                  onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/**
 * 设置电子围栏状态
 */
+ (id<HCRpcContextProtocl>) setFenceActive:(NSString*)fenceId
                                 useStatus:(BOOL)useStatus
                                 onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                                 onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
