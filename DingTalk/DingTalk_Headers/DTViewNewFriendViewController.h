//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTFriendRequest;

@interface DTViewNewFriendViewController : DTTableViewController
{
    DTFriendRequest *_friendRequest;
    unsigned long long _uid;
}

@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) DTFriendRequest *friendRequest; // @synthesize friendRequest=_friendRequest;
- (void).cxx_destruct;
- (void)updateShowMobileState:(_Bool)arg1 cellItem:(id)arg2;
- (void)clickSendMessageCell;
- (void)clickProfileCell;
- (void)operationRemarkName;
- (void)loadUI;
- (void)viewDidLoad;

@end
