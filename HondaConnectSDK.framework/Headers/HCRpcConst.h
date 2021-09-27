//
//  HCRpcConst.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/8.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#ifndef HCRpcConst_h
#define HCRpcConst_h

#define HTTP_DEFAULT_TIMEOUT    15.f

//#define HTTP_SERVER_GATEWAY      @"https://vsp-integration.reachstar.com:30191/"
//#define HTTP_SERVER_GATEWAY         @"https://vsp-test.reachstar.com:30191/"
//#define HTTP_SERVER_GATEWAY         @"http://39.97.198.170:82/"
//#define HTTP_SERVER_GATEWAY         @"https://vsp-test.reachstar.com:30191/"
//#define HTTP_SERVER_GATEWAY         @"https://vsp-integration.reachstar.com:30191/"
#define HTTP_SERVER_GATEWAY_FORMAL      @"https://ghac-api-gateway.hynex.com.cn:443/"
#define HTTP_SERVER_GATEWAY_SYSTEM      @"https://openapi-show.reachstar.com:555/"
#define HTTP_SERVICE_FILEGATEWAY_FORMAL @"https://ghac-api-file-gateway.hynex.com.cn/"
#define HTTP_SERVICE_FILEGATEWAY_SYSTEM @"https://openapi-show.reachstar.com:777/"



/** accessToken*/
#define NSR_ACCESS_TOKEN            @"NSR_ACCESS_TOKEN"
/** refreshToken*/
#define NSR_REFRESH_TOKEN           @"NSR_REFRESH_TOKEN"

#pragma mark - 状态码
/// 接口调用成功
#define HTTP_REQUEST_CODE_OK                    @"000000"
/// accessToken或refreshToken失效
#define HTTP_REQUEST_CODE_ACCESSTOKEN_INVALID   @"100005"
/// 非法Token
#define HTTP_REQUEST_CODE_TOKEN_ILLEGAL         @"100018"
/// 头部token格式不正确
#define HTTP_REQUEST_CODE_TOKEN_FORMAT          @"100020"
// MARK: - 请求令牌无效
#define HTTP_REQUEST_CODE_TOKEN_INVALID          @"100015"
// MARK: - refreshToken无效
#define HTTP_REQUEST_CODE_TOKEN_UNAVAILABLE      @"100011"
/// 用户未注册
#define HTTP_REQUEST_CODE_USER_UNREGISTER       @"300001"

/**控车等待车机唤醒*/
#define HTTP_REQUEST_CODE_WAITING_VEHICLE_AWAKON @"000001"
/**车机唤醒成功*/
#define HTTP_REQUEST_CODE_AWAKON_SUCCESS         @"200038"
/**指令执行中 (车机收到指令)*/
#define HTTP_REQUEST_CODE_INSTRUCTION_EXECUTING  @"200035"
/**车辆被收回*/
#define HTTP_REQUEST_CODE_AUTHORIZATION_RECALLED @"300023"

/// 当前用户没有队伍
#define HTTP_REQUEST_CODE_NOT_HAVE_TEAM         @"705099"
/// 非默认车辆已在队伍中，点击组队功能
#define HTTP_REQUEST_CODE_HAS_JOIN_OTHER_TEAM   @"705027"
/// 被授权车辆已经加入车队
#define HTTP_REQUEST_CODE_VEHICLE_IN_TEAM       @"705032"

#endif
