//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTSNCommentModel, DTSNContentModel, DTSNUserModel, NSNumber;

@interface DTSNNoticeModel : Marshal
{
    NSNumber *_postId;
    NSNumber *_action;
    DTSNUserModel *_user;
    DTSNCommentModel *_comment;
    NSNumber *_createAt;
    DTSNContentModel *_contentModel;
}

@property(retain, nonatomic) DTSNContentModel *contentModel; // @synthesize contentModel=_contentModel;
@property(retain, nonatomic) NSNumber *createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) DTSNCommentModel *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) DTSNUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *action; // @synthesize action=_action;
@property(retain, nonatomic) NSNumber *postId; // @synthesize postId=_postId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

