//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTRedEnvelopBaseViewController.h"

#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DTBizConversation, DTDingDatePickerView, DTExtendedNavBarView, DTRedEnvelopAmountCell, DTRedEnvelopSelectReceiverCell, DTRedEnvelopTextInputCell, DTRedEnvelopeSubscribeLifecycleModel, DTSegmentedView, NSArray, NSDate, NSString, UIAlertView, UIButton, UILabel, UITableView, UIView, YYLabel;

@interface DTRedEnvelopSendViewController : DTRedEnvelopBaseViewController <UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate>
{
    _Bool _isGoodTimeEnable;
    CDUnknownBlockType _completionBlock;
    long long _type;
    NSString *_cId;
    DTBizConversation *_conversation;
    NSArray *_receiverUids;
    NSArray *_selectedUids;
    NSString *_congratulation;
    DTRedEnvelopeSubscribeLifecycleModel *_subscribeLifecycleModel;
    DTExtendedNavBarView *_extendedNavBarView;
    DTSegmentedView *_segmentedView;
    UITableView *_tableView;
    UIView *_tableHeaderView;
    UILabel *_headerTitle;
    DTRedEnvelopSelectReceiverCell *_selectReceiverCell;
    UILabel *_groupCountLabel;
    DTRedEnvelopAmountCell *_redEnvelopCountCell;
    DTRedEnvelopAmountCell *_amountCell;
    DTRedEnvelopTextInputCell *_congratulationCell;
    DTRedEnvelopSelectReceiverCell *_selectTimeCell;
    YYLabel *_selectTimeLabel;
    UILabel *_expressionLabel;
    UIButton *_sendBtn;
    UILabel *_footerLabel;
    UILabel *_errorLabel;
    NSString *_totalAmount;
    NSDate *_goodTime;
    long long _selectedSegmentIndex;
    DTDingDatePickerView *_pickView;
    long long _sendStatus;
    NSString *_payingBusinessId;
    UIAlertView *_alert;
}

@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) NSString *payingBusinessId; // @synthesize payingBusinessId=_payingBusinessId;
@property(nonatomic) long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(retain, nonatomic) DTDingDatePickerView *pickView; // @synthesize pickView=_pickView;
@property(nonatomic) _Bool isGoodTimeEnable; // @synthesize isGoodTimeEnable=_isGoodTimeEnable;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(retain, nonatomic) NSDate *goodTime; // @synthesize goodTime=_goodTime;
@property(copy, nonatomic) NSString *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *expressionLabel; // @synthesize expressionLabel=_expressionLabel;
@property(retain, nonatomic) YYLabel *selectTimeLabel; // @synthesize selectTimeLabel=_selectTimeLabel;
@property(retain, nonatomic) DTRedEnvelopSelectReceiverCell *selectTimeCell; // @synthesize selectTimeCell=_selectTimeCell;
@property(retain, nonatomic) DTRedEnvelopTextInputCell *congratulationCell; // @synthesize congratulationCell=_congratulationCell;
@property(retain, nonatomic) DTRedEnvelopAmountCell *amountCell; // @synthesize amountCell=_amountCell;
@property(retain, nonatomic) DTRedEnvelopAmountCell *redEnvelopCountCell; // @synthesize redEnvelopCountCell=_redEnvelopCountCell;
@property(retain, nonatomic) UILabel *groupCountLabel; // @synthesize groupCountLabel=_groupCountLabel;
@property(retain, nonatomic) DTRedEnvelopSelectReceiverCell *selectReceiverCell; // @synthesize selectReceiverCell=_selectReceiverCell;
@property(retain, nonatomic) UILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DTSegmentedView *segmentedView; // @synthesize segmentedView=_segmentedView;
@property(retain, nonatomic) DTExtendedNavBarView *extendedNavBarView; // @synthesize extendedNavBarView=_extendedNavBarView;
@property(retain, nonatomic) DTRedEnvelopeSubscribeLifecycleModel *subscribeLifecycleModel; // @synthesize subscribeLifecycleModel=_subscribeLifecycleModel;
@property(copy, nonatomic) NSString *congratulation; // @synthesize congratulation=_congratulation;
@property(copy, nonatomic) NSArray *selectedUids; // @synthesize selectedUids=_selectedUids;
@property(copy, nonatomic) NSArray *receiverUids; // @synthesize receiverUids=_receiverUids;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSString *cId; // @synthesize cId=_cId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)sendTimeText;
- (void)limitTextField:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)resginAllFirstResponder;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)didTapPickGoodTime;
- (_Bool)isGoodTimeRedEnvelop;
- (void)showPayResultAlert;
- (void)onBecomeActive;
- (void)processAlipayResultWhenCallbackFail:(id)arg1;
- (void)processBalancePayResultWhenCallbackFail:(id)arg1;
- (void)payRedEnvelopFromAlipay:(id)arg1;
- (void)payRedEnvelopFromBalance:(id)arg1;
- (void)generateRedEnvelopCluster:(long long)arg1 clusterId:(id)arg2 amount:(id)arg3 size:(int)arg4 receivers:(id)arg5 type:(long long)arg6 cid:(id)arg7 congratulations:(id)arg8 oid:(long long)arg9 redEnvelopeSubscribeLifecycleModel:(id)arg10 pickPlanTime:(long long)arg11 ext:(id)arg12;
- (void)onSend:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)hiddenErrorLabel;
- (void)showErrorLabel:(id)arg1;
- (_Bool)checkRedEnvelopCountAndAmount;
- (void)updateUI;
- (void)onPickReceiver;
- (void)onDismissKeyboard;
- (void)segmentItemSelected:(long long)arg1;
- (void)configViewGroup;
- (void)configViewSingle;
- (void)configViews;
- (void)loadComponents;
- (void)showGuide;
- (void)onClose;
- (void)configNavigation;
- (void)addObservers;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initNormalRedEnvelopWithUid:(long long)arg1 congratulation:(id)arg2 subscribeLifecycleModel:(id)arg3;
- (id)initEnterpriseRedEnvelopWithCId:(id)arg1 receiverUids:(id)arg2 congratulation:(id)arg3 subscribeLifecycleModel:(id)arg4;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

