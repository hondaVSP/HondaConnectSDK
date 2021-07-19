//
//  HCUIDefine.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/11.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#ifndef HCUIDefine_h
#define HCUIDefine_h

#pragma mark -  ================  颜色规范  ================
/// 背景用色
#define COLOR_BG_F5F5F8     [UIColor colorWithHexString:@"f5f5f8"]
#define COLOR_BG_034D9F     [UIColor colorWithHexString:@"034d9f"]  //首页顶部蓝底

/// QMapView的strokeColor和fillColor
#define COLOR_94C6FF        [UIColor colorWithHexString:@"94c6ff"]
#define COLOR_2565AC        [UIColor colorWithHexString:@"2565ac"]

/// 分割线颜色
#define COLOR_E4E4E4        [UIColor colorWithHexString:@"e4e4e4"] //[分割线1]白色内容中的分割线，例：列表页面等
#define COLOR_DADADD        [UIColor colorWithHexString:@"dadadd"] //自定义弹窗 分割线颜色

/// 文字用色
#define COLOR_TEXT_333333   [UIColor colorWithHexString:@"333333"] //[文字0]标题、内容标题、功能按钮说明文字、输入框输入文字、正文等主要文字
#define COLOR_TEXT_FFFFFF   [UIColor colorWithHexString:@"ffffff"] //[文字1] 按钮文字（深色正常状态按钮）
#define COLOR_TEXT_D7D7D7   [UIColor colorWithHexString:@"d7d7d7"] //[文字3] 输入框提示性文字
#define COLOR_TEXT_999999   [UIColor colorWithHexString:@"999999"] //[文字6] 提示文字/说明文字
#define COLOR_TEXT_393F53   [UIColor colorWithHexString:@"393f53"] //[文字8] 重要、醒目文字
#define COLOR_TEXT_797979   [UIColor colorWithHexString:@"797979"] //[文字10] 标签栏说明文字默认状态
#define COLOR_TEXT_393F53   [UIColor colorWithHexString:@"393f53"] //[文字13] 可点击、链接文字
#define COLOR_TEXT_666666   [UIColor colorWithHexString:@"666666"]
#define COLOR_TEXT_5ED9AF   [UIColor colorWithHexString:@"5ed9af"]
#define COLOR_TEXT_AAAAAA   [UIColor colorWithHexString:@"aaaaaa"]
#define COLOR_TEXT_38597E   [UIColor colorWithHexString:@"38597e"]
#define COLOR_TEXT_F23A3A   [UIColor colorWithHexString:@"f23a3a"]
#define COLOR_TEXT_5588C1   [UIColor colorWithHexString:@"5588c1"]
#define COLOR_TEXT_345478   [UIColor colorWithHexString:@"345478"]
#define COLOR_TEXT_F5A623   [UIColor colorWithHexString:@"f5a623"]
#define COLOR_TEXT_72A7E1   [UIColor colorWithHexString:@"72a7e1"]
#define COLOR_TEXT_0C54A6   [UIColor colorWithHexString:@"0c54a6"]
#define COLOR_TEXT_E50020   [UIColor colorWithHexString:@"e50020"]
#define COLOR_EEEEEE        [UIColor colorWithHexString:@"eeeeee"]


/// 图标用色
#define COLOR_ICON_797979   [UIColor colorWithHexString:@"797979"] //[图标1] 标签栏图标默认状态
#define COLOR_ICON_E41628   [UIColor colorWithHexString:@"e41628"] //[图标2] 标签栏图标选中/点击状态
#define COLOR_ICON_868E98   [UIColor colorWithHexString:@"868E98"] //[图标3] 功能图标，例：首页控车等功能性图标
#define COLOR_ICON_333333   [UIColor colorWithHexString:@"333333"] //[图标4] 功能图标，例：地图相关页面放大缩小追踪等
#define COLOR_ICON_B0B7BA   [UIColor colorWithHexString:@"b0b7ba"] //[图标5] 下拉刷新转圈默认颜色(个别页面外部设置为其他色，白色等)
#define COLOR_ICON_91C3FB   [UIColor colorWithHexString:@"91c3fb"]
#define COLOR_ICON_69DEB5   [UIColor colorWithHexString:@"69deb5"]
#define COLOR_ICON_0551A4   [UIColor colorWithHexString:@"0551a4"]
#define COLOR_ICON_0C54A6   [UIColor colorWithHexString:@"0c54a6"]
#define COLOR_ICON_E50020   [UIColor colorWithHexString:@"e50020"]


#pragma mark -  ================  文字规范  ================
/// 文字规范
#define FONT_SIZE_18        [UIFont hc_scale_systemFontOfSize:18]    //少数文字(例如顶部标题)
#define FONT_SIZE_16        [UIFont hc_scale_systemFontOfSize:16]
#define FONT_SIZE_15        [UIFont hc_scale_systemFontOfSize:15]    //重要文字(例如首页的模块名称、大按钮内的字体等)
#define FONT_SIZE_14        [UIFont hc_scale_systemFontOfSize:14]    //大多数文字(例如首页的模块名称、大段文本、大标题等)
#define FONT_SIZE_13        [UIFont hc_scale_systemFontOfSize:13]    //较为重要文字(例如副标题、顶部两边的按钮文字)
#define FONT_SIZE_12        [UIFont hc_scale_systemFontOfSize:12]    //较为重要文字(例如栏目副标题、模块描述、顶部下方tab)
#define FONT_SIZE_11        [UIFont hc_scale_systemFontOfSize:11]    //
#define FONT_SIZE_10        [UIFont hc_scale_systemFontOfSize:10]    //辅助性文字
#define FONT_SIZE_9         [UIFont hc_scale_systemFontOfSize:9]     //
#define FONT_SIZE_24        [UIFont hc_scale_systemFontOfSize:24]    //少数文字(例如车友组队标题)
#define FONT_BOLD_SIZE_130  [UIFont hc_scale_boldSystemFontOfSize:130]   //车辆里程文字
#define FONT_BOLD_SIZE_15   [UIFont hc_scale_boldSystemFontOfSize:15]
#define FONT_BOLD_SIZE_18   [UIFont hc_scale_boldSystemFontOfSize:18]


#endif

