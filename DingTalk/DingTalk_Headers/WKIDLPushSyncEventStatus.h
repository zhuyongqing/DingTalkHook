//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface WKIDLPushSyncEventStatus : Marshal
{
    NSNumber *_errCode;
    NSString *_errMsg;
}

@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSNumber *errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
