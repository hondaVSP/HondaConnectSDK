//
//  HCRpcResult.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/7.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCCoreRpcProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCRpcResult : NSObject <HCRpcReturnObjectProtocol>

@property(nonatomic, copy, readonly)   NSString *code;
@property(nonatomic, copy, readonly)   NSString *desc;
@property(nonatomic, assign, readonly) long responseTime;
@property(nonatomic, copy, readonly)   NSString *tips;
@property(nonatomic, strong, readonly) id responseBody;

- (instancetype)initWithDict:(NSDictionary*)dict;

@end

NS_ASSUME_NONNULL_END
