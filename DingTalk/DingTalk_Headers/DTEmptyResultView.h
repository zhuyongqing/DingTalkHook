//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class DTButton, NSAttributedString, NSString, UIButton, UIImageView, UILabel, UIView;

@interface DTEmptyResultView : UIControl
{
    _Bool _hidesArrow;
    _Bool _customFrame;
    _Bool _useConstraints;
    _Bool _customDetailWidth;
    NSString *_searchText;
    CDUnknownBlockType _backgroundDidClick;
    CDUnknownBlockType _linkDidClick;
    CDUnknownBlockType _bottomBtnDidClicked;
    CDUnknownBlockType _actionButtonDidClicked;
    unsigned long long _viewType;
    UIImageView *_imageView;
    UILabel *_label;
    UILabel *_detail;
    NSAttributedString *_labelText;
    UIButton *_gudieButton;
    UIButton *_linkButton;
    DTButton *_moreButton;
    CDUnknownBlockType _finishBlock;
    UILabel *_bottomLabel;
    UIButton *_actionButton;
    UIImageView *_guideImageView;
    UIView *_containerView;
}

@property(nonatomic) _Bool customDetailWidth; // @synthesize customDetailWidth=_customDetailWidth;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) _Bool useConstraints; // @synthesize useConstraints=_useConstraints;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) DTButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) UIButton *gudieButton; // @synthesize gudieButton=_gudieButton;
@property(retain, nonatomic) NSAttributedString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) UILabel *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) CDUnknownBlockType actionButtonDidClicked; // @synthesize actionButtonDidClicked=_actionButtonDidClicked;
@property(nonatomic) _Bool customFrame; // @synthesize customFrame=_customFrame;
@property(nonatomic) _Bool hidesArrow; // @synthesize hidesArrow=_hidesArrow;
@property(copy, nonatomic) CDUnknownBlockType bottomBtnDidClicked; // @synthesize bottomBtnDidClicked=_bottomBtnDidClicked;
@property(copy, nonatomic) CDUnknownBlockType linkDidClick; // @synthesize linkDidClick=_linkDidClick;
@property(copy, nonatomic) CDUnknownBlockType backgroundDidClick; // @synthesize backgroundDidClick=_backgroundDidClick;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)actionButtonDidClickHandler:(id)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)setMoreBottomBtnTitle:(id)arg1;
- (void)initForCommonNoWifi;
- (void)initForCommonError;
- (void)initOrgAddress;
- (void)initGroupInviteNoPermission;
- (void)initCalendarList;
- (void)initGroupMemberSortOrg;
- (void)initForDingNotPermission;
- (void)initNoPermissionView;
- (void)initForMessageReactionComment;
- (void)initForMessageReactionLike;
- (void)initForContactAccess;
- (void)initForRobotListNotAdd;
- (void)initForRobotList;
- (void)initForFocusList;
- (void)initForWorkAgent;
- (void)initForChannelAssistant;
- (void)initForChannelPersionInvited;
- (void)initForChannelPersionFollow;
- (void)initForSecretChatList;
- (void)initForGroupListView;
- (void)setupEmotionDownloadsNoResults;
- (void)setupEmotionStoreNoResults;
- (void)initForDingReceivedUnFinish;
- (void)initForDingReceivedFinish;
- (void)setupJoinGroupRequestListView;
- (void)initForCRMClientPickNoPermisson;
- (void)initForCRMClient;
- (void)initForVideoConferenceHistory;
- (void)initCRMCustomerFollower;
- (void)initForRecent;
- (void)initForRecentFile;
- (void)initForBlacklist;
- (void)initForBossList;
- (void)initForAttentionList;
- (void)initForDepartAndMember;
- (void)initForDingNotExist;
- (void)initForDingDeleted;
- (void)initForMessageReceivedUnConfirm;
- (void)initForMessageReceivedConfirm;
- (void)initForDingReceivedUnConfirm;
- (void)initForDingReceivedConfirm;
- (void)initForDingReceived;
- (void)initForDingSent;
- (void)backgroundPressed:(id)arg1;
- (void)moreButtonClick:(id)arg1;
- (void)linkButtonClick:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)initForLabel;
- (void)initForShareMobileFriendsList;
- (void)initForCommonExternalContact;
- (void)initForExternalShareContact;
- (void)initForExternalFilterContact;
- (void)initForGroupAnnounceNoPermission;
- (void)initForGroupAnnounceWithPermission;
- (void)initForBossConversationList;
- (void)initForGroupInvite;
- (void)initForGroupApplyUnauthorized;
- (void)initIconTitleBtn;
- (void)initForGroupApply;
- (void)initForEffectiveConversation;
- (void)initForConversation;
- (void)initForGroup;
- (void)initForNewSearch;
- (void)initForSearch;
- (void)initForDeletedDing;
- (void)initForPinnedDing;
- (void)initForMeetingDing;
- (void)initForTaskDing;
- (void)initForDing;
- (void)initForReactionLinkList;
- (void)initForConferenceCallManage;
- (void)initForConferenceMobileContact;
- (void)initForMobileContact;
- (void)initForNewFriends;
- (void)initForFriend;
- (void)initForCommon;
- (void)refreshMoreBottomFrame;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)setEmptyIconWithImage:(id)arg1;
- (void)setLinkText:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)initForDepartAndMemberAndInvite;
- (void)initForDepartAndMemberAndAdd;
- (void)initNoSubManager;
- (void)setupConstraintsForDing;
- (void)initViewForType:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;

@end

