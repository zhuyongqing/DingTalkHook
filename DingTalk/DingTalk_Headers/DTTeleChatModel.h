//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTTeleChatModel : Marshal
{
    _Bool _isDetectVoIP;
    NSNumber *_callerUid;
    NSNumber *_calleeUid;
    NSString *_calleeNumber;
    NSString *_cid;
}

@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) _Bool isDetectVoIP; // @synthesize isDetectVoIP=_isDetectVoIP;
@property(copy, nonatomic) NSString *calleeNumber; // @synthesize calleeNumber=_calleeNumber;
@property(retain, nonatomic) NSNumber *calleeUid; // @synthesize calleeUid=_calleeUid;
@property(retain, nonatomic) NSNumber *callerUid; // @synthesize callerUid=_callerUid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
