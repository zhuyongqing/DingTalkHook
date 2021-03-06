//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTPriceCounterModel, KAProgressLabel, UILabel;

@interface DTPriceCounterView : UIView
{
    CDUnknownBlockType _freeCallClickBlock;
    CDUnknownBlockType _freeDingClickBlock;
    UILabel *_freeCallTimeTitleLabel;
    UILabel *_freeCallTimeNumberLabel;
    UILabel *_freeCallTimeUnitLabel;
    UILabel *_freeDingTimeNumberLabel;
    UILabel *_freeDingTimeTitleLabel;
    UILabel *_freeDingTimeUnitLabel;
    UILabel *_callTopTitleLabel;
    UILabel *_dingTopTitleLabel;
    KAProgressLabel *_freeCallCounter;
    KAProgressLabel *_freeDingCounter;
    DTPriceCounterModel *_callCounterModel;
    DTPriceCounterModel *_dingCounterModel;
}

@property(retain, nonatomic) DTPriceCounterModel *dingCounterModel; // @synthesize dingCounterModel=_dingCounterModel;
@property(retain, nonatomic) DTPriceCounterModel *callCounterModel; // @synthesize callCounterModel=_callCounterModel;
@property(retain, nonatomic) KAProgressLabel *freeDingCounter; // @synthesize freeDingCounter=_freeDingCounter;
@property(retain, nonatomic) KAProgressLabel *freeCallCounter; // @synthesize freeCallCounter=_freeCallCounter;
@property(retain, nonatomic) UILabel *dingTopTitleLabel; // @synthesize dingTopTitleLabel=_dingTopTitleLabel;
@property(retain, nonatomic) UILabel *callTopTitleLabel; // @synthesize callTopTitleLabel=_callTopTitleLabel;
@property(retain, nonatomic) UILabel *freeDingTimeUnitLabel; // @synthesize freeDingTimeUnitLabel=_freeDingTimeUnitLabel;
@property(retain, nonatomic) UILabel *freeDingTimeTitleLabel; // @synthesize freeDingTimeTitleLabel=_freeDingTimeTitleLabel;
@property(retain, nonatomic) UILabel *freeDingTimeNumberLabel; // @synthesize freeDingTimeNumberLabel=_freeDingTimeNumberLabel;
@property(retain, nonatomic) UILabel *freeCallTimeUnitLabel; // @synthesize freeCallTimeUnitLabel=_freeCallTimeUnitLabel;
@property(retain, nonatomic) UILabel *freeCallTimeNumberLabel; // @synthesize freeCallTimeNumberLabel=_freeCallTimeNumberLabel;
@property(retain, nonatomic) UILabel *freeCallTimeTitleLabel; // @synthesize freeCallTimeTitleLabel=_freeCallTimeTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType freeDingClickBlock; // @synthesize freeDingClickBlock=_freeDingClickBlock;
@property(copy, nonatomic) CDUnknownBlockType freeCallClickBlock; // @synthesize freeCallClickBlock=_freeCallClickBlock;
- (void).cxx_destruct;
- (void)showDingNewVersionUI:(_Bool)arg1;
- (void)showCallNewVersionUI:(_Bool)arg1;
- (void)freeDingClickAction;
- (void)freeCallClickAction;
- (void)updateDingCounterWithModel:(id)arg1;
- (void)updateDingCounter:(id)arg1;
- (void)updateCallCounterWithModel:(id)arg1;
- (void)updateCallCounter:(id)arg1;
- (id)quotaManager;
- (void)loadLocalDataAndRefreshUI;
- (void)loadAllSubviews;
- (void)loadDivideLines;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

