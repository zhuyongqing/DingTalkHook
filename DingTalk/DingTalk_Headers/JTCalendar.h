//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIScrollViewDelegate-Protocol.h"

@class JTCalendarAppearance, JTCalendarContentView, JTCalendarDataCache, JTCalendarMenuView, NSDate, NSString;
@protocol JTCalendarDataSource;

@interface JTCalendar : NSObject <UIScrollViewDelegate>
{
    _Bool cacheLastWeekMode;
    unsigned long long cacheFirstWeekDay;
    JTCalendarMenuView *_menuMonthsView;
    JTCalendarContentView *_contentView;
    id <JTCalendarDataSource> _dataSource;
    NSDate *_currentDate;
    NSDate *_currentDateSelected;
    JTCalendarDataCache *_dataCache;
    JTCalendarAppearance *_calendarAppearance;
}

@property(readonly, nonatomic) JTCalendarAppearance *calendarAppearance; // @synthesize calendarAppearance=_calendarAppearance;
@property(readonly, nonatomic) JTCalendarDataCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) NSDate *currentDateSelected; // @synthesize currentDateSelected=_currentDateSelected;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic) __weak id <JTCalendarDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak JTCalendarContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak JTCalendarMenuView *menuMonthsView; // @synthesize menuMonthsView=_menuMonthsView;
- (void).cxx_destruct;
- (void)loadPreviousPage;
- (void)loadNextPage;
- (void)loadPreviousMonth;
- (void)loadNextMonth;
- (void)repositionViews;
- (void)updatePage;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadAppearance;
- (void)reloadData;
- (void)dealloc;
- (id)init;
- (id)dt_dateFromDate:(id)arg1;
- (id)dt_stringFromDate:(id)arg1;
- (_Bool)dt_isDateA:(id)arg1 equalToDateB:(id)arg2;
@property(copy, nonatomic) NSString *dt_dateFormat;
- (id)dt_dateFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

