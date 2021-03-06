//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TMSonicPayload, TMSonicSDK;

@protocol TMSonicSDKDelegate <NSObject>

@optional
- (void)didTMSonicSDKReceivePayload:(TMSonicSDK *)arg1 payload:(TMSonicPayload *)arg2 error:(NSError *)arg3;
- (void)didTMSonicSDKStopListening:(TMSonicSDK *)arg1 error:(NSError *)arg2;
- (void)didTMSonicSDKStartListening:(TMSonicSDK *)arg1 error:(NSError *)arg2;
- (void)didTMSonicSDKStopPlaying:(TMSonicSDK *)arg1 error:(NSError *)arg2;
- (void)didTMSonicSDKStartPlaying:(TMSonicSDK *)arg1 error:(NSError *)arg2;
- (void)didTMSonicSDKInitialize:(TMSonicSDK *)arg1 error:(NSError *)arg2;
@end

