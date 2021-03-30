//
//  UITableView+HCCacheHeight.h
//  CellAutoHeightDemo
//
//  Created by huangyibiao on 16/1/22.
//  Copyright © 2016年 huangyibiao. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  基于Masonry自动布局实现的自动计算cell的行高扩展
 *  @github https://github.com/CoderJackyHuang
 *  @blog   http://www.henishuo.com/masonry-cell-height-auto-calculate/
 */
@interface UITableView (HCCacheHeight)

/**
 *	用于缓存cell的行高
 */
@property (nonatomic, strong, readonly) NSMutableDictionary *hc_cacheCellHeightDict;

/**
 *	用于获取或者添加计算行高的cell，因为理论上只有一个cell用来计算行高，以降低消耗
 */
@property (nonatomic, strong, readonly) NSMutableDictionary *hc_reuseCells;

@end
