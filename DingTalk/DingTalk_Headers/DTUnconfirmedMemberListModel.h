//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTUnconfirmedMemberListModel : Marshal
{
    _Bool _isShortDing;
    _Bool _isFinal;
    NSNumber *_smsTime;
    NSNumber *_callTime;
    NSArray *_unConfirmedList;
}

@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(copy, nonatomic) NSArray *unConfirmedList; // @synthesize unConfirmedList=_unConfirmedList;
@property(retain, nonatomic) NSNumber *callTime; // @synthesize callTime=_callTime;
@property(retain, nonatomic) NSNumber *smsTime; // @synthesize smsTime=_smsTime;
@property(nonatomic) _Bool isShortDing; // @synthesize isShortDing=_isShortDing;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

