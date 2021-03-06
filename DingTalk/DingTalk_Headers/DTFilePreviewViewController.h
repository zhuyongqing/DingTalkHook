//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class DTBizMessage, NSString, UIButton, UIImageView, UILabel, UIView, UIWebView;

@interface DTFilePreviewViewController : DTViewController <UIWebViewDelegate, DTConversationSelectViewControllerDelegate>
{
    DTBizMessage *_message;
    NSString *_fileUrl;
    NSString *_fileName;
    NSString *_fileType;
    UIWebView *_webView;
    long long _fileSize;
    UIImageView *_typeImageView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    UIButton *_downLoadButton;
    UILabel *_progressLabel;
    UIButton *_cancelDownloadBtn;
    UIView *_progressContainer;
    UIView *_progressBackView;
}

+ (id)filePreviewControllerWithUrl:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 fileSize:(long long)arg4;
@property(retain, nonatomic) UIView *progressBackView; // @synthesize progressBackView=_progressBackView;
@property(retain, nonatomic) UIView *progressContainer; // @synthesize progressContainer=_progressContainer;
@property(retain, nonatomic) UIButton *cancelDownloadBtn; // @synthesize cancelDownloadBtn=_cancelDownloadBtn;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIButton *downLoadButton; // @synthesize downLoadButton=_downLoadButton;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(retain, nonatomic) DTBizMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)conversationSelectViewMessageForTransmit;
- (void)dealloc;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)didReceiveMemoryWarning;
- (void)loadFileWithFilePath:(id)arg1 isDownLoad:(_Bool)arg2;
- (id)tempFilePathWithFilePath:(id)arg1;
- (void)downLoadFile;
- (void)cancelDownload;
- (void)addProgressView;
- (_Bool)localFileExist;
- (id)filePathWithFileKey:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (_Bool)judgeFileHasDowdLoaded;
- (void)setProgress:(long long)arg1 expectedSize:(long long)arg2;
- (void)finishDownload;
- (void)resetBeforeDownload;
- (void)beginDownLoadFile:(id)arg1;
- (void)dynamicCalculateFileNameLaelHeight;
- (void)setDownLoadPageFrame;
- (void)showSaveToSpaceSheet;
- (void)onShowMore;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

