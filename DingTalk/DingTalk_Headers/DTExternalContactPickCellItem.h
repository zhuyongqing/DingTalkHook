//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class DTAvatarModel, DTContactPickPersonIdentifier, DTIconFontConf, NSArray, NSString, UIColor, UIFont;

@interface DTExternalContactPickCellItem : DTBaseCellItem
{
    _Bool _isSelectMode;
    _Bool _isRequired;
    _Bool _isSelected;
    long long _uid;
    DTAvatarModel *_avatarModel;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    NSString *_detail;
    UIColor *_detailColor;
    UIFont *_detailFont;
    NSString *_comment;
    UIColor *_commentColor;
    UIFont *_commentFont;
    NSArray *_labels;
    DTIconFontConf *_icon1;
    CDUnknownBlockType _icon1DidClickBlock;
    DTIconFontConf *_icon2;
    CDUnknownBlockType _icon2DidClickBlock;
    DTContactPickPersonIdentifier *_iden;
    struct CGSize _titleSize;
    struct CGSize _detailSize;
    struct CGSize _commentSize;
}

@property(retain, nonatomic) DTContactPickPersonIdentifier *iden; // @synthesize iden=_iden;
@property(copy, nonatomic) CDUnknownBlockType icon2DidClickBlock; // @synthesize icon2DidClickBlock=_icon2DidClickBlock;
@property(retain, nonatomic) DTIconFontConf *icon2; // @synthesize icon2=_icon2;
@property(copy, nonatomic) CDUnknownBlockType icon1DidClickBlock; // @synthesize icon1DidClickBlock=_icon1DidClickBlock;
@property(retain, nonatomic) DTIconFontConf *icon1; // @synthesize icon1=_icon1;
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) struct CGSize commentSize; // @synthesize commentSize=_commentSize;
@property(retain, nonatomic) UIFont *commentFont; // @synthesize commentFont=_commentFont;
@property(retain, nonatomic) UIColor *commentColor; // @synthesize commentColor=_commentColor;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) struct CGSize detailSize; // @synthesize detailSize=_detailSize;
@property(retain, nonatomic) UIFont *detailFont; // @synthesize detailFont=_detailFont;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) DTAvatarModel *avatarModel; // @synthesize avatarModel=_avatarModel;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(nonatomic) _Bool isSelectMode; // @synthesize isSelectMode=_isSelectMode;
- (void).cxx_destruct;
- (_Bool)shouldHighlight;
- (double)heightForCell;
- (id)reuseIdentifier;
- (id)cellForItem;

@end
