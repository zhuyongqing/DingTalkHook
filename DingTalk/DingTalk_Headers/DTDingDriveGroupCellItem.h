//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingDriveSelectableCellItem.h"

@class DTBizConversation, NSSet;

@interface DTDingDriveGroupCellItem : DTDingDriveSelectableCellItem
{
    _Bool _showLockIcon;
    DTBizConversation *_group;
    NSSet *_creatorIds;
}

@property(nonatomic, getter=isShowLockIcon) _Bool showLockIcon; // @synthesize showLockIcon=_showLockIcon;
@property(copy, nonatomic) NSSet *creatorIds; // @synthesize creatorIds=_creatorIds;
@property(retain, nonatomic) DTBizConversation *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (_Bool)cellCanEdit;
- (id)reuseIdentifier;
- (id)cellForItem;

@end

