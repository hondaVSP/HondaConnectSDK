//
//  HCIFlowDataService.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/4/21.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//
//流量管理服务

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCIFlowDataService : NSObject

/**
 * 获取流量管理URL
 */
+ (id<HCRpcContextProtocl>) getFlowDataWebUrl:(NSString *)vinCode
                    onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                    onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
