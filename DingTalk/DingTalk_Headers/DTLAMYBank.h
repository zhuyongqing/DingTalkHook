//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTLAMYBankPluginBase.h"

@protocol LAContainerHandler;

@interface DTLAMYBank : DTLAMYBankPluginBase
{
    id <LAContainerHandler> _cntHandler;
}

+ (id)pluginExactName;
@property(nonatomic) __weak id <LAContainerHandler> cntHandler; // @synthesize cntHandler=_cntHandler;
- (void).cxx_destruct;
- (void)remoteLog:(id)arg1 to:(id)arg2;
- (void)__exported__remoteLog:(id)arg1 to:(id)arg2;
- (void)saveUserInfo:(id)arg1 to:(id)arg2;
- (void)__exported__saveUserInfo:(id)arg1 to:(id)arg2;
- (void)getUserInfo:(id)arg1 to:(id)arg2;
- (void)__exported__getUserInfo:(id)arg1 to:(id)arg2;
- (void)getMyConfig:(id)arg1 to:(id)arg2;
- (void)__exported__getMyConfig:(id)arg1 to:(id)arg2;
- (void)getDeviceInfo:(id)arg1 to:(id)arg2;
- (void)__exported__getDeviceInfo:(id)arg1 to:(id)arg2;
- (void)encryptPassword:(id)arg1 to:(id)arg2;
- (void)__exported__encryptPassword:(id)arg1 to:(id)arg2;
- (void)verifyIdentity:(id)arg1 to:(id)arg2;
- (void)__exported__verifyIdentity:(id)arg1 to:(id)arg2;
- (void)rpc:(id)arg1 to:(id)arg2;
- (void)__exported__rpc:(id)arg1 to:(id)arg2;
- (void)fakeLogin:(id)arg1 to:(id)arg2;
- (void)__exported__fakeLogin:(id)arg1 to:(id)arg2;
- (void)autoLogin:(id)arg1 to:(id)arg2;
- (void)__exported__autoLogin:(id)arg1 to:(id)arg2;
- (void)authLogin:(id)arg1 to:(id)arg2;
- (void)__exported__authLogin:(id)arg1 to:(id)arg2;
- (void)login:(id)arg1 to:(id)arg2;
- (void)__exported__login:(id)arg1 to:(id)arg2;
- (void)logout:(id)arg1 to:(id)arg2;
- (void)__exported__logout:(id)arg1 to:(id)arg2;
- (id)falconBizInfo;
- (id)currentURL;
- (id)appId;
- (_Bool)setContainerHandler:(id)arg1;

@end
