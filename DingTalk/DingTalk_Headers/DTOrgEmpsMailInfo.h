//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTOrgEmpsMailInfo : Marshal
{
    NSNumber *_uid;
    NSString *_orgEmail;
    NSString *_empName;
    NSString *_staffId;
}

@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(copy, nonatomic) NSString *empName; // @synthesize empName=_empName;
@property(copy, nonatomic) NSString *orgEmail; // @synthesize orgEmail=_orgEmail;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
