//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface YSProgressView : UIView
{
    double _progressHeight;
    double _progressValue;
    UIColor *_trackTintColor;
    UIColor *_progressTintColor;
    UIView *_progressView;
    struct CGRect _rect_progressView;
}

@property(nonatomic) struct CGRect rect_progressView; // @synthesize rect_progressView=_rect_progressView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(nonatomic) double progressHeight; // @synthesize progressHeight=_progressHeight;
- (void).cxx_destruct;
- (void)_setHeightRestrictionOfFrame:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
