//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTButton, UIButton;

@interface DTTutorialVideoFooterView : UIView
{
    DTButton *_watchButton;
    UIButton *_intoAppButton;
    CDUnknownBlockType _didTapWatchVideo;
    CDUnknownBlockType _didTapIntoApp;
}

@property(copy, nonatomic) CDUnknownBlockType didTapIntoApp; // @synthesize didTapIntoApp=_didTapIntoApp;
@property(copy, nonatomic) CDUnknownBlockType didTapWatchVideo; // @synthesize didTapWatchVideo=_didTapWatchVideo;
- (void).cxx_destruct;
- (void)didTapIntoApp:(id)arg1;
- (void)didTapWatch:(id)arg1;
- (void)layoutSubviews;
- (void)setupFooterView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
