//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HPGrowingTextViewDelegate-Protocol.h"

@class DTMessageComposerTextView, NSString, UIImageView;
@protocol DTWebPlainInputViewDelegate;

@interface DTWebPlainInputView : UIView <HPGrowingTextViewDelegate>
{
    _Bool _noResignAfterInput;
    NSString *_text;
    unsigned long long _maxInputLength;
    NSString *_holderString;
    id <DTWebPlainInputViewDelegate> _delegate;
    UIView *_attView;
    UIView *_inputContainer;
    DTMessageComposerTextView *_inputView;
    UIImageView *_bgImageView;
    UIImageView *_separateView;
}

@property(retain, nonatomic) UIImageView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) DTMessageComposerTextView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *inputContainer; // @synthesize inputContainer=_inputContainer;
@property(nonatomic) __weak UIView *attView; // @synthesize attView=_attView;
@property(nonatomic) _Bool noResignAfterInput; // @synthesize noResignAfterInput=_noResignAfterInput;
@property(nonatomic) __weak id <DTWebPlainInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *holderString; // @synthesize holderString=_holderString;
@property(nonatomic) unsigned long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
- (void).cxx_destruct;
- (void)inputTextDidChange:(id)arg1;
- (void)cancelInput;
- (void)confirmInput;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)resizeInputComponentsWithDiffHeight:(double)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)resignInputView;
- (void)activeInputView;
- (void)willMoveToSuperview:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)componentInit;
- (id)initInputViewWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
