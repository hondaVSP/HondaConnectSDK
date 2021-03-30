//
//  HCTableViewCell.h
//  HyApp
//
//  Created by sgf on 2018/4/19.
//  Copyright © 2018年 sgf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Nimbus/NimbusModels.h>

@protocol HCTableViewCellProtocol <NSObject>
-(void) _createUI;
@end

@interface HCTableViewCell : UITableViewCell <NICell,HCTableViewCellProtocol>

@property (nonatomic, weak, readonly) UIImageView *rightArrow;

@end
