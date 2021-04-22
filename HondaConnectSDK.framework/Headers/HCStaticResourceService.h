//
//  HCStaticResourceService.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/4/21.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//
///静态资源服务

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCStaticResourceService : NSObject

/**
 * 查询相应的HTML5资源地址
 */
+ (id<HCRpcContextProtocl>) getWebUrlWithName:(NSString *)resName
                        onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock
                        onFailure:(void (^)(id<HCRpcContextProtocl>))failureBlock;

@end

NS_ASSUME_NONNULL_END
