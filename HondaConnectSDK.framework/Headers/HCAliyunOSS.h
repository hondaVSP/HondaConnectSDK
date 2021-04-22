//
//  HCAliyunOSS.h
//  Pods
//
//  Created by yangzhi on 17/3/29.
//
//

#import <Foundation/Foundation.h>
#import <AliyunOSSiOS/OSSService.h>

typedef void(^OSSUploadProgress)(int64_t bytesSent, int64_t totalByteSent, int64_t totalBytesExpectedToSend);
typedef void(^OSSUploadFinish)(OSSTask *object);

typedef void(^OSSSuccess)(NSString *URL);
typedef void(^OSSFailure)(NSError *error);

@class HCAliyunOSSTokenResponse;
@class HCAliyunOSSTokenCredentials;

@interface HCAliyunOSS : NSObject



- (instancetype)initOSSWithAccessKey:(NSString *)accessKey
                     accessKeySecret:(NSString *)secretKey
                       securityToken:(NSString *)securityToken
                            endPoint:(NSString *)endPoint
                          bucketName:(NSString *)bucketName
                           objectKey:(NSString *)objectKey;

//OSS追加文件上传
- (void)oss_uploadAppendObjectASync:(NSData *)data
                         bucketName:(NSString*)bucketName
                          objectKey:(NSString*)objectKey
                           progress:(OSSUploadProgress)progress
                             finish:(OSSUploadFinish)finish;

//OSS同步文件上传
+ (void)uploadAliyunOSSWithData:(NSData *)data
                  tokenResponse:(HCAliyunOSSTokenResponse *)tokenResponse
                       progress:(OSSUploadProgress)progress
                        success:(OSSSuccess)success
                        failure:(OSSFailure)failure;

@end


@interface HCAliyunOSSTokenResponse : NSObject
+ (NSString *)getUUID;
@property (nonatomic, strong) HCAliyunOSSTokenCredentials *ossCredentials;
@property (nonatomic, strong) NSString *endpoint;
@property (nonatomic, strong) NSString *bucketName;
@property (nonatomic, strong) NSString *objectKey;
@property (nonatomic, strong) NSString *uploadUrl;
@end

@interface HCAliyunOSSTokenCredentials : NSObject
@property (nonatomic, strong) NSString *accessKey;
@property (nonatomic, strong) NSString *secretKey;
@property (nonatomic, strong) NSString *securityToken;
@end
