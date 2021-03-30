//
//  HCViewModel.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCViewModel : NSObject

/**
 * 当前controllerName (只读属性)
 */
@property (nonatomic, readonly, copy) NSString *viewControllerName;


/**
 * titile
 */
@property (nonatomic, readwrite, copy) NSString *title;

/**
 * 是否取消掉左滑pop到上一层的功能（栈底控制器无效），默认为NO，不取消)
 */
@property (nonatomic, readwrite, assign) BOOL interactivePopDisabled;

/**
 * 是否隐藏该控制器的导航栏 默认是不隐藏 (NO)
 */
@property (nonatomic, readwrite, assign) BOOL prefersNavigationBarHidden;

/**
 * 是否隐藏该控制器的导航栏底部的分割线 默认不隐藏 （NO）
 */
@property (nonatomic, readwrite, assign) BOOL prefersNavigationBarBottomLineHidden;

/**
 * 是否让IQKeyboardManager的管理键盘的事件 默认是YES（键盘管理）
 */
@property (nonatomic, readwrite, assign) BOOL keyboardEnable;

/**
 * 是否键盘弹起的时候，点击其他局域键盘弹起 默认是 YES
 */
@property (nonatomic, readwrite, assign) BOOL shouldResignOnTouchOutside;

/**
 * 输入框与键盘间距
 */
@property (nonatomic, readwrite, assign) CGFloat keyboardDistanceFromTextField;

/**
 *
 */
@property (nonatomic,assign) UIRectEdge rectEdge;

//
/**
 * 是否启用kvocontroller（默认为NO，不启用）
 */
@property (nonatomic, readwrite, assign) BOOL enableKVO;


/**
 * 
 */
@property (nonatomic, readwrite, strong) id parameters;
/**
 * 实例化ViewModel，必须使用此方法
 * viewControllerName 跳转的控制器名
 */
- (instancetype)initWithViewControllerName:(NSString *)viewControllerName;

- (void)initialize;

@end

NS_ASSUME_NONNULL_END
