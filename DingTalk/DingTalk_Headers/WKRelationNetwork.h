//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WKRelationNetwork : NSObject
{
    NSMutableArray *_followResults;
    NSMutableArray *_blacklistResults;
}

- (void).cxx_destruct;
- (void)removeFromBlacklist:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)addToBlacklist:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)listAllBlacklistsWithCursor:(long long)arg1 count:(int)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchAllBlacklists:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getAllBlacklistsWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getStatus:(long long)arg1 openid:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)unfollow:(long long)arg1 openId:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)follow:(long long)arg1 openId:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)listFollowers:(long long)arg1 cursor:(long long)arg2 count:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)listBilateral:(long long)arg1 cursor:(long long)arg2 count:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)listFollowings:(long long)arg1 cursor:(long long)arg2 count:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)listAllFollows:(long long)arg1 cursor:(long long)arg2 count:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchBilaterals:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchFollowers:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchFollowings:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchAllFollows:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getAllFollowsWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getAllAliasWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updateAlias:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
