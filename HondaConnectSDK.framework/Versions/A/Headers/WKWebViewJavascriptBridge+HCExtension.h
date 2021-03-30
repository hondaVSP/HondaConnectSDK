//
//  WKWebViewJavascriptBridge+HCExtension.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/3/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <WebViewJavascriptBridge/WKWebViewJavascriptBridge.h>

NS_ASSUME_NONNULL_BEGIN
@protocol HCWKWebViewExtensionDelegate <NSObject>
@optional
///收到服务器重定向
- (void)hcWebView:(WKWebView *)webView didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)navigation;
@end
@interface WKWebViewJavascriptBridge (HCExtension)

@property (nonatomic, weak) id <HCWKWebViewExtensionDelegate> extensionDelegate;

@end

NS_ASSUME_NONNULL_END
