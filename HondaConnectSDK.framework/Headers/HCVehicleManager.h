//
//  HCVehicleManager.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCVehicleListModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HCVehicleManagerDelegate <NSObject>

@required

/// GHACToken过期
- (void)onTokenInvaild;

@end

@interface HCVehicleManager : NSObject


@property (nonatomic, weak) id<HCVehicleManagerDelegate> delegate;

/**
 * 初始化Manager
 */
- (instancetype) initWithGHACToken:(NSString *)token;

/**
 * 更新GHACToken
 */
- (void) updateGHACToken:(NSString *)token;


/**
 * 获取车辆列表
 * successBlock 成功回调
 * failureBlock 服务器失败回调
 * errorBlock 请求失败回调
 */
+ (void) getVehicleListOnSuccess:(void (^)(NSArray<HCVehicleListModel*> *list))successBlock
                       onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
                         onError:(void (^)(NSDictionary *errorDictionary))errorBlock;

/**
 * 切换车辆
 */
+ (void) switchVehicle:(NSString *)vehicleId
             onSuccess:(void (^)(void))successBlock
             onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
               onError:(void (^)(NSDictionary *errorDictionary))errorBlock;


/**
 * 绑定车辆
 */
+ (void) bindVehicle:(NSString *)secretInfo
           onSuccess:(void (^)(void))successBlock
           onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
             onError:(void (^)(NSDictionary *errorDictionary))errorBlock;

/**获取车主自己的车*/
+ (void)getOwnVehicleListOnSuccess:(void (^)(NSArray<HCVehicleListModel*> *vehicleList))successBlock
                         onFailure:(void (^)(NSDictionary *error))failureBlock;

/**
 * 临时登录接口（未注册广本自动注册广本）
 */
+ (void) loginTest:(NSString *)phone
         onSuccess:(void (^)(NSString *token))successBlock
         onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
           onError:(void (^)(NSDictionary *errorDictionary))errorBlock;

@end

NS_ASSUME_NONNULL_END
