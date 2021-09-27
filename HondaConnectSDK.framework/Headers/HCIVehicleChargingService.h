//
//  HCIVehicleChargingService.h
//  HondaConnectSDK
//
//  Created by 贾宇恒 on 2021/9/16.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCIVehicleChargingService : NSObject

/// 充电 放电极限值查询
+ (id<HCRpcContextProtocl>)queryLimitSetting:(NSString *)vincode userId:(NSString *)userId onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;
/**充电 放电极限值设定*/
+ (id<HCRpcContextProtocl>)limitSettingWithVinCode:(NSString *)vinCode parameters:(NSDictionary *)parameters onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;
/**查询定时充电列表*/
+ (id<HCRpcContextProtocl>)checkTimingChargeListWithVinCode:(NSString *)vinCode userId:(NSString *)userId onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 定时充电任务修改
/// @param taskId 任务id
/// @param taskNo 任务number
/// @param parameters 需要更新的参数字典
+ (id<HCRpcContextProtocl>)updateTimingChargeWithId:(NSString *)taskId taskNo:(NSString *)taskNo vinCode:(NSString *)vinCode userId:(NSString *)userId updateParameters:(NSDictionary *)parameters onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 删除定时充电任务
/// @param taskId 任务id
/// @param taskNo 任务号
+ (id<HCRpcContextProtocl>)deleteTimingChargeWithId:(NSString *)taskId taskNo:(NSString *)taskNo vinCode:(NSString *)vinCode userId:(NSString *)userId onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

/// 新增定时充电任务
/// @param startTime 开始时间
/// @param endTime 结束时间
/// @param position 地点
/// @param weeks 星期数组
+ (id<HCRpcContextProtocl>)insertTimingChargeWithVinCode:(NSString *)vinCode userId:(NSString *)userId startTime:(NSString *)startTime endTime:(NSString *)endTime position:(NSInteger)position weeks:(NSArray *)weeks onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;


/// 查询供电履历
/// @param page 页码
+ (id<HCRpcContextProtocl>)checkDischargeRecords:(NSInteger)page vinCode:(NSString *)vinCode userId:(NSString *)userId onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
