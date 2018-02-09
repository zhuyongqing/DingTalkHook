//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTGuidePopViewItem, UIButton, UIImageView, UILabel;

@interface DTGuidePopCellView : UIView
{
    DTGuidePopViewItem *_item;
    UIButton *_bgButton;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_rightIconView;
}

@property(retain, nonatomic) UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) DTGuidePopViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)buttonClick;
- (void)configWithItem:(id)arg1;
- (void)loadComponent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
