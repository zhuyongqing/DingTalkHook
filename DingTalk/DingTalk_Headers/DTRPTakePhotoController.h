//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "DTRPCamFlashSwitchViewDelegate-Protocol.h"
#import "DTRPPreviewPhotoControllerDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, DTRPCamFlashSwitchView, NSArray, NSString, UIImageView, UIView;
@protocol DTRPTakePhotoControllerDelegate;

@interface DTRPTakePhotoController : DTViewController <AVCaptureVideoDataOutputSampleBufferDelegate, DTRPCamFlashSwitchViewDelegate, DTRPPreviewPhotoControllerDelegate>
{
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_input;
    AVCaptureVideoPreviewLayer *_previewLayer;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    _Bool isFrontCamera;
    double bottomViewHeight;
    double viewRatio;
    _Bool beOpen;
    NSArray *_takePhotoTypeArray;
    id <DTRPTakePhotoControllerDelegate> _delegate;
    UIView *_waitView;
    UIView *_videoPreviewView;
    UIView *_topView;
    UIView *_cameraView;
    UIImageView *_cameraImageView;
    DTRPCamFlashSwitchView *_flashView;
    long long _takePhotoType;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long takePhotoType; // @synthesize takePhotoType=_takePhotoType;
@property(retain, nonatomic) DTRPCamFlashSwitchView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UIImageView *cameraImageView; // @synthesize cameraImageView=_cameraImageView;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) UIView *waitView; // @synthesize waitView=_waitView;
@property(nonatomic) __weak id <DTRPTakePhotoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *takePhotoTypeArray; // @synthesize takePhotoTypeArray=_takePhotoTypeArray;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (id)cameraWithPosition:(long long)arg1;
- (void)didSwitchCameraFlashMode:(long long)arg1;
- (void)takePicture;
- (void)switchFlash;
- (void)releaseCamera;
- (void)changeCamera;
- (void)initCamera:(_Bool)arg1;
- (void)didAcceptPhoto:(id)arg1;
- (void)changeCameraAction:(id)arg1;
- (void)doCancel:(id)arg1;
- (void)doCamera:(id)arg1;
- (void)setupViewWithPhotoType:(long long)arg1;
- (void)loadCameraViewWithPhotoType:(long long)arg1;
- (void)loadBottomViewWithPhotoType:(long long)arg1;
- (void)loadTopViewWithPhotoType:(long long)arg1;
- (void)hideWaitingView;
- (void)showWaitingView;
- (void)loadVideoPreview;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setUpParmas;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackgroundNotification;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initTakePhotoType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

