//
//  UILabel+Extension.h
//  Snapshot
//
//  Created by suyuxuan on 16/7/6.
//  Copyright © 2016年 sujie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (HCExtension)

/*
 设置label行间距
 
 param:     lineSpace  间距高度
 str        label.text
 */
- (void)setLineSpace:(float)lineSpace text:(NSString *)str;

/**
 *  设置label行间距
 *
 *  @param lineSpace 间距高度
 *  @param aatrStr   属性字符串
 */
-(void)setLineSpace:(float)lineSpace attributedText:(NSAttributedString *)aatrStr;


/*
 获取动态label的size
 
 param:     text        label.text
 fontSize    字号
 maxSize     最大宽高限制
 lineSpace   间距高度
 */
+ (CGSize)labelAutoCalculateRectWith:(NSString*)text font:(UIFont *)font MaxSize:(CGSize)maxSize lineSpace:(float)lineSpace;

@end
