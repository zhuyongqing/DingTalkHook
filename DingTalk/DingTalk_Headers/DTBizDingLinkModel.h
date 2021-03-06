//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBizDingLinkModel-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface DTBizDingLinkModel : NSObject <DTBizDingLinkModel, NSCoding>
{
    long long _type;
    NSString *_title;
    NSString *_text;
    NSString *_picMediaId;
    NSString *_linkUrl;
    NSDictionary *_extension;
}

+ (id)convertToLinkModel:(id)arg1;
+ (id)convertFromLinkModel:(id)arg1;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *picMediaId; // @synthesize picMediaId=_picMediaId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getCModel;
- (id)initWithCModel:(id)arg1 type:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

