//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTWebImageView, NSString;

@interface DTRobotStoreViewController : DTTableViewController
{
    NSString *_conversationId;
    DTWebImageView *_bannerView;
}

@property(retain, nonatomic) DTWebImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)enterpriseItemForRobot:(id)arg1;
- (id)cellItemWithRobotModel:(id)arg1;
- (void)loadDataSource;
- (void)popBack;
- (void)loadComponent;
- (void)viewDidLoad;

@end

