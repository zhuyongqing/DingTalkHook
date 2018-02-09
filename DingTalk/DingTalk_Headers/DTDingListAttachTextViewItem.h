//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface DTDingListAttachTextViewItem : NSObject
{
    _Bool _needShowLink;
    _Bool _copyingEnabled;
    NSString *_text;
    unsigned long long _numberOfLines;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_linkNormalColor;
    UIColor *_linkActiveColor;
    UIColor *_linkBackgroundColor;
}

+ (id)textColor;
+ (id)textFont;
+ (id)buildWithText:(id)arg1 numberOfLines:(unsigned long long)arg2 textColor:(id)arg3 textFont:(id)arg4 linkNormalColor:(id)arg5 linkActiveColor:(id)arg6 linkBackgroundColor:(id)arg7 needShowLink:(_Bool)arg8;
@property(nonatomic) _Bool copyingEnabled; // @synthesize copyingEnabled=_copyingEnabled;
@property(nonatomic) _Bool needShowLink; // @synthesize needShowLink=_needShowLink;
@property(retain, nonatomic) UIColor *linkBackgroundColor; // @synthesize linkBackgroundColor=_linkBackgroundColor;
@property(retain, nonatomic) UIColor *linkActiveColor; // @synthesize linkActiveColor=_linkActiveColor;
@property(retain, nonatomic) UIColor *linkNormalColor; // @synthesize linkNormalColor=_linkNormalColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
