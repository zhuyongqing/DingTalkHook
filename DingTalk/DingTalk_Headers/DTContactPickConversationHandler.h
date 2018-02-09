//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickHandler.h"

#import "DTContactPickViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface DTContactPickConversationHandler : DTContactPickHandler <DTContactPickViewControllerDelegate>
{
    _Bool _disableFileAssit;
    unsigned long long _pickType;
    NSArray *_dataSources;
    NSDictionary *_index;
}

@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(nonatomic) _Bool disableFileAssit; // @synthesize disableFileAssit=_disableFileAssit;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) unsigned long long pickType; // @synthesize pickType=_pickType;
- (void).cxx_destruct;
- (void)selectConversation:(id)arg1 isFromNewCreated:(_Bool)arg2;
- (void)selectConversation:(id)arg1;
- (void)createConversationByMemberIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createNewConversation;
- (void)sendAsMail;
- (void)showGroupPick;
- (void)updateCellItemWithPersonIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)personsHasUnselected:(id)arg1;
- (void)personsHasSelected:(id)arg1;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (void)updateCellItemWithIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)conversationsHasUnselected:(id)arg1;
- (void)conversationsHasSelected:(id)arg1;
- (void)conversationHasUnselected:(id)arg1;
- (void)conversationHasSelected:(id)arg1;
- (id)signImageTypeForConversation:(id)arg1;
- (id)recentContactItem;
- (void)loadDataSource;
- (id)searchController;
- (id)handlerForSearchViewController:(id)arg1 searchBar:(id)arg2;
- (id)placeHolderForSearchBar:(id)arg1;
- (_Bool)shouldShowSearchBar:(id)arg1;
- (id)dataSourceForPickViewController:(id)arg1;
- (id)titleForViewController:(id)arg1;
- (void)pickViewWillDestory:(id)arg1;
- (void)pickViewWillShow:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
