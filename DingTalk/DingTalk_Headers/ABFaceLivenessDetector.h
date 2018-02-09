//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ABLivenessDetector-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIImage;
@protocol ABDetectListener, OS_dispatch_queue;

@interface ABFaceLivenessDetector : NSObject <ABLivenessDetector>
{
    int _currentDetectType;
    int _initImageWidth;
    int _initImageHeight;
    int _initImageAngle;
    int _detectorStatus;
    int _yuvDataSize;
    id <ABDetectListener> _detectListener;
    NSMutableDictionary *_params;
    UIImage *_qualityImage;
    UIImage *_globalImage;
    UIImage *_originImage;
    NSMutableArray *_validFrames;
    char *_yuvData;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGRect _imageFaceSize;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property int yuvDataSize; // @synthesize yuvDataSize=_yuvDataSize;
@property char *yuvData; // @synthesize yuvData=_yuvData;
@property(retain) NSMutableArray *validFrames; // @synthesize validFrames=_validFrames;
@property(retain) UIImage *originImage; // @synthesize originImage=_originImage;
@property(retain) UIImage *globalImage; // @synthesize globalImage=_globalImage;
@property struct CGRect imageFaceSize; // @synthesize imageFaceSize=_imageFaceSize;
@property(retain) UIImage *qualityImage; // @synthesize qualityImage=_qualityImage;
@property int detectorStatus; // @synthesize detectorStatus=_detectorStatus;
@property int initImageAngle; // @synthesize initImageAngle=_initImageAngle;
@property int initImageHeight; // @synthesize initImageHeight=_initImageHeight;
@property int initImageWidth; // @synthesize initImageWidth=_initImageWidth;
@property(retain) NSMutableDictionary *params; // @synthesize params=_params;
@property int currentDetectType; // @synthesize currentDetectType=_currentDetectType;
@property(retain, nonatomic) id <ABDetectListener> detectListener; // @synthesize detectListener=_detectListener;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getLog;
- (void)reset;
- (id)getValidFrame;
- (id)getOriginImage;
- (id)getGlobalImage;
- (struct CGRect)getImageFaceSize;
- (id)getQualityImage;
- (int)getCurrentDetectType;
- (void)changeDetectType:(int)arg1;
- (int)transferFailReason:(int)arg1;
- (int)transferDetectType:(int)arg1;
- (int)transferMessageCode:(int)arg1;
- (_Bool)handleResult:(struct ABDetectResult)arg1 withImgBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)handleError:(int)arg1 withInnerError:(int)arg2;
- (_Bool)doDetect:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3 datas:(id)arg4 withImgBuffer:(struct opaqueCMSampleBuffer *)arg5 withAngle:(int)arg6;
- (_Bool)doDetect:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3 withAngle:(int)arg4;
- (_Bool)doDetect:(id)arg1 datas:(id)arg2;
- (_Bool)doDetect:(id)arg1;
- (_Bool)doDetect:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2 datas:(id)arg3;
- (_Bool)doDetect:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (id)getVersion;
- (void)dismiss;
- (int)initDetector:(id)arg1;
- (id)init:(id)arg1;
- (id)init:(id)arg1 andDispatchQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
