//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTOrgDataIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getAllOrgScoreData:(id)arg1;
- (void)getUnActiveUserDetail:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 offset:(id)arg4 size:(id)arg5 callback:(id)arg6;
- (void)getOrgScoreInfo:(id)arg1 callback:(id)arg2;
- (void)getOrgScoreInfo:(id)arg1;
- (void)getTrendDataInfo:(id)arg1 callback:(id)arg2;

@end

