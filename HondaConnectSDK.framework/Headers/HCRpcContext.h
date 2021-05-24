//
//  HCRpcContext.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/7.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"
#import "HCRpcResult.h"
#import "HCRpcConst.h"
#import "HCRpcExt.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCRpcContext : NSObject <HCRpcContextProtocl>

@property(nonatomic, copy)   NSString *uri;
@property(nonatomic, copy)   NSDictionary *argDict;
@property(nonatomic, assign) HCRpcRequestMethod method;

@property(nonatomic, copy)   void (^argSuccessBlock)(id<HCRpcContextProtocl> context);
@property(nonatomic, copy)   void (^argFailBlock)(id<HCRpcContextProtocl> context);
@property(nonatomic, assign) BOOL encrypt;
@property(nonatomic, assign) BOOL decrypt;

@property(nonatomic, assign) NSInteger httpStatus;
@property(nonatomic, strong) HCRpcResult *returnResult;
@property(nonatomic, strong) NSURLSessionDataTask *_Nullable task;


- (void)setInvoke:(NSString *)uri args:(NSDictionary *)args method:(HCRpcRequestMethod)method onSuccess:(void (^)(id<HCRpcContextProtocl>))successBlock onFail:(void (^)(id<HCRpcContextProtocl>))failBlock encrypt:(BOOL)encrypt decrypt:(BOOL)decrypt;

- (BOOL)invoke;
/**慢网关调用*/
- (BOOL)filegateWayInvoke;

- (BOOL)appInvoke;

- (void)setReturnObject:(NSDictionary*)dict;

- (void)setRequestDone:(BOOL)isOK;

@end

NS_ASSUME_NONNULL_END
