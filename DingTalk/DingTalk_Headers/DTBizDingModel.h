//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "DTBizDingModel-Protocol.h"
#import "OpenModelProtocol-Protocol.h"

@class DTBizCalendarEvent, DTBizCalendarEventsWrapper, DTBizDingAttachment, DTBizDingFrameModel, DTCycleRemindRuleModel, DTDingCommentViewModel, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface DTBizDingModel : OpenModel <OpenModelProtocol, DTBizDingModel>
{
    NSMutableDictionary *_userProperties;
    _Bool _commentNotify;
    _Bool _isTaskDing;
    _Bool _isFocusDing;
    _Bool _canCreateSubTask;
    _Bool _isRemindAtDelayTime;
    _Bool _isCycleRemind;
    DTBizDingAttachment *_attachment;
    NSString *_bizExtensionJson;
    NSString *_attachmentJSON;
    NSString *_attachmentExtraJSON;
    NSArray *_receiverUids;
    NSString *_receiverUidsJSON;
    NSArray *_ccUids;
    NSString *_ccUidsJson;
    NSArray *_latestCommentList;
    NSString *_latestCommentListJson;
    unsigned long long _primaryKey;
    NSString *_localDid;
    long long _dingId;
    long long _senderUid;
    long long _tag;
    long long _urgentLevel;
    long long _createAt;
    long long _entityBizType;
    long long _entityId;
    long long _entityDataType;
    long long _entityCreateAt;
    NSString *_extInfoJSON;
    NSDictionary *_extInfoDic;
    long long _sendStatus;
    long long _senderIdentity;
    long long _memberCount;
    NSString *_content;
    long long _dingRemainTime;
    long long _totalCount;
    long long _unConfirmCount;
    long long _status;
    long long _confirmStatus;
    long long _unReadCommentCounts;
    long long _unReadNumberCommentCounts;
    long long _totalCommentCount;
    long long _modifyAt;
    long long _sendAt;
    long long _hidden;
    long long _deadline;
    long long _finishStatus;
    long long _selfCurrentStatus;
    long long _unFinishCount;
    long long _commentAuth;
    long long _taskRemindTime;
    long long _finishTime;
    long long _selfFinishTime;
    long long _version;
    long long _taskRemindUrgentLevel;
    DTBizDingFrameModel *_dingFrameModel;
    long long _cellType;
    long long _cellEditType;
    long long _bizType;
    long long _bizId;
    long long _parentId;
    long long _subTaskCount;
    long long _role;
    long long _ccUidCount;
    long long _executorCompleteCount;
    DTDingCommentViewModel *_commentViewModel;
    DTBizCalendarEvent *_conferenceEvent;
    DTBizCalendarEventsWrapper *_eventsWrapper;
    long long _subBizType;
    long long _conferenceEndTime;
    DTCycleRemindRuleModel *_cycleRemindRule;
    NSDate *_remindTime;
    NSDate *_nextRemindTime;
}

