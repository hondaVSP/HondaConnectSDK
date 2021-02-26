//
//  HCUIScale.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Masonry/Masonry.h>


////缩放高度（根据屏幕全宽）(以iphone6为标准尺寸)
extern CGFloat hc_scale_by_screen_width(CGFloat height);

//缩放缩放高度（及少数情况下使用 (以iphone6为标准尺寸)
extern CGFloat hc_scale_by_screen_height(CGFloat height);

////自定义尺寸进行高度缩放
extern CGFloat hc_scale_height(CGFloat height, CGFloat width, CGFloat realWidth);

extern CGRect hc_scale_rect(CGRect rect);

extern CGSize hc_scale_size(CGSize size);



@interface UIFont (Scale)
+ (UIFont *) hc_scale_systemFontOfSize:(CGFloat)fontSize;
+ (UIFont *) hc_scale_boldSystemFontOfSize:(CGFloat)fontSize;
@end



@interface MASConstraint(Scale)
- (MASConstraint * (^)(CGFloat var))hc_scale_equalTo;
- (MASConstraint * (^)(CGSize size))hc_scale_equalToSize;
- (MASConstraint * (^)(CGFloat offset))hc_scale_offset;
- (MASConstraint * (^)(CGFloat var))hc_scale_equalTo_by_screen_heigh;
- (MASConstraint * (^)(CGFloat var))hc_scale_offset_by_screen_heigh;
@end


