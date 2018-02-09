//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseYapObject.h"

@class NSError, NSMutableArray, NSString;

@interface BLBaseTask : BLBaseYapObject
{
    _Bool _isCancelled;
    int _type;
    id _context;
    NSString *_taskID;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _progressBlock;
    unsigned long long _retryTimes;
    NSError *_cancelError;
    long long _startTime;
    NSString *_accountUUID;
    CDUnknownBlockType _extractBlock;
    CDUnknownBlockType _mergeCallbackBlock;
    NSMutableArray *_dependees;
}

+ (id)collection;
+ (id)excludeProperties;
+ (id)findAll;
+ (id)findWithTaskID:(id)arg1 account:(id)arg2;
+ (id)findWithAccount:(id)arg1;
@property(retain, nonatomic) NSMutableArray *dependees; // @synthesize dependees=_dependees;
@property(copy, nonatomic) CDUnknownBlockType mergeCallbackBlock; // @synthesize mergeCallbackBlock=_mergeCallbackBlock;
@property(copy, nonatomic) CDUnknownBlockType extractBlock; // @synthesize extractBlock=_extractBlock;
@property(retain, nonatomic) NSString *accountUUID; // @synthesize accountUUID=_accountUUID;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)cancelSlotNames;
- (_Bool)isLocalDeleteOnly;
- (id)dependOnSlotNames;
- (void)getRetFromDepParent:(id)arg1;
- (_Bool)updateInfo;
- (_Bool)infoReady;
- (_Bool)mergeDepChild:(id)arg1;
- (void)getRetFromAnotherSelf:(id)arg1;
- (void)mergeWithAnotherSelf:(id)arg1;
- (id)slotName;
- (void)removeDependees:(id)arg1;
- (void)clearDependees;
- (void)addDependee:(id)arg1;
- (id)unUniqueRecursiveDependees;
- (id)allDependees:(_Bool)arg1;
- (id)collection;
- (void)willTerminate;
- (void)willProcess;
- (unsigned long long)canRetryWithError:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)process;
- (id)description;
- (id)init;
- (void)punish;
- (_Bool)isInPunish;

@end
