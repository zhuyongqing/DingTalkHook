//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class APVisualStyle, NSString;

@interface APBarButtonItem : UIBarButtonItem
{
    APVisualStyle *_visualStyle;
    NSString *_backButtonTitle;
}

+ (id)backBarButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)flexibleSpaceItem;
@property(retain, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(retain, nonatomic) APVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)initVisualStyle;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

@end
