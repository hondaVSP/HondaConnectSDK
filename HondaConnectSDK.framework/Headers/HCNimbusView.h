//
//  HCNimbusView.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/3/22.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCNimbusViewModel.h"

#import <Nimbus/NimbusModels.h>
#import <MJRefresh/MJRefresh.h>
#import "HCRefreshHeader.h"
#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>

NS_ASSUME_NONNULL_BEGIN


@protocol HCNimbusViewDelegate <NSObject>

@optional

//- (NSString*)emptyText;
- (BOOL)onLoadNextPage;
- (BOOL)onRefreshAll;

@end

@protocol HCNimbusViewUIDelegate <NSObject>
-(void) _configUI;
@end


@interface HCNimbusView : UIView <
    UITableViewDelegate,
    DZNEmptyDataSetSource,
    DZNEmptyDataSetDelegate,
    HCNimbusViewUIDelegate
>

@property(nonatomic, strong) NIMutableTableViewModel* model;
@property(nonatomic, strong) UITableView* mainTable;
@property(nonatomic, weak) id<HCNimbusViewDelegate> delegate_;

@property(nonatomic, assign) BOOL inLoading;

- (instancetype)initWithViewModel:(HCNimbusViewModel *)viewModel;

- (void)setTableData:(NSArray*) tableCells;
- (void)addTableData:(NSArray *)tableCells;
- (void)appendTableData:(NSArray *)tableCells;
- (void)addTableDataWithSectionedArray:(NSArray *)sectionedArray;

- (void)removeCell:(UITableViewCell*)cell;
- (void)updateCell:(NSIndexPath*)indexPath;
//- (void)updateCell:(UITableViewCell*)cell withObject:(NICellObject*)obj;
- (NICellObject*)getCellObject:(NSIndexPath*) path;

- (void)onLoadEnd;
- (void)onPageEnd;
- (void)scroll2Top;


@end

NS_ASSUME_NONNULL_END
