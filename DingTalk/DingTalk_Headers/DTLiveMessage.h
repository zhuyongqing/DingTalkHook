//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTLiveMessage : Marshal
{
    NSNumber *_messageType;
    NSNumber *_contentType;
    NSNumber *_timestamp;
    NSString *_textContent;
}

@property(copy, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSNumber *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
