//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTOrgMailChangedModel : NSObject
{
    _Bool _isAutoLogin;
    _Bool _isAlreadyLogin;
    NSString *_orgAuthMail;
    long long _orgId;
}

@property(nonatomic) _Bool isAlreadyLogin; // @synthesize isAlreadyLogin=_isAlreadyLogin;
@property(nonatomic) _Bool isAutoLogin; // @synthesize isAutoLogin=_isAutoLogin;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *orgAuthMail; // @synthesize orgAuthMail=_orgAuthMail;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end
