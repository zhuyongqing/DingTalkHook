//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCheckInTaskManagerDelegate-Protocol.h"
#import "DTFastConfigServiceDelegate-Protocol.h"

@class DTALocationManager, NSString;
@protocol DTFastConfigServiceProtocol;

@interface DTOpenPlatformInit : NSObject <DTCheckInTaskManagerDelegate, DTFastConfigServiceDelegate>
{
    id <DTFastConfigServiceProtocol> _fastConfigService;
    DTALocationManager *_aLocationManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DTALocationManager *aLocationManager; // @synthesize aLocationManager=_aLocationManager;
@property(retain, nonatomic) id <DTFastConfigServiceProtocol> fastConfigService; // @synthesize fastConfigService=_fastConfigService;
- (void).cxx_destruct;
- (void)clearupURLConnectionCache;
- (id)fastConfigRemoteURL:(id)arg1;
- (long long)fastConfigRemoteVersion:(id)arg1;
- (void)queryAndUploadUserLocationInBetaVersion;
- (void)onLocationUpdateNotification:(id)arg1;
- (void)onJSAPIResponseNotification:(id)arg1;
- (void)onWorkInfoUpdateNotification:(id)arg1;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)onAccountLoginNotification:(id)arg1;
- (id)checkInRecordService;
- (void)taskManager:(id)arg1 checkInTask:(id)arg2 completeSrcType:(long long)arg3 notify:(id)arg4;
- (void)taskManager:(id)arg1 checkInTask:(id)arg2 handleAbort:(long long)arg3;
- (void)taskManager:(id)arg1 checkInTaskStart:(id)arg2;
- (void)taskManager:(id)arg1 quryUserValueError:(id)arg2 withKey:(id)arg3;
- (void)taskManager:(id)arg1 removeUserValueForKey:(id)arg2;
- (id)taskManager:(id)arg1 userValueForKey:(id)arg2;
- (void)taskManager:(id)arg1 setUserValue:(id)arg2 forKey:(id)arg3;
- (void)fetchAppSafePathed;
- (void)userSelectedWorkTab;
- (void)initWeexContext;
- (void)initHybridContainer;
- (void)resetServices;
- (void)setupServices;
- (void)initOnShowMainUI;
- (void)initOnFinishLaunching;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
