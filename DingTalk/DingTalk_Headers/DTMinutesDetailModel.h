//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTMinutesDetailModel : Marshal
{
    NSNumber *_dingId;
    NSString *_content;
    NSNumber *_contentType;
    NSNumber *_recorderId;
    NSNumber *_minutesId;
}

@property(retain, nonatomic) NSNumber *minutesId; // @synthesize minutesId=_minutesId;
@property(retain, nonatomic) NSNumber *recorderId; // @synthesize recorderId=_recorderId;
@property(retain, nonatomic) NSNumber *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *dingId; // @synthesize dingId=_dingId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
