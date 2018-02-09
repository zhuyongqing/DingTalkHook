//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTAtInputEmotionDelegate-Protocol.h"
#import "DTAtInputTextDelegate-Protocol.h"
#import "DTMessageToolBarContentViewDelegate-Protocol.h"

@class DTMessageInputContainerView, NSString, UIView;

@interface DTMessageReactionTextInputController : NSObject <DTMessageToolBarContentViewDelegate, DTAtInputTextDelegate, DTAtInputEmotionDelegate>
{
    UIView *_maskView;
    double _inputPositionY;
    DTMessageInputContainerView *_inputContainerView;
    UIView *_parentView;
    CDUnknownBlockType _didFinishInputBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didFinishInputBlock; // @synthesize didFinishInputBlock=_didFinishInputBlock;
@property(readonly, nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)emotionSendButtonPressedEmotionView:(id)arg1;
- (void)applyEndUserInputs;
- (void)applyBeginUserInputs;
- (void)presentContentViewWithDuration:(double)arg1 options:(long long)arg2 isShow:(_Bool)arg3;
- (void)keyboardWillChangeFrame:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)messageToolBarDidTappedFaceView:(id)arg1;
- (void)inputResignFirstResponder;
- (void)inputBecomeFirstResponder;
- (void)setNextResponder:(id)arg1;
- (_Bool)isFirstResponder;
- (void)setInputText:(id)arg1;
- (id)inputText;
- (id)inputTextView;
- (void)restoreUserInputWithText:(id)arg1;
- (void)cancelAndResetUserInputs;
- (void)forceDismissMaskView;
- (void)didFinishInput;
- (void)didTapOnMaskView:(id)arg1;
- (void)changeMaskViewVisible:(_Bool)arg1;
- (id)maskView;
- (id)keyWindow;
@property(readonly, nonatomic) DTMessageInputContainerView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
- (void)addKeyboardNotifications;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
