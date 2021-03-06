//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTAvatarView, DTButton, DTContact, DTFullMobileInputView, DTLoginPasswordInputView, DTPrivacyReadObserver, NSString, UIButton, UIImageView, UILabel, UIScrollView;

@interface DTAccountPasswordViewController : DTViewController
{
    int _errorCount;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _alipayLoginCallback;
    DTContact *_lastUser;
    DTContact *_currentUser;
    UIImageView *_backgroundView;
    UIScrollView *_containerView;
    DTAvatarView *_avatar;
    UIButton *_registerButton;
    UILabel *_nickLabel;
    UILabel *_welcomeLabel;
    DTFullMobileInputView *_phoneView;
    DTLoginPasswordInputView *_passwordView;
    UIButton *_loginButton;
    UIButton *_forgetPasswordButton;
    UIButton *_moreButton;
    NSString *_lastInputMobile;
    double _yInView;
    UIButton *_alipayLoginButton;
    DTPrivacyReadObserver *_privacyObserver;
    DTButton *_environmentButton;
}

@property(retain, nonatomic) DTButton *environmentButton; // @synthesize environmentButton=_environmentButton;
@property(retain, nonatomic) DTPrivacyReadObserver *privacyObserver; // @synthesize privacyObserver=_privacyObserver;
@property(retain, nonatomic) UIButton *alipayLoginButton; // @synthesize alipayLoginButton=_alipayLoginButton;
@property(nonatomic) double yInView; // @synthesize yInView=_yInView;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
@property(copy, nonatomic) NSString *lastInputMobile; // @synthesize lastInputMobile=_lastInputMobile;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *forgetPasswordButton; // @synthesize forgetPasswordButton=_forgetPasswordButton;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) DTLoginPasswordInputView *passwordView; // @synthesize passwordView=_passwordView;
@property(retain, nonatomic) DTFullMobileInputView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) UILabel *welcomeLabel; // @synthesize welcomeLabel=_welcomeLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) DTAvatarView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) DTContact *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) DTContact *lastUser; // @synthesize lastUser=_lastUser;
@property(copy, nonatomic) CDUnknownBlockType alipayLoginCallback; // @synthesize alipayLoginCallback=_alipayLoginCallback;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)showHideEnvironmentButton;
- (void)environmentButtonAction:(id)arg1;
- (void)loadEnvironmentButton;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)containerViewPressed:(id)arg1;
- (void)alipayLoginButtonPressed:(id)arg1;
- (void)moreButtonPressed:(id)arg1;
- (void)forgetPasswordButtonPressed:(id)arg1;
- (void)configurePrivacyObserver;
- (void)loginButtonPressed:(id)arg1;
- (void)signUpButtonPressed:(id)arg1;
- (id)getCountryName;
- (void)gotoMobileSMSPage;
- (void)openNetDiagViewController;
- (_Bool)isShowResetPswtAlertView:(long long)arg1;
- (void)updateMobileNumber:(id)arg1 countryCode:(id)arg2;
- (void)showsLoginFailureError:(id)arg1;
- (id)defaultCountryCode;
- (void)viewDidLayoutSubviews;
- (void)freshLoginButtonState;
- (void)showsPhoneWithUser:(id)arg1;
- (void)showsWelcomeWithUser:(id)arg1;
- (void)showsAvatarWithUser:(id)arg1;
- (void)updateWelcomeInfomation;
- (void)loadDatasource;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)statusBarStyle;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

