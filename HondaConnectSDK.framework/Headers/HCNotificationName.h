//
//  HCNotificationName.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//


#pragma mark - 车辆相关

/// 车辆列表变化通知
extern NSString *kHCNotificationVehicleListChanged;

/// 绑车成功通知
extern NSString *kHCNotificationVehicleBindSucceed;

/// 绑车失败通知
extern NSString *kHCNotificationVehicleBindFailed;

/// 控车成功通知
extern NSString *kHCNotificationCarControlSuccess;
/// 控车失败通知
extern NSString *kHCNotificationCarControlFailure;

///// 默认车辆变化通知
//extern NSString *kNotificationDefaultVehicleChanged;


#pragma mark - 地理围栏相关通知
/// 发送搜索结果给设置围栏页通知
extern NSString *kHCNotificationFenceSetFenceCenterInfo;

#pragma mark - 车友组队相关通知
/// 更新车队目的地
extern NSString *kHCNotificationUpdateDestination;
/// 更新车队名称
extern NSString *kHCNotificationUpdateTeamName;
/// 更新队伍成员
extern NSString *kHCNotificationUpdateTeamMembers;
/// 队长手动解散队伍
extern NSString *kHCNotificationCaptainDissolveTeam;
