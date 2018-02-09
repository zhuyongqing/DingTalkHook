//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTCMailAttachListViewDelegate-Protocol.h"
#import "TGJSBridgeDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class BLExtendWebView, DTCMailAttachListView, DTCMailDetailPresenter, MDRadialProgressView, NSString, TGJSBridge, UIActivityIndicatorView;
@protocol BLMailDetailHeader, DTCMessageViewDelegate;

@interface DTCMessageView : UIView <TGJSBridgeDelegate, DTCMailAttachListViewDelegate, UIWebViewDelegate, UIActionSheetDelegate, UIScrollViewDelegate>
{
    _Bool _isCached;
    DTCMailDetailPresenter *_eventHandler;
    BLExtendWebView *_webView;
    TGJSBridge *_jsBridge;
    DTCMailAttachListView *_mailAttachListView;
    id <DTCMessageViewDelegate> _messageViewDelegate;
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_loadingView;
    MDRadialProgressView *_radialProgressView;
}

@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(retain, nonatomic) MDRadialProgressView *radialProgressView; // @synthesize radialProgressView=_radialProgressView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak id <DTCMessageViewDelegate> messageViewDelegate; // @synthesize messageViewDelegate=_messageViewDelegate;
@property(retain, nonatomic) DTCMailAttachListView *mailAttachListView; // @synthesize mailAttachListView=_mailAttachListView;
@property(retain, nonatomic) TGJSBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
@property(retain, nonatomic) BLExtendWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) DTCMailDetailPresenter *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)attachmentListView:(id)arg1 willPreviewElementAtIndex:(unsigned long long)arg2;
- (double)distanceBetweenElementsInAttachmentListView:(id)arg1;
- (double)elementTopPaddingForAttachmentListView:(id)arg1;
- (double)elementRightPaddingForAttachmentListView:(id)arg1;
- (double)elementLeftPaddingForAttachmentListView:(id)arg1;
- (double)elementHeightForAttachmentListView:(id)arg1;
- (double)elementWidthForAttachmentListView:(id)arg1;
- (id)attachmentListView:(id)arg1 elementViewAtIndex:(unsigned long long)arg2 withFrame:(struct CGRect)arg3;
- (void)prepareWebView;
- (void)showLoadingFailedView;
- (void)retryClick:(id)arg1;
@property(readonly, nonatomic) UIView<BLMailDetailHeader> *mailHeaderView;
- (void)initMailDetailHeader;
- (void)fixMessageViewContentHeight;
- (void)setAttachmentsViewHidden:(_Bool)arg1;
- (void)showLoading;
- (void)relocateUI;
- (void)resetUIForReuse;
- (void)replaceUrl:(id)arg1 withPath:(id)arg2;
- (id)imageUrlsFromWebView;
- (void)loadHtmlContent:(id)arg1 baseURL:(id)arg2;
- (void)jsBridge:(id)arg1 didReceivedNotificationName:(id)arg2 userInfo:(id)arg3 fromWebView:(id)arg4;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)showWebview;
- (void)loadInlineImage:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)initLoadingView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
