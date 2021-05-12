//
//  VSPImagePicker.h
//  vspios-honda-app
//
//  Created by 赵小旭 on 2019/8/29.
//  Copyright © 2019年 贾宇恒. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^VSPImagePickerFinishAction)(UIImage *originalImage,  UIImage * __nullable editedImage);
typedef void(^VSPImagePickerCancelAction)(void);

@interface VSPImagePicker : NSObject

/**
 显示ImagePicker

 @param viewController 用于presentImagePicker
 @param finishAction 选择照片回调
 */
+ (void)showImagePickerFromViewController:(UIViewController *)viewController
                             allowEditing:(BOOL)allowEditing
                             finishAction:(VSPImagePickerFinishAction)finishAction
                             cancelAction:(VSPImagePickerCancelAction)cancelAction;

/**
 *  相机拍照
 */
+ (void)showCameraImagePickerFromViewController:(UIViewController *)viewController
                                   finishAction:(VSPImagePickerFinishAction)finishAction
                                   cancelAction:(VSPImagePickerCancelAction)cancelAction;

@end

NS_ASSUME_NONNULL_END
