//
//  HKNetworkGroup.h
//  HKNetworkGroup
//
//  Created by 尹先生 on 2017/10/10.
//  Copyright © 2017年 GongM. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HCNetworkGroupPortocol<NSObject>

@required
/**
 获取异步请求数量以及设置异步请求body
 规则:异步请求同步返回

 @param semaphore 信号量
 @return 请求数量
 */
- (NSInteger)fetchRequestCountAndSetGroupBody:(dispatch_semaphore_t)semaphore;

@optional
/**
 并行组执行完毕调用
 */
- (void)groupAsyncCallback;
/**
 串行组执行完毕调用
 */
- (void)groupSyncCallback;

@end
@interface HCNetworkGroup : NSObject
/**
 并行网络请求
 */
- (void)groupAsyncRequest;

@property (nonatomic,weak) id<HCNetworkGroupPortocol> group_delegate;


@end
