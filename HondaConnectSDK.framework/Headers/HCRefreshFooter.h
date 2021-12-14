//
//  HCRefreshFooter.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/3/13.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <MJRefresh/MJRefreshAutoStateFooter.h>
#import <MMMaterialDesignSpinner/MMMaterialDesignSpinner.h>
#import <MJRefresh/UIView+MJExtension.h>
#import <MJRefresh/UIScrollView+MJRefresh.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCRefreshFooter : MJRefreshAutoStateFooter

@property (strong, nonatomic) UIImageView *arrowView;
@property (strong, nonatomic) MMMaterialDesignSpinner *spinner;

@end

NS_ASSUME_NONNULL_END
