//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LAWeexViewControllerDelegate-Protocol.h"

@class DTNavigationController, NSString, UIViewController;

@interface DTWorkPageNavigator : NSObject <LAWeexViewControllerDelegate>
{
    long long _cOrgId;
    UIViewController *_cViewController;
    DTNavigationController *_workNavigationController;
    NSString *_cTabBarTitle;
    long long _cWorkPageType;
}

@property(nonatomic) long long cWorkPageType; // @synthesize cWorkPageType=_cWorkPageType;
@property(copy, nonatomic) NSString *cTabBarTitle; // @synthesize cTabBarTitle=_cTabBarTitle;
@property(nonatomic) __weak DTNavigationController *workNavigationController; // @synthesize workNavigationController=_workNavigationController;
@property(nonatomic) __weak UIViewController *cViewController; // @synthesize cViewController=_cViewController;
@property(nonatomic) long long cOrgId; // @synthesize cOrgId=_cOrgId;
- (void).cxx_destruct;
- (id)normalizeWorkTitle_tmp:(id)arg1;
- (id)modifyOAHomePageURL:(id)arg1;
- (void)onLocationUpdateNotification:(id)arg1;
- (void)onMicroAppDidOpenNotification:(id)arg1;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)updateWorkTabRedDot:(id)arg1;
- (void)updateWorkTabRedDot;
- (void)triggerMicroAppPreload;
- (void)appDidSwitchFromWorkTab;
- (void)appDidSwitchToWorkTab;
- (void)demoteWeexToWebViewController;
- (void)weexViewController:(id)arg1 onRenderFailed:(id)arg2;
- (id)defaultWorkViewController:(id)arg1;
- (id)customWorkWeexViewController:(id)arg1;
- (id)customWorkWebViewController:(id)arg1;
- (long long)updateWorkNavigationControllerMaxRetryTimes;
- (void)updateWorkNavigationControllerWithOrgId:(long long)arg1 viewController:(id)arg2 tabBarTitle:(id)arg3 isRetry:(_Bool)arg4;
- (void)reloadWorkTab;
- (void)reloadWorkTabMainThread;
- (_Bool)handleCustomWorkModified:(id)arg1;
- (_Bool)handleDefaultWorkModified:(id)arg1;
- (void)reloadNaviConponetAndTabbarIfNeed:(id)arg1;
- (_Bool)orgBeRemoved:(id)arg1;
- (_Bool)orgBeAdded:(id)arg1;
- (id)modifiedInfoForCurrentOrg:(id)arg1;
- (_Bool)removedFromCurrentOrg:(id)arg1;
- (void)workWorkInfoUpdateNotification_v2:(id)arg1;
- (_Bool)openMicroAppWithNotifictonUserInfo:(id)arg1;
- (void)workOrganizationSwitchNotification:(id)arg1;
- (void)reloadWorkTabViewController;
- (id)workItemTitleForTab;
- (id)workViewControllerForTab;
- (void)dealloc;
- (void)privateInit;
- (id)initWithNavigationController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
