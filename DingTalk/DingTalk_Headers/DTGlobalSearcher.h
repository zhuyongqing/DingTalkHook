//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSearchBarDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DTGlobalSearcherBaseViewController, DTGlobalSearcherNavigationController, DTSearchBar, NSString, UITableView, UIView, UIViewController;
@protocol DTGlobalSearcherDelegate;

@interface DTGlobalSearcher : NSObject <UISearchBarDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, DTSearchBarDelegate>
{
    _Bool _isSearching;
    DTSearchBar *_searchBar;
    UITableView *_searchResultsTableView;
    UITableView *_searchHistoryTableView;
    id <DTGlobalSearcherDelegate> _delegate;
    UIViewController *_contentViewController;
    DTGlobalSearcherNavigationController *_searcherNavigationController;
    DTGlobalSearcherBaseViewController *_rootViewController;
    UIView *_containerView;
    UIView *_searchBarSuperView;
    UIView *_dimmingView;
    struct CGRect _searchBarFrame;
}

@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIView *searchBarSuperView; // @synthesize searchBarSuperView=_searchBarSuperView;
@property(nonatomic) struct CGRect searchBarFrame; // @synthesize searchBarFrame=_searchBarFrame;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) DTGlobalSearcherBaseViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) DTGlobalSearcherNavigationController *searcherNavigationController; // @synthesize searcherNavigationController=_searcherNavigationController;
@property(nonatomic) __weak UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <DTGlobalSearcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *searchHistoryTableView; // @synthesize searchHistoryTableView=_searchHistoryTableView;
@property(retain, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_searchResultsTableView;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)dimmingViewTap;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)searchBarBackButtonPressed:(id)arg1;
- (void)hideDimmingView;
- (void)showDimmingView;
- (double)statusBarHeight;
- (id)visibleViewController;
- (void)hideContainerView;
- (void)showsContainerView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
