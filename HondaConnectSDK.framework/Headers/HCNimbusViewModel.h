//
//  HCNimbusViewModel.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import "HCViewModel.h"
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface HCNimbusViewModel : HCViewModel


@property(nonatomic,assign) CGFloat searchBarHeight;

@property(nonatomic,assign) CGFloat bottomBarHeight;

@property(nonatomic,assign) UITableViewStyle tableStyle;

@property(nonatomic,assign) UITableViewCellSeparatorStyle separatorStyle;

@property(nonatomic,strong) UIColor* separatorColor;

@property(nonatomic,strong) UIColor* mainTabBackgroundColor;

@property(nonatomic,assign) CGFloat heightForHeaderInEmptySection;

@property(nonatomic,assign) CGFloat heightForFooterInSection;

@property(nonatomic,assign) CGFloat heightForHeaderInSection;


@property(nonatomic, strong) UIImage *emptyImage;

@property(nonatomic, copy)   NSString *emptyLabelText;

@property(nonatomic, strong) UIFont *emptyLabelFont;

@property(nonatomic, strong) UIColor *emptyLabelColor;

@property(nonatomic, assign) CGFloat emptyspaceHeightForEmptyDataSet;


@end


NS_ASSUME_NONNULL_END
