//
//  HCTokenModel.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/4.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCTokenBodyModel : NSObject

@property(nonatomic, copy)   NSString *accessToken;
@property(nonatomic, copy)   NSString *expiresIn;
@property(nonatomic, copy)   NSString *refreshToken;

@end

@interface HCTokenModel : NSObject

@property (nonatomic, copy)   NSString *code;
@property (nonatomic, copy)   NSString *desc;
@property (nonatomic, assign) long responseTime;
@property (nonatomic, copy)   NSString *tips;
@property (nonatomic, strong) HCTokenBodyModel *responseBody;

@end


NS_ASSUME_NONNULL_END
