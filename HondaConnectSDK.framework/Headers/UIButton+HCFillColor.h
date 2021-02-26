//
//  UIButton+HCFillColor.h
//  vspios-honda-app
//
//  Created by 郭琳琳 on 2019/8/8.
//  Copyright © 2019 郭琳琳. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (HCFillColor)

- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

@end

NS_ASSUME_NONNULL_END
