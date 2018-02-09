//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCalendarServicePersistenceProtocol-Protocol.h"

@class NSString, OpenDatabase, OpenMDHandler;

@interface DTCalendarServicePersistenceIMP : NSObject <DTCalendarServicePersistenceProtocol>
{
    OpenDatabase *_dbConnection;
    OpenMDHandler *_calendarHandler;
    OpenMDHandler *_eventHandler;
    OpenMDHandler *_instanceHandler;
    OpenMDHandler *_mobileSafeHandler;
}

@property(retain, nonatomic) OpenMDHandler *mobileSafeHandler; // @synthesize mobileSafeHandler=_mobileSafeHandler;
@property(retain, nonatomic) OpenMDHandler *instanceHandler; // @synthesize instanceHandler=_instanceHandler;
@property(retain, nonatomic) OpenMDHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) OpenMDHandler *calendarHandler; // @synthesize calendarHandler=_calendarHandler;
@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void).cxx_destruct;
- (id)checkModelWithEventId:(id)arg1;
- (void)updateMobileCalendarEventsVaildStatus:(_Bool)arg1 eventIds:(id)arg2;
- (void)updateMobileCalendarEventsCheckedStatus:(id)arg1;
- (id)unValidMobileCalendarWithEventIds:(id)arg1;
- (id)filterCheckedMobileCalendarEventIds:(id)arg1;
- (id)calendarInstancesWithSenderID:(long long)arg1 minEndTime:(double)arg2 maxEndTime:(double)arg3;
- (id)sqlWithCount:(unsigned long long)arg1;
- (_Bool)deleteCalendarInstanceWithEventId:(long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3;
- (id)calendarInstancesFromStartTime:(long long)arg1 endTime:(long long)arg2;
- (id)calendarInstancesWithEventId:(long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3;
- (_Bool)deleteCalendarInstancesWithCalendarIds:(id)arg1;
- (_Bool)saveCalendarInstances:(id)arg1;
- (id)calendarInstancesWithCalendarIds:(id)arg1;
- (id)calendarInstanceWithUuid:(id)arg1;
- (_Bool)deleteCalendarsWithCalendarIds:(id)arg1;
- (_Bool)saveCalendar:(id)arg1;
- (id)calendarWithCalendarId:(long long)arg1;
- (_Bool)deleteCalendarEventsWithCalendarIds:(id)arg1;
- (_Bool)saveCalendarEvents:(id)arg1;
- (id)allRecurrenceCalendarEvents;
- (id)calendarEventsFromStartTime:(long long)arg1 endTime:(long long)arg2;
- (id)calendarEventsWithCalendarIds:(id)arg1;
- (id)calendarEventsWithCalendarId:(long long)arg1;
- (id)calendarEventWithEventId:(long long)arg1;
- (_Bool)clearCalendarDB;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
