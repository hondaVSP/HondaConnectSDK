//
//  HCNimbusViewController.h
//  HondaBLEKey
//
//  Created by 蔡宇航 on 2020/5/9.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import "HCViewController.h"
#import "HCNimbusViewModel.h"

#import <Nimbus/NimbusModels.h>
#import <MJRefresh/MJRefresh.h>
#import "HCRefreshHeader.h"
#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>

NS_ASSUME_NONNULL_BEGIN



@protocol HCNimbusTableViewControllerDelegate <NSObject>

@optional

//- (NSString*)emptyText;
- (BOOL)onLoadNextPage;
- (BOOL)onRefreshAll;

@end



@interface HCNimbusViewController : HCViewController <
    UITableViewDelegate,
    DZNEmptyDataSetSource,
    DZNEmptyDataSetDelegate
>


@property(nonatomic, strong) NIMutableTableViewModel* model;
@property(nonatomic, strong) UITableView* mainTable;
@property(nonatomic, weak) id<HCNimbusTableViewControllerDelegate> delegate_;

@property(nonatomic, assign) BOOL inLoading;

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
