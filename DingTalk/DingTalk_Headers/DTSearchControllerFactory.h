//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTSearchControllerFactory : NSObject
{
}

+ (id)newSearchControllerWithContainVC:(id)arg1 searchVC:(id)arg2;
+ (id)messageDetailSearcherWithContainViewController:(id)arg1 bizConversation:(id)arg2 user:(id)arg3 startDate:(id)arg4;
+ (id)messageDetailSearcherWithContainViewController:(id)arg1 bizConversation:(id)arg2;
+ (id)mailPageSearcherWithContainViewController:(id)arg1;
+ (id)drivePageSearcherWithContainViewController:(id)arg1;
+ (id)dingPageSearcherWithContainViewController:(id)arg1;
+ (id)microAppSearcherWithContainViewController:(id)arg1;
+ (id)publicGroupPageSearcherWithContainViewController:(id)arg1;
+ (id)externalContactPageSearcherWithContainViewController:(id)arg1;
+ (id)functionPageSearcherWithContainViewController:(id)arg1;
+ (id)enterprisePageSearcherWithContainViewController:(id)arg1;
+ (id)searchEnterprisePageViewController;
+ (id)searchMicroAppViewController;
+ (id)searchCSpaceViewController;
+ (id)searchDINGMessageViewController;
+ (id)searchMailViewController;
+ (id)searchFunctionViewController;
+ (id)searchMessageDetailViewControllerWithConversaiton:(id)arg1 user:(id)arg2 startDate:(id)arg3;
+ (id)searchMessageDetailViewControllerWithConversaiton:(id)arg1;
+ (id)searchMessageGroupViewController;
+ (id)searchPublicConversaitonViewController;
+ (id)searchConversaitonViewController;
+ (id)searchExternalViewController;
+ (id)searchMobileContactViewController:(_Bool)arg1 showNetworkSearch:(_Bool)arg2;
+ (id)searchFriendViewController;
+ (id)searchUserViewController;
+ (id)searchSubGlobalViewController;
+ (id)searchMainGlobalViewController;
+ (id)subGlobalSearcherWithContainViewController:(id)arg1;
+ (id)mainGlobalSearcherWithContainViewController:(id)arg1;
+ (id)friendSearcherWithContainViewController:(id)arg1;
+ (id)mobileContactSearcherWithContainViewController:(id)arg1 isCreateMode:(_Bool)arg2 showNetworkSearch:(_Bool)arg3;
+ (id)searchExternalPickViewControllerWithPickHandler:(id)arg1;
+ (id)searchConversationPickViewControllerWithPickHandler:(id)arg1;
+ (id)searchUserPickViewControllerWithPickHandler:(id)arg1 userType:(unsigned long long)arg2 filter:(id)arg3 orgId:(long long)arg4;
+ (id)searchGlobalPickViewControllerWithPickHandler:(id)arg1 showExternal:(_Bool)arg2 showConversation:(_Bool)arg3 userType:(unsigned long long)arg4;
+ (id)userSearcherForPickWithContainerViewController:(id)arg1 userType:(unsigned long long)arg2 orgId:(long long)arg3 filter:(id)arg4 pickHandler:(id)arg5;
+ (id)messageForwardSearcherForPickWithContainerViewController:(id)arg1 userType:(unsigned long long)arg2 orgId:(long long)arg3 showExternalPick:(_Bool)arg4 pickHandler:(id)arg5;
+ (id)globalSearcherForPickWithContainerViewController:(id)arg1 userType:(unsigned long long)arg2 orgId:(long long)arg3 pickHandler:(id)arg4;
+ (void)openDepartEditMemberView:(id)arg1 orgId:(long long)arg2 user:(id)arg3 didUpdate:(CDUnknownBlockType)arg4 didDelete:(CDUnknownBlockType)arg5;
+ (id)newSearchControllerWithContainVC:(id)arg1 searchVC:(id)arg2;
+ (id)organizationSearchUserPickerViewControllerWithOrgId:(long long)arg1 editMode:(_Bool)arg2 didUpdate:(CDUnknownBlockType)arg3 didDelete:(CDUnknownBlockType)arg4;
+ (id)conferenceCallSearchUserPickerViewController;
+ (id)singlePickUserSearcherWithContainVC:(id)arg1 style:(unsigned long long)arg2 orgId:(long long)arg3 editMode:(_Bool)arg4 didUpdate:(CDUnknownBlockType)arg5 didDelete:(CDUnknownBlockType)arg6;
+ (id)conferencePickUserSearcherWithContainViewController:(id)arg1;
+ (id)singlePickUserSearcherWithContainViewController:(id)arg1 style:(unsigned long long)arg2;
+ (id)singlePickUserSearcherWithContainViewController:(id)arg1 style:(unsigned long long)arg2 orgId:(long long)arg3 editMode:(_Bool)arg4 didUpdate:(CDUnknownBlockType)arg5 didDelete:(CDUnknownBlockType)arg6;

@end

