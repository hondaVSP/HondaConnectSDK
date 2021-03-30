//
//  HCRefreshBackNormalFooter.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/3/13.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <MJRefresh/MJRefreshBackNormalFooter.h>
#import <MMMaterialDesignSpinner/MMMaterialDesignSpinner.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCRefreshBackNormalFooter : MJRefreshBackNormalFooter

@property (strong, nonatomic) MMMaterialDesignSpinner *spinner;

@end

NS_ASSUME_NONNULL_END
