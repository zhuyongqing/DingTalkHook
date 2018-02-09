//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSNumber, NSString;

@interface WKCloudSettingDBModel : OpenModel <OpenModelProtocol>
{
    NSString *_primaryKey;
    NSString *_moduleName;
    NSString *_key;
    NSString *_settingValue;
    NSNumber *_effectScope;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(retain, nonatomic) NSNumber *effectScope; // @synthesize effectScope=_effectScope;
@property(copy, nonatomic) NSString *settingValue; // @synthesize settingValue=_settingValue;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
