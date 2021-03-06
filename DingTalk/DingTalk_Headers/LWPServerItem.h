//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface LWPServerItem : NSObject <NSCopying, NSCoding>
{
    NSString *_serverUrl;
    double _expireTime;
    double _cacheMaxAge;
    long long _failed;
    long long _succ;
    long long _total;
}

@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long succ; // @synthesize succ=_succ;
@property(nonatomic) long long failed; // @synthesize failed=_failed;
@property(nonatomic) double cacheMaxAge; // @synthesize cacheMaxAge=_cacheMaxAge;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