+ (void)upgradeVersion20:(id)arg1;
+ (void)upgradeVersion19:(id)arg1;
+ (void)upgradeVersion18:(id)arg1;
+ (void)upgradeVersion17:(id)arg1;
+ (void)upgradeVersion16:(id)arg1;
+ (void)upgradeVersion15:(id)arg1;
+ (void)upgradeVersion14:(id)arg1;
+ (void)upgradeVersion13:(id)arg1;
+ (void)upgradeVersion12:(id)arg1;
+ (void)upgradeVersion11:(id)arg1;
+ (void)upgradeVersion10:(id)arg1;
+ (void)upgradeVersion9:(id)arg1;
+ (void)upgradeVersion8:(id)arg1;
+ (void)resetDBCursors;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (long long)urgentLevelWithRemindType:(long long)arg1;
+ (long long)remindTypeWithUrgentLevel:(long long)arg1;
+ (id)buildDingModelWithSendModel:(id)arg1 message:(id)arg2 conversation:(id)arg3 attachment:(id)arg4;
+ (id)dingSourceContentWithParent:(id)arg1;
+ (id)dingSourceFromFromatWithDingModel:(id)arg1;
+ (id)checkInTime:(long long)arg1 conferenceStartTime:(long long)arg2 font:(id)arg3;
+ (id)titleAttrFont;
+ (id)ftsTableColumnsTokenizers;
+ (id)ftsTableNewColumns;
+ (id)ftsTableColumns;
+ (void)upgradeTriggerWithMDHandler:(id)arg1;
+ (_Bool)isMatchedWithTableName:(id)arg1;
@property(retain, nonatomic) NSDate *nextRemindTime; // @synthesize nextRemindTime=_nextRemindTime;
@property(retain, nonatomic) NSDate *remindTime; // @synthesize remindTime=_remindTime;
@property(retain, nonatomic) DTCycleRemindRuleModel *cycleRemindRule; // @synthesize cycleRemindRule=_cycleRemindRule;
@property(nonatomic) _Bool isCycleRemind; // @synthesize isCycleRemind=_isCycleRemind;
@property(nonatomic) _Bool isRemindAtDelayTime; // @synthesize isRemindAtDelayTime=_isRemindAtDelayTime;
@property(nonatomic) _Bool canCreateSubTask; // @synthesize canCreateSubTask=_canCreateSubTask;
@property(nonatomic) long long conferenceEndTime; // @synthesize conferenceEndTime=_conferenceEndTime;
@property(nonatomic) long long subBizType; // @synthesize subBizType=_subBizType;
@property(retain, nonatomic) DTBizCalendarEventsWrapper *eventsWrapper; // @synthesize eventsWrapper=_eventsWrapper;
@property(retain, nonatomic) DTBizCalendarEvent *conferenceEvent; // @synthesize conferenceEvent=_conferenceEvent;
@property(retain, nonatomic) DTDingCommentViewModel *commentViewModel; // @synthesize commentViewModel=_commentViewModel;
@property(nonatomic) long long executorCompleteCount; // @synthesize executorCompleteCount=_executorCompleteCount;
@property(nonatomic) long long ccUidCount; // @synthesize ccUidCount=_ccUidCount;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long subTaskCount; // @synthesize subTaskCount=_subTaskCount;
@property(nonatomic) long long parentId; // @synthesize parentId=_parentId;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool isFocusDing; // @synthesize isFocusDing=_isFocusDing;
@property(nonatomic) long long cellEditType; // @synthesize cellEditType=_cellEditType;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) DTBizDingFrameModel *dingFrameModel; // @synthesize dingFrameModel=_dingFrameModel;
@property(nonatomic) long long taskRemindUrgentLevel; // @synthesize taskRemindUrgentLevel=_taskRemindUrgentLevel;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long selfFinishTime; // @synthesize selfFinishTime=_selfFinishTime;
@property(nonatomic) long long finishTime; // @synthesize finishTime=_finishTime;
@property(nonatomic) long long taskRemindTime; // @synthesize taskRemindTime=_taskRemindTime;
@property(nonatomic) long long commentAuth; // @synthesize commentAuth=_commentAuth;
@property(nonatomic) _Bool isTaskDing; // @synthesize isTaskDing=_isTaskDing;
@property(nonatomic) long long unFinishCount; // @synthesize unFinishCount=_unFinishCount;
@property(nonatomic) long long selfCurrentStatus; // @synthesize selfCurrentStatus=_selfCurrentStatus;
@property(nonatomic) long long finishStatus; // @synthesize finishStatus=_finishStatus;
@property(nonatomic) long long deadline; // @synthesize deadline=_deadline;
@property(nonatomic) _Bool commentNotify; // @synthesize commentNotify=_commentNotify;
@property(nonatomic) long long hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long sendAt; // @synthesize sendAt=_sendAt;
@property(nonatomic) long long modifyAt; // @synthesize modifyAt=_modifyAt;
@property(nonatomic) long long totalCommentCount; // @synthesize totalCommentCount=_totalCommentCount;
@property(nonatomic) long long unReadNumberCommentCounts; // @synthesize unReadNumberCommentCounts=_unReadNumberCommentCounts;
@property(nonatomic) long long unReadCommentCounts; // @synthesize unReadCommentCounts=_unReadCommentCounts;
@property(nonatomic) long long confirmStatus; // @synthesize confirmStatus=_confirmStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long unConfirmCount; // @synthesize unConfirmCount=_unConfirmCount;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long dingRemainTime; // @synthesize dingRemainTime=_dingRemainTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) long long senderIdentity; // @synthesize senderIdentity=_senderIdentity;
@property(nonatomic) long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(copy, nonatomic) NSDictionary *extInfoDic; // @synthesize extInfoDic=_extInfoDic;
@property(copy, nonatomic) NSString *extInfoJSON; // @synthesize extInfoJSON=_extInfoJSON;
@property(nonatomic) long long entityCreateAt; // @synthesize entityCreateAt=_entityCreateAt;
@property(nonatomic) long long entityDataType; // @synthesize entityDataType=_entityDataType;
@property(nonatomic) long long entityId; // @synthesize entityId=_entityId;
@property(nonatomic) long long entityBizType; // @synthesize entityBizType=_entityBizType;
@property(nonatomic) long long createAt; // @synthesize createAt=_createAt;
@property(nonatomic) long long urgentLevel; // @synthesize urgentLevel=_urgentLevel;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(nonatomic) long long dingId; // @synthesize dingId=_dingId;
@property(copy, nonatomic) NSString *localDid; // @synthesize localDid=_localDid;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(copy, nonatomic) NSString *latestCommentListJson; // @synthesize latestCommentListJson=_latestCommentListJson;
@property(copy, nonatomic) NSString *ccUidsJson; // @synthesize ccUidsJson=_ccUidsJson;
@property(copy, nonatomic) NSString *receiverUidsJSON; // @synthesize receiverUidsJSON=_receiverUidsJSON;
@property(copy, nonatomic) NSString *attachmentExtraJSON; // @synthesize attachmentExtraJSON=_attachmentExtraJSON;
@property(copy, nonatomic) NSString *attachmentJSON; // @synthesize attachmentJSON=_attachmentJSON;
@property(copy, nonatomic) NSString *bizExtensionJson; // @synthesize bizExtensionJson=_bizExtensionJson;
- (void).cxx_destruct;
- (id)remindFrequencyText;
- (id)remindTimeText;
@property(copy, nonatomic) NSArray *ccUids; // @synthesize ccUids=_ccUids;
@property(copy, nonatomic) NSArray *latestCommentList; // @synthesize latestCommentList=_latestCommentList;
@property(copy, nonatomic) NSArray *receiverUids; // @synthesize receiverUids=_receiverUids;
@property(retain, nonatomic) DTBizDingAttachment *attachment; // @synthesize attachment=_attachment;
- (_Bool)isAllReceiversRead;
- (void)cleanAllUnRreadStatus;
- (_Bool)hasUnReadCommentStatus;
- (void)updateWithSendExtInfoDict:(id)arg1;
- (void)setMessageId:(long long)arg1;
- (void)seSourceType:(id)arg1;
- (void)setConversationId:(id)arg1;
- (id)conversationId;
- (id)getRemaindTitleWithTime:(double)arg1 status:(long long)arg2;
- (_Bool)needShowRemaiding:(long long)arg1;
- (_Bool)isRemainding:(long long)arg1;
- (long long)urgentLevel:(long long)arg1;
- (long long)receiverCount;
- (_Bool)isWisper;
- (_Bool)isDingOnlyRead;
- (_Bool)conferenceDingStatusHasChanged;
- (_Bool)conferenceDingHasCanceled;
- (_Bool)isSilentDing;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)authParamsWithExtraAttachment:(id)arg1;
- (id)authParamsWithAudioAttachment:(id)arg1;
- (id)audioAccessRule;
- (id)imageAccessRule;
- (_Bool)hasSent;
- (long long)conferenceAcceptCount;
- (long long)conferenceUnResponseCount;
- (_Bool)isConferenceDing;
- (_Bool)isTaskDingV2;
- (_Bool)isNotificationDing;
- (_Bool)isSupportBizType;
- (void)insertNewComment:(id)arg1;
- (_Bool)isFinishTask;
- (long long)firstReceiverUid;
@property(copy, nonatomic) NSString *firstReceiveName;
@property(copy, nonatomic) NSString *senderName;
- (id)otoConversationId;
- (_Bool)showDingConferenceSource;
- (_Bool)isDeadlineDingWillExpireBeforeTomorrow;
- (_Bool)isTaskOverdue;
- (_Bool)commentIsRead;
- (void)setCommentReadIfNeed;
- (_Bool)isGuideDing;
- (_Bool)isSelfSendDing;
- (_Bool)isSelfInReceiver;
- (_Bool)isSelfSendAndOnlyReceive;
- (_Bool)isSelfDing;
- (_Bool)isReceiverDing;
- (_Bool)isSentDing;
@property(nonatomic) _Bool noNeedLoadDingSource;
@property(copy, nonatomic) NSString *dingSource;
- (void)setDingExtensionWithMessage:(id)arg1 conversation:(id)arg2 entityId:(long long)arg3 entityType:(long long)arg4 isFocus:(_Bool)arg5;
- (_Bool)isExampleDing;
- (void)networkDingConferenceSourceSuccessBlock:(CDUnknownBlockType)arg1;
- (id)themeTitle;
- (_Bool)shouldSelectTaskCheckbox;
- (_Bool)shouldEnableTaskCheckbox;
- (_Bool)shouldShowTaskCheckbox;
- (_Bool)shouldShowContentLabelIfTheTaskIsFinishedOrEnded;
- (_Bool)shouldShowDaysLabelIfTheTaskIsOverdue;
- (id)stringForNumberOfDaysIfTheTaskIsOverdue;
- (id)dingContent;
- (void)dingConferenceSourceAsyncFromLocalAndNetwork:(CDUnknownBlockType)arg1;
- (id)dingConferenceSourceSyncFromLocalOnlyMemory:(_Bool)arg1;
- (id)themeColor;
- (id)beforeRemindTitle;
- (long long)noticeSummaryRemindType;
- (long long)noticeSummaryType;
- (void)noticeDeadlineTime:(CDUnknownBlockType)arg1;
- (id)noticeSummaryWithType:(long long)arg1 senderName:(id)arg2 content:(id)arg3;
- (id)themeAttributeTitle;
- (long long)themeIconFontType;
- (id)themeIconImage;
- (id)pushChangeNoticeTitle;
- (_Bool)isOfflineConference;
- (void)setCheckInCount:(long long)arg1;
- (long long)checkInCount;
- (void)setHasParaseCheckInCount:(_Bool)arg1;
- (_Bool)hasParaseCheckInCount;
- (long long)startCheckInTime;
- (long long)currentTime;
- (_Bool)isConferenceReject;
- (_Bool)isConferenceClosed;
- (_Bool)isConferenceStart;
- (_Bool)beforeCheckIn;
- (_Bool)checkingIn;
- (long long)conferenceCheckInCount;
- (id)conferenceCheckDetail;
- (id)dingConferenceStartTimeDesc;
- (id)conferenceStartTimeDesc;
- (id)conferenceEndTimeDesc;
- (_Bool)canCreateDingMinutes:(id)arg1;
- (long long)conferenceRemindType;
- (id)checkInStatusString;
- (id)checkInStatusColor;
- (id)checkInTime:(long long)arg1;
- (_Bool)needShowDetailTips;
- (_Bool)isTaskDeadlineOutCurrentTime;
- (id)checkBoxImage;
- (id)taskStatusColor;
- (_Bool)canClickCheckBox;
- (long long)taskUnFinishExecutorCount;
- (_Bool)isTaskOwnerToMe;
- (_Bool)isTaskCCToMe;
- (_Bool)isTaskAssignToMe;
- (_Bool)isTaskSenderAndTheOnlyReceiver;
- (_Bool)isTaskSenderOrBoth;
- (_Bool)isTaskAssignToMeFinished;
- (_Bool)isAllReceiversFinished;
- (_Bool)needShowCreateSubTask;
- (id)taskStatusTitle;
- (_Bool)canFinishTask;
- (_Bool)isTaskClosed;
- (id)pricipalString;
- (id)noticeViewSubjectTitle;
- (id)menuItemWithTitle:(id)arg1 percent:(float)arg2 kind:(long long)arg3 status:(long long)arg4;
- (id)dingCheckInStatusInfo;
- (id)dingAcceptedStatusInfo;
- (id)dingFinishedStatusInfo;
- (id)dingUnreadStatusInfo;
- (id)dingUnreadStatusTitle;
- (id)dingConferenceCanceledItem;
- (id)commentStatus:(id)arg1;
- (id)conferenceAlarmTitle;
- (_Bool)needShowCommentStatusName;
- (_Bool)needShowCommentView;
- (_Bool)needShowUnConfirmImage;
- (id)titleAttrString:(id)arg1;
- (id)labelIconImageForDetail;
- (id)labelIconImageForList;
- (id)labelIconImage;
- (void)deadlineTime:(CDUnknownBlockType)arg1;
- (id)listDeadlineTimeDesc;
- (id)statusColor;
- (void)dingStatusTitle:(CDUnknownBlockType)arg1;
- (void)finishButtonTitle:(CDUnknownBlockType)arg1;
- (_Bool)needShowFinishStatusView;
- (_Bool)needShowConferenceAlarm;
- (_Bool)needShowConferenceLocation;
- (_Bool)needShowDeadline;
- (_Bool)needShowDingStatus;
- (_Bool)needShowFinishButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

