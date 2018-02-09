//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTCRecentMailAttendee : OpenModel <OpenModelProtocol>
{
    NSString *_email;
    NSString *_name;
    NSString *_pinYinName;
    NSString *_jianPinName;
    long long _hitCount;
    long long _modifyDate;
    NSString *_uid;
}

+ (id)attendeeWithDTCAttendee:(id)arg1 userId:(id)arg2;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long modifyDate; // @synthesize modifyDate=_modifyDate;
@property(nonatomic) long long hitCount; // @synthesize hitCount=_hitCount;
@property(copy, nonatomic) NSString *jianPinName; // @synthesize jianPinName=_jianPinName;
@property(copy, nonatomic) NSString *pinYinName; // @synthesize pinYinName=_pinYinName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
