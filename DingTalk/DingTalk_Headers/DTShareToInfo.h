//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTShareToInfo : Marshal
{
    NSString *_cid;
    NSString *_nickname;
    NSNumber *_orgId;
}

@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
