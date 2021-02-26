//
//  NSObject+AppEventModule.h
//  iOS_ClusterAnnotation_3D
//
//  Created by Zac on 2020/12/6.
//  Copyright © 2020 AutoNavi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (HCBaseEventModule)

- (id)performSelector:(SEL)selector
           withObject:(id)p1
           withObject:(id)p2
           withObject:(id)p3;

- (id)performSelector:(SEL)selector
           withObject:(id)p1
           withObject:(id)p2
           withObject:(id)p3
           withObject:(id)p4;

- (id)performSelector:(SEL)selector
           withObject:(id)p1
           withObject:(id)p2
           withObject:(id)p3
           withObject:(id)p4
           withObject:(id)p5;

- (id)performSelector:(SEL)selector
           withObject:(id)p1
           withObject:(id)p2
           withObject:(id)p3
           withObject:(id)p4
           withObject:(id)p5
           withObject:(id)p6;

- (id)performSelector:(SEL)selector
           withObject:(id)p1
           withObject:(id)p2
           withObject:(id)p3
           withObject:(id)p4
           withObject:(id)p5
           withObject:(id)p6
           withObject:(id)p7;
@end

NS_ASSUME_NONNULL_END
