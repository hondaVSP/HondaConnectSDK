//
//  UIImage+HCExtension.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/3/2.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (HCExtension)

/**
 Returns a new image which is cropped from this image.
 
 @param rect  Image's inner rect.
 
 @return      The new image, or nil if an error occurs.
 */
- (nullable UIImage *)imageByCropToRect:(CGRect)rect;


@end

NS_ASSUME_NONNULL_END
