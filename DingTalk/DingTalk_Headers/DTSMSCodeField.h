//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DTTextField, NSMutableArray, NSString, UIColor, UIFont;
@protocol DTSMSCodeFieldDelegate;

@interface DTSMSCodeField : UIView <UITextViewDelegate, UITextFieldDelegate>
{
    _Bool _triggerFlag;
    NSMutableArray *_inputs;
    id <DTSMSCodeFieldDelegate> _delegate;
    DTTextField *_input;
    unsigned long long _length;
}

@property(nonatomic) _Bool triggerFlag; // @synthesize triggerFlag=_triggerFlag;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(retain, nonatomic) DTTextField *input; // @synthesize input=_input;
@property(nonatomic) __weak id <DTSMSCodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *inputs; // @synthesize inputs=_inputs;
- (void).cxx_destruct;
- (void)clear;
- (void)textFieldDidChange:(id)arg1;
- (id)blinkAnimation;
- (void)dismissBlinkOnView:(id)arg1;
- (void)showBlinkOnView:(id)arg1;
- (void)showBlinkAnimation;
- (void)dealText;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)text;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)letInputViewBecomeFirstResponseder;
@property(nonatomic) long long keyboardType;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCodeLength:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
