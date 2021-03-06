//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UTShareExecutor.h"

#import "WeiboSDKDelegate-Protocol.h"

@class NSString;

@interface UTSinaWeiboExecutor : UTShareExecutor <WeiboSDKDelegate>
{
}

- (void)didReceiveWeiboResponse:(id)arg1;
- (void)didReceiveWeiboRequest:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)shareWithContent:(id)arg1 onStarted:(CDUnknownBlockType)arg2 onFinished:(CDUnknownBlockType)arg3;
- (_Bool)isAuthorized;
- (void)authorizeWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)canShare;
- (void)registerApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

