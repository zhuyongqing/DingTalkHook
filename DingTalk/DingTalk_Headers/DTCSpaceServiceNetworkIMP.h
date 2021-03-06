//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpaceServiceNetworkProtocol-Protocol.h"

@class NSString;

@interface DTCSpaceServiceNetworkIMP : NSObject <DTCSpaceServiceNetworkProtocol>
{
}

- (void)addDentryByBatchWithDentries:(id)arg1 targetSpaceId:(long long)arg2 targetFolderId:(id)arg3 conversationId:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getTempSpaceWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)infoMediaInfo:(long long)arg1 fileId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)playWithSpaceId:(long long)arg1 fileId:(long long)arg2 quality:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)createHomeworkWithName:(id)arg1 desc:(id)arg2 mediaId:(id)arg3 attachmentName:(id)arg4 cid:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)getIndustryOperationUrlWithOrgId:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)deleteShare:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)listShareWithOrgId:(long long)arg1 sortType:(unsigned long long)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)createShareWithSpaceId:(long long)arg1 dentryId:(long long)arg2 expireDays:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)isReadOnlyWithSpaceId:(long long)arg1 folderId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setReadOnlyWithSpaceId:(long long)arg1 folderId:(id)arg2 readOnly:(_Bool)arg3 groupId:(long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)deleteMemberWithGroupId:(long long)arg1 members:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)addMemberWithGroupId:(long long)arg1 members:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)createAclWithSpaceId:(long long)arg1 folderId:(long long)arg2 policyType:(id)arg3 members:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)listAclWithSpaceId:(long long)arg1 folderId:(long long)arg2 policyType:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)updateOrgGroupSyncWithSpaceId:(id)arg1 status:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getCSpaceLoginTokenWithsuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getOrgConversationsWithOrgId:(long long)arg1 start:(long long)arg2 size:(long long)arg3 byOrder:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)listRecentFileWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)generateConversationSpace:(id)arg1 type:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)listUidsWithDentryId:(id)arg1 spaceId:(id)arg2 accessTypes:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)updateSpaceExtensionById:(long long)arg1 extension:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)searchByTypes:(id)arg1 withOrgIds:(id)arg2 withFileTypes:(id)arg3 withOffset:(long long)arg4 withLength:(long long)arg5 sucessBlock:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)listFiles:(long long)arg1 withPageSize:(unsigned long long)arg2 withFolderId:(id)arg3 withSortType:(long long)arg4 withContentTypes:(id)arg5 withLoadMoreID:(id)arg6 sucessBlock:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)infoDeleteDentryWithItemId:(id)arg1 withSpaceId:(long long)arg2 withPath:(id)arg3 sucessBlock:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)listSpace:(_Bool)arg1 withSpaceIds:(id)arg2 sucessBlock:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)perviewWithBizType:(id)arg1 withBizId:(id)arg2 withObjectId:(id)arg3 withAttchId:(id)arg4 withToken:(id)arg5 sucessBlock:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)searchDentryWithString:(id)arg1 withId:(id)arg2 spaces:(id)arg3 offset:(unsigned long long)arg4 pageSize:(unsigned long long)arg5 withType:(long long)arg6 success:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)transferDentry:(id)arg1 inSourceSpaceId:(long long)arg2 toTargetSpaceId:(long long)arg3 toTargetFolderId:(id)arg4 toTargetFolderPath:(id)arg5 withTransferType:(long long)arg6 conflictType:(long long)arg7 success:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)infoDentry:(long long)arg1 withItemId:(id)arg2 withPath:(id)arg3 success:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)deleteDentries:(id)arg1 withSpaceId:(long long)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)renameDentry:(id)arg1 withNewName:(id)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)addDentry:(id)arg1 withStoreType:(unsigned long long)arg2 withConflictHandler:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)addDentry:(long long)arg1 withUrl:(id)arg2 withFolderId:(id)arg3 withPath:(id)arg4 withName:(id)arg5 withStoreType:(unsigned long long)arg6 withConflictHandler:(unsigned long long)arg7 success:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)addDentry:(long long)arg1 withPath:(id)arg2 withFolderId:(id)arg3 withName:(id)arg4 withStoreUrl:(id)arg5 withStoreType:(unsigned long long)arg6 withConflictHandler:(unsigned long long)arg7 success:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)listDentries:(long long)arg1 withFolderId:(id)arg2 withLoadMoreId:(id)arg3 withLength:(long long)arg4 withSortType:(long long)arg5 withTopType:(long long)arg6 stoken:(id)arg7 success:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)commonResultHandlerWith:(id)arg1 sucessBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

