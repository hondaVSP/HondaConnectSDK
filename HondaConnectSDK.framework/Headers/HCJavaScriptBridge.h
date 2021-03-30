//
//  HCJavaScriptBridge.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/3/8.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebViewJavascriptBridge/WKWebViewJavascriptBridge.h>
@class HCWebViewController;

NS_ASSUME_NONNULL_BEGIN

@interface HCJavaScriptBridge : NSObject

@property (nonatomic, strong, readwrite) WKWebViewJavascriptBridge *bridge;

-(instancetype) initWithView:(WKWebView *)view navigationDelegate:(id<WKNavigationDelegate>)delegate vc:(HCWebViewController *)vc;

/**
 * 绑定JSAPI-获取token
 */
-(void) bindGetTokenJSAPI:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
