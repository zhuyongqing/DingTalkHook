//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTConferenceBizCallInfo : OpenModel <OpenModelProtocol>
{
    NSString *_contactName;
    NSString *_phoneNumber;
    NSString *_corpId;
    long long _orgId;
    long long _isSupport;
    long long _callType;
    long long _ispType;
    NSString *_adminUids;
}

+ (unsigned long long)currentNewestVersion;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *adminUids; // @synthesize adminUids=_adminUids;
@property(nonatomic) long long ispType; // @synthesize ispType=_ispType;
@property(nonatomic) long long callType; // @synthesize callType=_callType;
@property(nonatomic) long long isSupport; // @synthesize isSupport=_isSupport;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
