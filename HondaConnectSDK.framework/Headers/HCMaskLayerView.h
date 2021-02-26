//
//  LGMaskLayerView.h
//  AFNetworking
//
//  Created by Zac on 2021/1/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HCMaskLayerViewDelegate <NSObject>

@required

- (void)hideMaskLayer;

@end


@interface HCMaskLayerView : UIView
@property (nonatomic, weak) id <HCMaskLayerViewDelegate> delegate;
- (void)display;

@end

NS_ASSUME_NONNULL_END
