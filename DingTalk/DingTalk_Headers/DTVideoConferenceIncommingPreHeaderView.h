//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class DTAvatarImageView, UILabel;

@interface DTVideoConferenceIncommingPreHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    DTAvatarImageView *_avater;
}

@property(retain, nonatomic) DTAvatarImageView *avater; // @synthesize avater=_avater;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)momentString:(id)arg1;
- (id)dayString:(id)arg1;
- (void)prepareForReuse;
- (void)refreshAvatar:(id)arg1 withSizeKey:(id)arg2;
- (void)refreshAvatarByUid:(id)arg1 withSizeKey:(id)arg2;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

