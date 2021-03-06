//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTColumnItemContext, DTSegmentedView, NSArray, UIView;

@interface DTColumnsViewController : DTTableViewController
{
    DTSegmentedView *_columnsControl;
    UIView *_emptyView;
    NSArray *_columnContexts;
    long long _currentColumnIndex;
}

@property(nonatomic) long long currentColumnIndex; // @synthesize currentColumnIndex=_currentColumnIndex;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTSegmentedView *columnsControl; // @synthesize columnsControl=_columnsControl;
@property(copy, nonatomic) NSArray *columnContexts; // @synthesize columnContexts=_columnContexts;
- (void).cxx_destruct;
- (void)tableViewDidScroll:(id)arg1;
- (void)segmentItemSelected:(long long)arg1;
- (void)loadPageDataIsMore:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) DTColumnItemContext *currentColumnContext;
- (void)showEmptyView:(_Bool)arg1;
- (void)refreshUI;
- (void)layoutEmptyView;
- (void)viewWillLayoutSubviews;
- (void)loadEmptyView;
- (void)loadTableHeaderView;
- (void)loadColumnsControl;
- (void)viewDidLoad;

@end

