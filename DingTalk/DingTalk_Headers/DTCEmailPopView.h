//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAvatarView, DTCEmailPopViewItem, UIButton, UILabel;

@interface DTCEmailPopView : UIView
{
    UIView *_headerView;
    UILabel *_leftTitleLbl;
    UILabel *_rightTitleLbl;
    UIButton *_closeBtn;
    UIView *_sepLine;
    DTAvatarView *_avatarView;
    UILabel *_contentTitleLbl;
    UILabel *_subContentTitleLbl;
    DTCEmailPopViewItem *_item;
}

@property(retain, nonatomic) DTCEmailPopViewItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *subContentTitleLbl; // @synthesize subContentTitleLbl=_subContentTitleLbl;
@property(retain, nonatomic) UILabel *contentTitleLbl; // @synthesize contentTitleLbl=_contentTitleLbl;
@property(retain, nonatomic) DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *rightTitleLbl; // @synthesize rightTitleLbl=_rightTitleLbl;
@property(retain, nonatomic) UILabel *leftTitleLbl; // @synthesize leftTitleLbl=_leftTitleLbl;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)onCloseBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (void)show;
- (void)configWithItem:(id)arg1;
- (void)loadComponent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

