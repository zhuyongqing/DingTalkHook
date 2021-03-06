//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTEmptyResultView, DTSearchController, UIActivityIndicatorView, UIImageView;

@interface DTMobileContactsViewController : DTTableViewController
{
    _Bool _enableBatchAddExtContact;
    _Bool _showConferenceIcon;
    _Bool _showBatchAddExtContact;
    CDUnknownBlockType _mobileAvatarPress;
    CDUnknownBlockType _mobileInfoPress;
    DTSearchController *_searchController;
    DTEmptyResultView *_emptyResultView;
    DTEmptyResultView *_emptyResultViewFromConference;
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_bottomLine;
    long long _cursor;
    CDUnknownBlockType _searchResultClicked;
}

@property(copy, nonatomic) CDUnknownBlockType searchResultClicked; // @synthesize searchResultClicked=_searchResultClicked;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) _Bool showBatchAddExtContact; // @synthesize showBatchAddExtContact=_showBatchAddExtContact;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTEmptyResultView *emptyResultViewFromConference; // @synthesize emptyResultViewFromConference=_emptyResultViewFromConference;
@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) DTSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) _Bool showConferenceIcon; // @synthesize showConferenceIcon=_showConferenceIcon;
@property(copy, nonatomic) CDUnknownBlockType mobileInfoPress; // @synthesize mobileInfoPress=_mobileInfoPress;
@property(copy, nonatomic) CDUnknownBlockType mobileAvatarPress; // @synthesize mobileAvatarPress=_mobileAvatarPress;
@property(nonatomic) _Bool enableBatchAddExtContact; // @synthesize enableBatchAddExtContact=_enableBatchAddExtContact;
- (void).cxx_destruct;
- (void)openWebViewWithURL:(id)arg1;
- (id)dingCardAttrStringWithPhoneNumber:(id)arg1;
- (id)attrSubTitleWithCompany:(id)arg1;
- (id)itemForBatchAddExtContact;
- (id)cellItemWithContact:(id)arg1 isMatchOn:(_Bool)arg2 searchText:(id)arg3;
- (void)removeBatchAddExtContactCell;
- (void)addExternalContactFromMobile;
- (void)mobileContactDidChange:(id)arg1;
- (void)gotoContactProfileWithMobileContact:(id)arg1;
- (void)showsMobileContacts:(id)arg1 searchText:(id)arg2;
- (void)showsSearchResultsWithSearchText:(id)arg1;
- (void)showsMobileContacts:(id)arg1 isGranted:(_Bool)arg2;
- (void)loadDataSource;
- (void)loadComponent;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

