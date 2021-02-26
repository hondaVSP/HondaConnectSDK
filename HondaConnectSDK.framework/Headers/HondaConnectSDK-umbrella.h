#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HCBaseDelegate.h"
#import "HCBaseEventModule.h"
#import "HCBaseEventModuleManager.h"
#import "HCBaseEventModulePortocol.h"
#import "NSObject+HCBaseEventModule.h"
#import "UIFont+HCBaseFont.h"
#import "UILabel+HCExtension.h"
#import "HCBaseToast.h"
#import "HCBaseView.h"
#import "HCDefine.h"
#import "HCMaskLayerView.h"
#import "HCCoreRpcProtocol.h"
#import "HCRpcCall.h"
#import "HCRpcConfig.h"
#import "HCRpcConst.h"
#import "HCRpcContext.h"
#import "HCRpcExt.h"
#import "HCRpcResult.h"
#import "HCURLMacros.h"
#import "HCNavigationController.h"
#import "HCNimbusViewController.h"
#import "HCNimbusViewModel.h"
#import "HCNotificationName.h"
#import "HCRefreshFooter.h"
#import "HCRefreshHeader.h"
#import "HCRouter.h"
#import "HCTableViewCell.h"
#import "HCText.h"
#import "HCTextArchiver.h"
#import "HCTextAttribute.h"
#import "HCTextRubyAnnotation.h"
#import "HCTextRunDelegate.h"
#import "HCTextUtilities.h"
#import "HCUIConfig+Extension.h"
#import "HCUIConfig+Nimbus.h"
#import "HCUIConfig.h"
#import "HCUIDefine.h"
#import "HCUIMarco.h"
#import "HCUIScale.h"
#import "HCUtility.h"
#import "HCUtilsMacro.h"
#import "HCViewController.h"
#import "HCViewModel.h"
#import "HCWebViewController.h"
#import "HCWebViewModel.h"
#import "NSAttributedString+HCText.h"
#import "NSBundle+HCResource.h"
#import "NSDate+HCAdd.h"
#import "NSNotificationCenter+HCMainThread.h"
#import "NSObject+HCLocalized.h"
#import "NSParagraphStyle+HCText.h"
#import "NSString+HCHandler.h"
#import "UIButton+HCFillColor.h"
#import "UIColor+HCColor.h"
#import "UIControl+HCAction.h"
#import "UINavigationController+HCRouter.h"
#import "UIScrollView+HCAdd.h"
#import "UIView+HCCommonToast.h"
#import "UIView+HCSpinner.h"
#import "UIView+HCText.h"
#import "HCIVehicleFenceService.h"
#import "HCIVehicleInfoService.h"
#import "HCIVehicleTeamService.h"
#import "HCVehicleListModel.h"
#import "HCVehicleListRetModel.h"
#import "HCVehicleManager.h"

FOUNDATION_EXPORT double HondaConnectSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char HondaConnectSDKVersionString[];

