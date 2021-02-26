//
//  HCWebViewModel.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/18.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import "HCViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCWebViewModel : HCViewModel

//链接地址
@property(nonatomic,strong) NSString* URL;

//HTML内容（存在URL情况下自动忽略本参数）
@property(nonatomic,strong) NSString* content;

//使用html的title标签作为标题 //defalut YES
@property(nonatomic,assign) BOOL autoTitle;

//显示加载进度条 //defalut YES
@property(nonatomic,assign,getter=isShowProgressBar) BOOL showProgressBar;

//底下留出高度（底部防止其他按钮等需要时设置,默认0 建议只在子类设置）
@property(nonatomic,assign) CGFloat bottom;

//
@property(nonatomic,assign) BOOL cleanCache;

@end

NS_ASSUME_NONNULL_END
