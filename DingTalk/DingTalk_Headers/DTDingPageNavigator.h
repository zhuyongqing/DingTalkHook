//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTDingPageNavigator : NSObject
{
}

+ (id)pushDingWithModel:(id)arg1;
+ (void)showCalendarViewControllerWithSelectedDate:(id)arg1;
+ (void)openConferenceQRWithDingModel:(id)arg1 inController:(id)arg2;
+ (void)openDingListPage;
+ (id)createDingNoticeView;
+ (id)pushDingWithModel:(id)arg1 scrollToComments:(_Bool)arg2 inController:(id)arg3 animated:(_Bool)arg4;
+ (id)pushDingWithModel:(id)arg1 inController:(id)arg2 animated:(_Bool)arg3;
+ (void)pushDingWithDingId:(long long)arg1;
+ (id)createDingPageWithModel:(id)arg1;
+ (void)showCalendarViewControllerFromDingWithNav:(id)arg1;
+ (id)createCalendarViewController;
+ (id)createDingNavigationVC;

@end
