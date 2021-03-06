//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTDingNoticeViewProtocol-Protocol.h"

@class DTBizDingModel, DTDingNoticeViewModel, DTWebImageView, NSArray, NSString, UIButton, UIImageView, UILabel, UIWindow, YYLabel;

@interface DTDingNoticeViewV2 : UIView <DTDingNoticeViewProtocol>
{
    _Bool _showing;
    DTBizDingModel *_dingModel;
    UILabel *_contentView;
    UIButton *_closeBtn;
    DTWebImageView *_labelImageView;
    UIImageView *_topSepLine;
    UIImageView *_separatorLine;
    UILabel *_summaryLabel;
    UIButton *_knowButton;
    NSArray *_remindTimes;
    YYLabel *_titleLabel;
    UILabel *_locationLabel;
    UILabel *_timeLabel;
    UIWindow *_maskWindow;
    NSArray *_buttons;
    UIButton *_rightNowBtn;
    UIButton *_laterBtn;
    DTDingNoticeViewModel *_noticeViewModel;
    UIButton *_dingSourceButton;
    UIWindow *_currentKeyWindow;
}

@property(retain, nonatomic) UIWindow *currentKeyWindow; // @synthesize currentKeyWindow=_currentKeyWindow;
@property(retain, nonatomic) UIButton *dingSourceButton; // @synthesize dingSourceButton=_dingSourceButton;
@property(retain, nonatomic) DTDingNoticeViewModel *noticeViewModel; // @synthesize noticeViewModel=_noticeViewModel;
@property(retain, nonatomic) UIButton *laterBtn; // @synthesize laterBtn=_laterBtn;
@property(retain, nonatomic) UIButton *rightNowBtn; // @synthesize rightNowBtn=_rightNowBtn;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIWindow *maskWindow; // @synthesize maskWindow=_maskWindow;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *remindTimes; // @synthesize remindTimes=_remindTimes;
@property(retain, nonatomic) UIButton *knowButton; // @synthesize knowButton=_knowButton;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UIImageView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *topSepLine; // @synthesize topSepLine=_topSepLine;
@property(retain, nonatomic) DTWebImageView *labelImageView; // @synthesize labelImageView=_labelImageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) DTBizDingModel *dingModel; // @synthesize dingModel=_dingModel;
@property(nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)contentTopMargin;
- (void)cleanAllConfigBtns;
- (void)resetNoticeStatus;
- (id)buttonWithModel:(id)arg1;
- (id)actionNewStyleBtn;
- (id)bottomButton;
- (void)orientationChanged:(id)arg1;
- (void)_innerDismissWithAnimated:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)_innerShow;
- (void)show;
- (void)jumpDingDetail;
- (void)onBottomBtnClick:(id)arg1;
- (void)onDetailClicked:(id)arg1;
- (void)closeIconPressed:(id)arg1;
- (void)onPanGesture:(id)arg1;
- (void)onPressed:(id)arg1;
- (void)configButtons;
- (void)showWithNoticeViewModel:(id)arg1;
- (id)invitationAdvanceContentWithDingModel:(id)arg1 displayName:(id)arg2;
- (id)taskAdvanceContentWithDingModel:(id)arg1;
- (void)refreshWithContentLines:(long long)arg1;
- (void)refreshContentFrameWithDingModel:(id)arg1;
- (void)updateButtons;
- (void)updateFrames;
- (void)layoutSubviews;
- (void)loadUIComponent;
- (void)dingConfirmStatusChanged:(id)arg1;
- (void)addObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

