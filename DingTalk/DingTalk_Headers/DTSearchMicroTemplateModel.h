//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTSearchMicroTemplateModel : Marshal
{
    NSString *_id_;
    NSString *_templateName;
    NSString *_corpId;
    NSString *_companyName;
    NSString *_logo;
    NSNumber *_templateType;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSNumber *templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

