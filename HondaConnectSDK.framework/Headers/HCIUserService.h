//
//  HCIUserService.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/4/7.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCIUserService : NSObject

/**
 * 查询是否有待审核的车主认证--点击车主认证按钮时
 */
+ (id<HCRpcContextProtocl>) userGetVehicleOwnerAuthStatus:(NSString *)vinCode
            onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
            onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
