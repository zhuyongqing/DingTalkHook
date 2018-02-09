//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTProjectingStateProtocol-Protocol.h"
#import "DTProjectorManageProtocol-Protocol.h"
#import "DTProjectorsSearchViewControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DTIconNameView, DTProjectorActionButton, DTProjectorConnectionModel, DTProjectorSelectionButton, DTProjectorsManageHandler, NSString, UIButton, UIImageView, UILabel, UIView;

@interface DTProjectorsManageViewController : DTViewController <UITextViewDelegate, DTProjectorManageProtocol, DTProjectorsSearchViewControllerDelegate, DTProjectingStateProtocol>
{
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIView *_navigationToolBar;
    UILabel *_tipsLabel;
    UIButton *_noDeviceGuideButton;
    UIImageView *_screenImageView;
    DTIconNameView *_addRemoteProjectorButton;
    DTIconNameView *_removeRemoteProjectButton;
    DTProjectorActionButton *_projectorActionButton;
    DTProjectorSelectionButton *_selectLocalProjectorButton;
    DTProjectorSelectionButton *_selectRemoteProjectorButton;
    long long _localProjectorSelectionButtonMode;
    _Bool _isKeyboardActiving;
    DTProjectorsManageHandler *_projectorsManageHandler;
    long long _localProjectorInfoSource;
    DTProjectorConnectionModel *_connectionModel;
    NSString *_tmpSessionID;
    unsigned long long _localAirplayFailTimes;
}

@property(nonatomic) unsigned long long localAirplayFailTimes; // @synthesize localAirplayFailTimes=_localAirplayFailTimes;
@property(copy, nonatomic) NSString *tmpSessionID; // @synthesize tmpSessionID=_tmpSessionID;
@property(nonatomic) _Bool isKeyboardActiving; // @synthesize isKeyboardActiving=_isKeyboardActiving;
@property(retain, nonatomic) DTProjectorConnectionModel *connectionModel; // @synthesize connectionModel=_connectionModel;
@property(nonatomic) long long localProjectorInfoSource; // @synthesize localProjectorInfoSource=_localProjectorInfoSource;
@property(retain, nonatomic) DTProjectorsManageHandler *projectorsManageHandler; // @synthesize projectorsManageHandler=_projectorsManageHandler;
- (void).cxx_destruct;
- (void)didRestoreProjectorModel:(id)arg1 isRestore:(_Bool)arg2;
- (void)openLocalAirplayFAQView;
- (void)checkOrgnizationsHaveProjectorsDidCompletedWithResult:(_Bool)arg1;
- (void)superSonicDidReceivedProjectingCode:(id)arg1;
- (void)remoteProjectorStatusDidChangedWithCallerStatus:(long long)arg1 calleeStatus:(long long)arg2;
- (void)disconnectProjectorsDidCompletedWithResult:(_Bool)arg1 error:(id)arg2;
- (void)createRemoteProjectorConnectionDidCompletedWithResult:(_Bool)arg1 sessionID:(id)arg2 localProjectorUID:(id)arg3 remoteProjector:(id)arg4 error:(id)arg5;
- (void)createLocalProjectorConnectionDidCompletedWithResult:(_Bool)arg1 sessionID:(id)arg2 deviceUID:(id)arg3 deviceIP:(id)arg4 error:(id)arg5;
- (void)airplayDidOccuredError:(id)arg1;
- (void)connectAirplayDidCompletedWithResult:(_Bool)arg1 error:(id)arg2;
- (void)connectionStatusDidChangedWithModel:(id)arg1;
- (_Bool)isDuplicatedWithSelectedProject:(id)arg1;
- (id)filterProjectorsForSelectionType:(long long)arg1;
- (void)searchViewControllerDidSelectedProjector:(id)arg1 andSelectionType:(long long)arg2;
- (_Bool)localProjecting;
- (void)presentSearchViewControllerWithSelectionStyle:(long long)arg1;
- (void)showGuideAlertAtFirstTime;
- (void)setupProjectorsManageHandler;
- (void)restoreRemoteProjectorWithConnectionModel:(id)arg1;
- (void)restoreLocalProjectorWithConnectionModel:(id)arg1;
- (void)handleRemoteProjectorConnectFailedWithError:(id)arg1;
- (void)handleRemoteProjectorConnectSuccessed;
- (void)startRemoteProjecting;
- (void)handleAirplayConnectionFailedWithError:(id)arg1;
- (void)handleAirplayConnectionSuccessed;
- (void)connectLocalProjectorWithProjectingCode:(id)arg1;
- (void)startLocalProjecting;
- (void)showIOS11GuideViewController;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)cancelKeyboardNotification;
- (void)registerKeyboardNotification;
- (void)hideKeyboard;
- (void)actionLocalProjectingIfAllow;
- (void)removeRemoteProjectorButtonTaped:(id)arg1;
- (void)addRemoteProjectorButtonTaped:(id)arg1;
- (void)selectRemoteProjectorButtonTaped:(id)arg1;
- (void)closeButtonTaped:(id)arg1;
- (void)projectorActionButtonTaped:(id)arg1;
- (void)noDeviceGuideButtonTaped:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)updateUIWithLocalProjectorStatus:(long long)arg1 remoteProjectorStatus:(long long)arg2;
- (void)updateUI;
- (void)enableAllViews;
- (void)hideAllViews;
- (void)viewWillLayoutSubviews;
- (void)setNoDeviceGuideTipsHidden:(_Bool)arg1;
- (void)setupUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
