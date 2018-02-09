//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKAlarmServiceDelegate-Protocol.h"

@class NSString;

@interface DTVIPUserAlarmManager : NSObject <WKAlarmServiceDelegate>
{
    _Bool _detecting;
}

+ (void)commitAlarmWithModule:(id)arg1 subType:(long long)arg2 message:(id)arg3 info:(id)arg4 forceAll:(_Bool)arg5 uploadLogs:(_Bool)arg6;
+ (void)commitAlarmWithModule:(id)arg1 subType:(long long)arg2 message:(id)arg3 info:(id)arg4;
+ (id)sharedInstance;
+ (id)alarmWithError:(id)arg1;
+ (id)contactAlarm;
+ (void)sendAlarmWithError:(id)arg1 subType:(long long)arg2 subTypeDesc:(id)arg3;
+ (void)alarmLogoutError:(id)arg1;
+ (void)alarmSMSRegisterFail:(id)arg1;
+ (void)alarmReportLossFail:(id)arg1;
+ (void)alarmNoCaptchaInitFail;
+ (void)alarmLoginOtherError:(id)arg1;
+ (void)alarmLoginBySelectUserFail:(id)arg1;
+ (void)alarmShowUsersForVerifyFail:(id)arg1;
+ (void)alarmLoginThirdPartyAuthErrorWithDic:(id)arg1;
+ (void)alarmThirdPartyAuthStringFail:(id)arg1;
+ (void)alarmResendSMSVerifyCode;
+ (void)alarmSMSLoginFailed:(id)arg1;
+ (void)alarmVoiceVerfyCode;
+ (void)alarmThirdPartyLoginFail:(id)arg1;
+ (void)alarmSendVerifyCodeFailed:(id)arg1 type:(unsigned long long)arg2 bizType:(unsigned long long)arg3;
+ (void)alarmChangePasswordFailed:(id)arg1;
+ (void)alarmAPNsRegisterFailed:(id)arg1;
+ (void)alarmPasswordLoginFailed:(id)arg1;
+ (void)alarmSendMessageFailedIfNeeded:(id)arg1 localMid:(id)arg2 additional:(id)arg3;
+ (void)alarmReloadChatListSectionExceptionWithInfo:(id)arg1;
+ (void)triggerWorkAlarmSubtype:(int)arg1 subtypeDesc:(id)arg2 reason:(id)arg3;
+ (void)triggerFileAlarmSubtype:(int)arg1 subtypeDesc:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
+ (int)getRandomNumber:(int)arg1 to:(int)arg2;
+ (void)triggerMailAlarmWithModule:(id)arg1 subtype:(int)arg2 subtypeDesc:(id)arg3 error:(id)arg4 reason:(id)arg5;
+ (void)triggerCleanUpInactiveConversationsAlarm:(long long)arg1 clearedCount:(long long)arg2;
+ (void)triggerSearchNoContactsAlarm:(id)arg1;
+ (void)triggerLaunchKillAppAlarm:(id)arg1;
+ (void)triggerDingAlarmWithError:(id)arg1 method:(id)arg2 parameters:(id)arg3;
+ (void)triggerCalendarAlarmWithError:(id)arg1 method:(id)arg2 parameters:(id)arg3;
+ (void)commitMediaAlarmWithSubType:(long long)arg1 message:(id)arg2 info:(id)arg3;
+ (void)triggerCircleAlarmWithSubtype:(long long)arg1 subtypeDesc:(id)arg2 reason:(id)arg3;
+ (void)triggerCircleAlarmWithSubtype:(long long)arg1 subtypeDesc:(id)arg2 error:(id)arg3;
+ (void)triggerContactAlarmSubtype:(int)arg1 subtypeDesc:(id)arg2 error:(id)arg3;
+ (void)triggerLiveStartFailWithCode:(id)arg1 msg:(id)arg2;
@property(nonatomic) _Bool detecting; // @synthesize detecting=_detecting;
- (void)alarmDidTriggered:(id)arg1 model:(id)arg2;
- (void)stopDetection;
- (void)startDetection;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
