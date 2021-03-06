//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, LWPQueue, LWPQueueTimer, NSDate, NSMutableDictionary, NSString;
@protocol DTPeripheralScanManagerDelegate;

@interface DTPeripheralScanManager : NSObject <CBCentralManagerDelegate>
{
    _Bool _backgroudMode;
    _Bool _startFlag;
    _Bool _dt_isScanning;
    id <DTPeripheralScanManagerDelegate> _delegate;
    LWPQueue *_smartQueue;
    CBCentralManager *_centralManager;
    NSMutableDictionary *_peripheralDetected;
    double _scanTimeExpireTime;
    NSDate *_lastDiscoverPeripheralDate;
    LWPQueueTimer *_stopScanTimer;
    LWPQueueTimer *_rescanTimer;
    LWPQueueTimer *_forceRescanTimer;
    long long _scanMode;
    long long _backgroundForceRescanCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long backgroundForceRescanCount; // @synthesize backgroundForceRescanCount=_backgroundForceRescanCount;
@property(nonatomic) _Bool dt_isScanning; // @synthesize dt_isScanning=_dt_isScanning;
@property(nonatomic) long long scanMode; // @synthesize scanMode=_scanMode;
@property(nonatomic) _Bool startFlag; // @synthesize startFlag=_startFlag;
@property(retain, nonatomic) LWPQueueTimer *forceRescanTimer; // @synthesize forceRescanTimer=_forceRescanTimer;
@property(retain, nonatomic) LWPQueueTimer *rescanTimer; // @synthesize rescanTimer=_rescanTimer;
@property(retain, nonatomic) LWPQueueTimer *stopScanTimer; // @synthesize stopScanTimer=_stopScanTimer;
@property(nonatomic) NSDate *lastDiscoverPeripheralDate; // @synthesize lastDiscoverPeripheralDate=_lastDiscoverPeripheralDate;
@property(nonatomic) double scanTimeExpireTime; // @synthesize scanTimeExpireTime=_scanTimeExpireTime;
@property(retain, nonatomic) NSMutableDictionary *peripheralDetected; // @synthesize peripheralDetected=_peripheralDetected;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) _Bool backgroudMode; // @synthesize backgroudMode=_backgroudMode;
@property(retain, nonatomic) LWPQueue *smartQueue; // @synthesize smartQueue=_smartQueue;
@property(nonatomic) __weak id <DTPeripheralScanManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopForceRescanTimer;
- (void)startForceRescanTimer;
- (void)tryStartForceRescanTimerIfNeed;
- (void)tryStartRescanTimerIfNeed;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)didDisableScan;
- (void)didScanNoData;
- (void)didStopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)scan;
- (void)rescan;
- (void)stopRescanTimer;
- (void)startRescanTimer;
- (void)_stopAll;
- (void)endStopScanTimer;
- (void)beginStopScanTimer;
- (void)stopScan;
- (long long)currentMode;
- (void)scanIfNeed;
- (void)stop;
- (void)start;
- (_Bool)isScanExpire;
- (void)switchScanMode:(long long)arg1;
- (void)renewScanTime;
- (_Bool)isScanning;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

