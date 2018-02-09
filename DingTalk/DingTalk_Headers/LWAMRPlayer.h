//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface LWAMRPlayer : NSObject
{
    struct OpaqueAudioFileID *audioFile;
    struct AudioStreamBasicDescription dataFormat;
    struct OpaqueAudioQueue *queue;
    long long packetIndex;
    unsigned int numPacketsToRead;
    unsigned int bufferByteSize;
    struct AudioStreamPacketDescription *packetDescs;
    struct AudioQueueBuffer *buffers[3];
    int *_destate;
    unsigned long long _hasReadSize;
    int _bufferFinishCounter;
    struct __sFILE *_amrFile;
    unsigned int mIsRunning;
    NSDate *playStartTime;
    _Bool playing;
    double currentTime;
    CDUnknownBlockType onAudioPlayerDidFinishPlaying;
}

@property(copy) CDUnknownBlockType onAudioPlayerDidFinishPlaying; // @synthesize onAudioPlayerDidFinishPlaying;
@property(readonly, getter=isPlaying) _Bool playing; // @synthesize playing;
@property(readonly) double currentTime; // @synthesize currentTime;
- (int)pauseQueue;
- (int)stopQueue;
- (int)startQueue;
- (void)pause;
- (void)stop;
- (void)dealloc;
- (unsigned int)readPacketsIntoBuffer:(struct AudioQueueBuffer *)arg1;
- (_Bool)play;
- (void)audioQueueOutputWithQueue:(struct OpaqueAudioQueue *)arg1 queueBuffer:(struct AudioQueueBuffer *)arg2;
- (void)initFile:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (id)init;

@end
