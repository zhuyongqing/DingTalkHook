//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTApTerminalModel : Marshal
{
    _Bool _existAp;
    NSNumber *_terminalCount;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *terminalCount; // @synthesize terminalCount=_terminalCount;
@property(nonatomic) _Bool existAp; // @synthesize existAp=_existAp;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;
- (id)description;

@end
