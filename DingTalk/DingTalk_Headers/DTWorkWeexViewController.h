//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTWeexViewController.h"

#import "DTTabBarTouchProtocol-Protocol.h"
#import "DTWorkPageNavigatorDelegate-Protocol.h"

@class DTBadgeView, DTBizWorkInfoModel, DTWorkComponentSource, NSString;

@interface DTWorkWeexViewController : DTWeexViewController <DTTabBarTouchProtocol, DTWorkPageNavigatorDelegate>
{
    long long _organizationId;
    DTBizWorkInfoModel *_workInfo;
    DTWorkComponentSource *_workViewDatasource;
    DTBadgeView *_badgeView;
}

@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) DTWorkComponentSource *workViewDatasource; // @synthesize workViewDatasource=_workViewDatasource;
@property(retain, nonatomic) DTBizWorkInfoModel *workInfo; // @synthesize workInfo=_workInfo;
@property(nonatomic) long long organizationId; // @synthesize organizationId=_organizationId;
- (void).cxx_destruct;
- (void)openWebViewWithUrlString:(id)arg1;
- (double)workConvSwitcherLeftPosition;
- (_Bool)currentLanguageIsEn;
- (void)workListButtonClicked;
- (void)openMicroAppWithItem:(id)arg1 ddParams:(id)arg2;
- (_Bool)pageNavigator:(id)arg1 openMicroAPPWithAppID:(id)arg2 agentId:(id)arg3 ddParams:(id)arg4;
- (void)reloadNavigationComponents;
- (void)onUnreadWorkMessageChanged:(id)arg1;
- (void)organizationDidChangeNotification:(id)arg1;
- (void)tabBarItemDoubleClicked;
- (void)tabBarItemClickedInSelected;
- (struct CGRect)weexViewFrameForContainer:(id)arg1;
- (void)configTitleViewWithText:(id)arg1;
- (void)moreBtnAction:(id)arg1;
- (void)configOANavigationBar;
- (void)loadWorkInfo;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
