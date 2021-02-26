//
//  HCCoreRpcProtocol.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/7.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#ifndef HCCoreRpcProtocol_h
#define HCCoreRpcProtocol_h


/**
 * 返回对象协议
 */
@protocol HCRpcReturnObjectProtocol
@property(nonatomic, copy, readonly)   NSString *code;
@property(nonatomic, copy, readonly)   NSString *desc;
@property(nonatomic, assign, readonly) long responseTime;
@property(nonatomic, copy, readonly)   NSString *tips;
@property(nonatomic, strong, readonly) id responseBody;
@end



/**
 * 上下文协议
 */
@protocol HCRpcContextProtocl
@property(nonatomic,assign,readonly) BOOL isCanceled;
@property(nonatomic,assign,readonly) BOOL isFinished;
@property(nonatomic,assign,readonly) NSInteger httpStatus;
@property(nonatomic,assign,readonly) BOOL isOK;
@property(nonatomic,assign,readonly) id<HCRpcReturnObjectProtocol> returnResult;
-(void) cancel;
@end


#endif
