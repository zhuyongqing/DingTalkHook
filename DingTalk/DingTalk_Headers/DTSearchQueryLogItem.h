//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTSearchQueryLogItem : NSObject
{
    _Bool _isQueryFinish;
    unsigned long long _searchSourceType;
    unsigned long long _searchDataType;
    unsigned long long _count;
    double _startTime;
    double _endTime;
    NSString *_bucket;
    long long _errorCode;
    NSString *_errorReason;
}

+ (id)logItemKeyWithSearchDataType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
@property(nonatomic) _Bool isQueryFinish; // @synthesize isQueryFinish=_isQueryFinish;
@property(copy, nonatomic) NSString *errorReason; // @synthesize errorReason=_errorReason;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long searchDataType; // @synthesize searchDataType=_searchDataType;
@property(nonatomic) unsigned long long searchSourceType; // @synthesize searchSourceType=_searchSourceType;
- (void).cxx_destruct;
@property(readonly, nonatomic) double duration;

@end
