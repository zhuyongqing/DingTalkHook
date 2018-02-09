//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "UISearchBarDelegate-Protocol.h"

@class DTIndicatorLoadingView, DTSearchBar, DTTableViewDataSource, NSString, UIButton, UIView;
@protocol DTProjectorsSearchViewControllerDelegate;

@interface DTProjectorsSearchViewController : DTTableViewController <UISearchBarDelegate>
{
    UIButton *_cancelButton;
    DTSearchBar *_searchBar;
    UIView *_navigationToolBar;
    long long _selectionType;
    id <DTProjectorsSearchViewControllerDelegate> _delegate;
    DTTableViewDataSource *_entireDataSource;
    DTIndicatorLoadingView *_loadingView;
}

@property(retain, nonatomic) DTIndicatorLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) DTTableViewDataSource *entireDataSource; // @synthesize entireDataSource=_entireDataSource;
@property(nonatomic) __weak id <DTProjectorsSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)finishLoading;
- (void)removeNoResultView;
- (void)showNoResultViewWithTitle:(id)arg1 detail:(id)arg2;
- (id)searchWithKeywords:(id)arg1;
- (void)showConnectionAlertWithCellItem:(id)arg1;
- (id)cellItemFromDeviceModel:(id)arg1;
- (_Bool)judgeProjectorsDuplicatedWithSource:(id)arg1 target:(id)arg2;
- (id)sectionItemsFromListDeviceModels:(id)arg1;
- (void)loadDatasource;
- (void)cancelButtonTaped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
