//
//  NSBundle+HCResource.h
//  HondaConnectCore_Example
//
//  Created by 蔡宇航 on 2021/2/19.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (HCResource)


/**
 Returns the full pathname for the resource identified by the specified name and
 file extension. It first search the file with current screen's scale (such as @2x),
 then search from higher scale to lower scale.
 
 @param name       The name of the resource file. If name is an empty string or
 nil, returns the first file encountered of the supplied type.
 
 @param ext        If extension is an empty string or nil, the extension is
 assumed not to exist and the file is the first file encountered that exactly matches name.

 
 @return The full pathname for the resource file or nil if the file could not be located.
 */
- (nullable NSString *)pathForScaledResource:(NSString *)name ofType:(nullable NSString *)ext;


@end

NS_ASSUME_NONNULL_END
