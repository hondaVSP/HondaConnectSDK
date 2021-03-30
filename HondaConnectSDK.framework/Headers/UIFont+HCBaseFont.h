//
//  UIFont+LGBaseFont.h
//  AFNetworking
//
//  Created by Zac on 2020/12/27.
//

#import <UIKit/UIKit.h>
#import "HCBaseDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (HCBaseFont)
+ (UIFont *)fontWithHCName:(NSString *)fontName size:(CGFloat)fontSize;
+ (UIFont *)fontWithHCFontFileName:(NSString *)fontFileName size:(CGFloat)fontSize;

@end

NS_ASSUME_NONNULL_END
