//
//  HKToast.h
//  HKSample
//
//  Created by yangzhi on 16/9/6.
//  Copyright © 2016年 yangzhi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HCBaseToast : UIView

+ (id)sharedInstance;

/** 显示  默认时间1.5s */
- (void)show:(NSString *)str;

/** 显示  自定义时间 */
- (void)show:(NSString *)str duration:(float)time;

- (void)dismiss;


@end
