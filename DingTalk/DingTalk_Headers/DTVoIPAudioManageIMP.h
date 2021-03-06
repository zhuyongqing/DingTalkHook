//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "DTVoIPAudioProtocol-Protocol.h"

@class AVAudioPlayer, NSString;

@interface DTVoIPAudioManageIMP : NSObject <AVAudioPlayerDelegate, DTVoIPAudioProtocol>
{
    _Bool _isSpeakStatus;
    _Bool _isResetWhenEnd;
    _Bool _isMuteByDevice;
    AVAudioPlayer *_audioPlayer;
    NSString *_audioSessionCategoryBeforeVoIP;
}

@property(copy, nonatomic) NSString *audioSessionCategoryBeforeVoIP; // @synthesize audioSessionCategoryBeforeVoIP=_audioSessionCategoryBeforeVoIP;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;
- (void)enableProximity:(_Bool)arg1 likePhone:(_Bool)arg2;
- (id)currentAudioOutputDevice:(id)arg1;
- (id)currentAudioInputDevice:(id)arg1;
- (id)returnAudioSessionCode:(long long)arg1;
- (void)resetAudioSessionCategory;
- (void)activeAudioSession:(_Bool)arg1 notifyOtherApp:(_Bool)arg2 speak:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)setSpeaker:(_Bool)arg1;
- (void)forceStopPlayAudio;
- (void)startPlayAudio:(_Bool)arg1;
- (float)getVolume;
- (_Bool)checkAudioSessionOutputDevices;
- (void)stopPlayVibrate;
- (void)startPlayVibrateCompletion:(CDUnknownBlockType)arg1;
- (_Bool)startPlayAudioByURL:(id)arg1 enableSpeak:(_Bool)arg2 muteByDevice:(_Bool)arg3 muteWhenOutputExist:(_Bool)arg4 resetWhenEnd:(_Bool)arg5 numberOfLoops:(long long)arg6 error:(id *)arg7;
- (_Bool)startPlayAudioByURL:(id)arg1 enableSpeak:(_Bool)arg2 muteByDevice:(_Bool)arg3 resetWhenEnd:(_Bool)arg4 numberOfLoops:(long long)arg5 error:(id *)arg6;
- (_Bool)startPlayAudioByURL:(id)arg1 enableSpeak:(_Bool)arg2 resetWhenEnd:(_Bool)arg3 numberOfLoops:(long long)arg4 error:(id *)arg5;
- (_Bool)startPlayAudioByURL:(id)arg1 enableSpeak:(_Bool)arg2 error:(id *)arg3;
- (_Bool)startPlayAudioByURL:(id)arg1 error:(id *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

