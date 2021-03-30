//
//  HCURLMacros.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/8.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#ifndef HCURLMacros_h
#define HCURLMacros_h


#pragma mark - HTML5 URL

#define URL_USER_AGREEMENT              @"http://vsp-h5.reachstar.com/agreement.html"  // 用户协议
#define URL_USER_PRIVACYPOLICY          @"http://vsp-h5.reachstar.com/privacy.html"    // 隐私政策

#pragma mark - app相关
/**Token续租 */
#define URI_APP_ACCESSTOKEN_REFRESH     @"vspcloud-role-service/app/refresh/token"

#pragma mark - 用户基本信息相关
/**用户验证码登录*/
#define URI_USER_LOGIN_VERIFYCODE       @"poc-user-service/api/user-service/v1/login/loginInfo/loginByVerificationCode"
/**用户密码登录*/
#define URI_USER_LOGIN_PWD              @"poc-user-service/api/user-service/v1/login/loginInfo/loginByPassword"
/**根据手机号获取用户信息*/
#define URI_USER_GET_USERINFO           @"poc-user-service/api/user-service/v1/user/info/queryUserInfo"
/**获取验证码*/
#define URI_USER_GET_VERIFYCODE         @"poc-user-service/api/user-service/v1/login/loginInfo/getVerificationCode"
/**注册核对验证码*/
#define URI_USER_REGISTER_CHECK_CODE        @"poc-user-service/api/user-service/v1/login/loginInfo/signInCheckVerificationCode"
/**用户注册*/
#define URI_USER_REGISTER               @"poc-user-service/api/user-service/v1/user/info/insertInfo"
/**用户密码找回*/
#define URI_USER_FORGETPASSWORD         @"poc-user-service/api/user-service/v1/user/info/forgetPassword"
/**退出登录*/
#define URI_USER_LOGOUT(UserId)         [NSString stringWithFormat:@"poc-user-service/api/user-service/v1/login/loginInfo/%@/logout",UserId]
/**上传用户头像*/
#define URI_USER_PORTRAIT_UPLOAD        @"poc-user-service/api/user-service/v1/user/info/uploadHeadPicture"
/**修改用户信息*/
#define URI_USER_MODIFYUSERINFO         @"poc-user-service/api/user-service/v1/user/info/modifyUserInfoDetail"
/**修改密码*/
#define URI_USER_MODIFYPASSWORD         @"poc-user-service/api/user-service/v1/user/info/modifyPassword"

/**获取车主车辆列表*/
#define URI_USER_OWNER_VEHICLELIST(UserId)  [NSString stringWithFormat:@"poc-user-service/api/user-service/v1/vehicleBinding/bindingInfo/%@/findCarsByUserId",UserId]

/**获取用户所有车辆列表(包含授权车辆)*/
#define URI_USER_ALL_VEHICLELIST(UserId)    [NSString stringWithFormat:@"poc-user-service/api/user-service/v1/vehicleBinding/bindingInfo/%@/findAllCarsByUserId",UserId]

/**车机端扫码登录*/
#define URI_USER_SCANQR_LOGIN               @"poc-user-service/api/user-service/v1/login/loginInfo/loginCar"

/**扫码绑车*/
#define URI_USER_SCANQR_BINDVEHICLE         @"poc-user-service/api/user-service/v1/vehicleBinding/bindingInfo/carBind"

#pragma mark - 车辆相关
/**切换车辆*/
#define URI_VEHICLEMANAGE_SWITCH        @"poc-user-service/api/user-service/v1/vehicleBinding/bindingInfo/switchVehicle"

/**车辆解绑*/
#define URI_VEHICLEMANAGE_RELEASE       @"poc-user-service/api/user-service/v1/vehicleBinding/bindingInfo/carRelease"

/**修改车辆昵称*/
#define URI_VEHICLEMANAGE_UPDATENAME    @"poc-user-service/api/user-service/v1/vehicleBinding/bindingInfo/updateCarNickname"

#pragma mark - 蓝牙相关

/**获取手机端PIN码、广播名等蓝牙信息*/
#define URI_BLUETOOTH_PHONE_GET_PINANDBROADCAST       @"poc-app-service/api/poc-app-service/bluetooth/generate"

/**查询车机PIN、广播名等蓝牙信息下发结果*/
#define URI_BLUETOOTH_VEHICLE_PINANDBROADCAST_RESULT    @"poc-app-service/api/poc-app-service/bluetooth/queryBlueToothByVin"

#endif
