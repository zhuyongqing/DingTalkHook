//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont;
@protocol TQRichTextViewDelegate;

@interface TQRichTextView : UIView
{
    float _lineSpacing;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    NSString *_touchString;
    id <TQRichTextViewDelegate> _delegage;
    NSMutableArray *_richTextRunsArray;
    NSMutableDictionary *_richTextRunRectDic;
    NSString *_textAnalyzed;
}

@property(readonly, copy, nonatomic) NSString *textAnalyzed; // @synthesize textAnalyzed=_textAnalyzed;
@property(readonly, nonatomic) NSMutableDictionary *richTextRunRectDic; // @synthesize richTextRunRectDic=_richTextRunRectDic;
@property(readonly, nonatomic) NSMutableArray *richTextRunsArray; // @synthesize richTextRunsArray=_richTextRunsArray;
@property(nonatomic) __weak id <TQRichTextViewDelegate> delegage; // @synthesize delegage=_delegage;
@property(retain, nonatomic) NSString *touchString; // @synthesize touchString=_touchString;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)analyzeText:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

