//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTHpmModel : Marshal
{
    NSString *_appId;
    NSString *_createTime;
    NSString *_desc;
    NSString *_extendInfo;
    NSString *_modifiedTime;
    NSString *_name;
    NSNumber *_size;
    NSString *_url;
    NSString *_version;
    NSNumber *_hpmVersion;
    NSNumber *_useType;
    NSNumber *_hpmStatus;
}

@property(retain, nonatomic) NSNumber *hpmStatus; // @synthesize hpmStatus=_hpmStatus;
@property(retain, nonatomic) NSNumber *useType; // @synthesize useType=_useType;
@property(retain, nonatomic) NSNumber *hpmVersion; // @synthesize hpmVersion=_hpmVersion;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(copy, nonatomic) NSString *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

