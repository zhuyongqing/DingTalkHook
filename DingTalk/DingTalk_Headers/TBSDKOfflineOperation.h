//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface TBSDKOfflineOperation : NSObject <NSCoding>
{
    _Bool isNeedEcode;
    NSString *userId;
    NSString *apiName;
    NSString *apiVersion;
    NSDictionary *httpHeaders;
    NSDictionary *httpParameters;
    NSDictionary *bizParameters;
    long long timestamp;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSDictionary *bizParameters; // @synthesize bizParameters;
@property(retain, nonatomic) NSDictionary *httpParameters; // @synthesize httpParameters;
@property(retain, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders;
@property(nonatomic) _Bool isNeedEcode; // @synthesize isNeedEcode;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

