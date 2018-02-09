//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTConferenceUserMobile : OpenModel <OpenModelProtocol>
{
    long long _uid;
    NSString *_mobile;
    NSString *_countryCode;
}

+ (unsigned long long)currentNewestVersion;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *fullMobile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
