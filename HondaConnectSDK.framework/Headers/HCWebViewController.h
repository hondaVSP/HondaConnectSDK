//
//  HCWebViewController.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/18.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import "HCViewController.h"
@class WKWebView;
@class HCJavaScriptBridge;

@interface HCWebLoadFailView : UIView

@end

@interface HCWebViewController : HCViewController

@property(nonatomic,strong,readonly) WKWebView* webView;
@property(nonatomic,strong,readonly) HCJavaScriptBridge* jsBridge;

-(void) resetWebViewFrame;

@end

