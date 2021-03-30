//
//  UITableView+HCEmptyData.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2019/9/2.
//  Copyright © 2019 贾宇恒. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (HCEmptyData)

@property (nonatomic, strong) UIImageView *tipsImageView;
@property (nonatomic, strong) UILabel *messageLabel;

/**
 tableView数据为空时提示

 @param message 提示信息
 @param image 提示图片
 @param rowCount numberOfRows
 */
- (void)showEmptyTipsWithMessage:(NSString *)message image:(UIImage *)image rowCount:(NSInteger)rowCount;

@end

NS_ASSUME_NONNULL_END
