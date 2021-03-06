//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTConversationSettingService : NSObject
{
}

- (void)listMembersBanWordsStatusForConversation:(id)arg1 isAsync:(_Bool)arg2 completeBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)updateAllMemberBanWordsStatusForConversation:(id)arg1 isEnable:(_Bool)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)removeMemberFromBanWordsWhiteList:(id)arg1 openId:(long long)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)removeMemberFromBanWordsBlackList:(id)arg1 openId:(long long)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)addMembersToBanWordsWhiteList:(id)arg1 openIds:(id)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)addMembersToBanWordsBlackList:(id)arg1 openIds:(id)arg2 banTime:(long long)arg3 sendMessage:(id)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)updateMemberGroupNickWithParam:(id)arg1 nick:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)memberGroupNicksWithParam:(id)arg1 forceRpc:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)localMemberGroupNicksWithParam:(id)arg1 isAsync:(_Bool)arg2 completeBlock:(CDUnknownBlockType)arg3;

@end

