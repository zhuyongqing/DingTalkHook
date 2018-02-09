//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWTableViewCell.h"

#import "DTAudioLevelMeterViewDelegate-Protocol.h"
#import "DTBubbleAudioViewDelegate-Protocol.h"
#import "DTMarkupParserDelegate-Protocol.h"

@class BLFavorite, DTAttributedLabel, DTBubbleAudioView, DTWebImageView, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol DTFavoriteCellDelegate;

@interface DTFavoriteCommonCell : SWTableViewCell <DTAudioLevelMeterViewDelegate, DTBubbleAudioViewDelegate, DTMarkupParserDelegate>
{
    _Bool _notShowForward;
    _Bool _needShowSaveToSpace;
    _Bool _disableLongPress;
    _Bool _hideTopPadding;
    id <DTFavoriteCellDelegate> _customDelegate;
    UILabel *_nameLabel;
    UIView *_avaterView;
    UILabel *_timeLabel;
    UIImageView *_orgImageView;
    UIImageView *_dingIconView;
    DTAttributedLabel *_dingTitleLabel;
    DTBubbleAudioView *_dingAudioView;
    DTAttributedLabel *_contentLabel;
    DTBubbleAudioView *_audioBubbleView;
    UIImageView *_detailContainer;
    UIImageView *_thumbnailImageView;
    UILabel *_summaryLabel;
    UILabel *_titleLabel;
    DTWebImageView *_picImageView;
    UIButton *_vedioPlayBtn;
    UIImageView *_avatarImageView;
    UIView *_mainView;
    BLFavorite *_favorite;
    UIView *_bottomLine;
}

+ (struct CGSize)stringSizeWithFont:(id)arg1 withString:(id)arg2 withSize:(struct CGSize)arg3;
+ (double)heightForFavoriteCell:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak BLFavorite *favorite; // @synthesize favorite=_favorite;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool hideTopPadding; // @synthesize hideTopPadding=_hideTopPadding;
@property(nonatomic) _Bool disableLongPress; // @synthesize disableLongPress=_disableLongPress;
@property(nonatomic) _Bool needShowSaveToSpace; // @synthesize needShowSaveToSpace=_needShowSaveToSpace;
@property(nonatomic) _Bool notShowForward; // @synthesize notShowForward=_notShowForward;
@property(retain, nonatomic) UIButton *vedioPlayBtn; // @synthesize vedioPlayBtn=_vedioPlayBtn;
@property(retain, nonatomic) DTWebImageView *picImageView; // @synthesize picImageView=_picImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UIImageView *detailContainer; // @synthesize detailContainer=_detailContainer;
@property(retain, nonatomic) DTBubbleAudioView *audioBubbleView; // @synthesize audioBubbleView=_audioBubbleView;
@property(retain, nonatomic) DTAttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) DTBubbleAudioView *dingAudioView; // @synthesize dingAudioView=_dingAudioView;
@property(retain, nonatomic) DTAttributedLabel *dingTitleLabel; // @synthesize dingTitleLabel=_dingTitleLabel;
@property(retain, nonatomic) UIImageView *dingIconView; // @synthesize dingIconView=_dingIconView;
@property(retain, nonatomic) UIImageView *orgImageView; // @synthesize orgImageView=_orgImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *avaterView; // @synthesize avaterView=_avaterView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <DTFavoriteCellDelegate> customDelegate; // @synthesize customDelegate=_customDelegate;
- (void).cxx_destruct;
- (id)markupParserGetEmotionFileNameWithEmotionString:(id)arg1;
- (id)markupParserNeedEmotionDictionary;
- (void)vedioPlayBtnClick:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)bubbleAudioViewStartPlay;
- (void)layoutSubviews;
- (void)configCellWithFavorite:(id)arg1;
- (_Bool)needSaveCSpace;
- (void)setFavoriteAudioViewWithSize:(struct CGSize)arg1;
- (void)setPicImageWithContent:(id)arg1;
- (id)image:(id)arg1 scaleAndCroppForSize:(struct CGSize)arg2;
- (void)showBubbleWithBubbleView:(id)arg1 withMediaId:(id)arg2 withDuration:(long long)arg3 withVolums:(id)arg4;
- (void)removeAudioView;
- (void)setFavoriteDingAudioViewWithSize:(struct CGSize)arg1;
- (struct CGSize)messageAudioBubbleSizeWithDuration:(long long)arg1 hasAvatarSpace:(_Bool)arg2;
- (void)configNameLabelWithContent:(id)arg1;
- (id)userAvaterView:(id)arg1;
- (void)signTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)saveToSpaceCell:(id)arg1;
- (void)deleteFavoriteCell:(id)arg1;
- (void)forwardFavoriteCell:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNameLabelText:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)addGestureRecognizers;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
