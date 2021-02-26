//
//  HCVehicleListModel.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/18.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCVehicleListModel : NSObject

/**人车关系ID*/
@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *vinCode;

@property (nonatomic, copy) NSString *carNickName;
/**是否默认车辆*/
@property (nonatomic, assign) BOOL currFlag;
/**是否车主*/
@property (nonatomic, assign) BOOL identity;
/**授权方式 (若为授权车辆) 0:共同用车人  1:临时授权  2:单次授权*/
@property (nonatomic, assign) NSInteger authorizationType;
/**授权ID  (若为授权车辆，才不为空)*/
@property (nonatomic, copy) NSString *authorizationId;
/**创建时间*/
@property (nonatomic, copy) NSString *createTime;
/**车型名称*/
@property (nonatomic, copy) NSString *modelName;
/**车型图片URL*/
@property (nonatomic, copy) NSString *modelImgUrl;
/**城市编码*/
@property (nonatomic, copy) NSString *cityCode;


@end

NS_ASSUME_NONNULL_END
