//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray;

@interface WKIDLReconnectMessageModel : Marshal
{
    NSArray *_messageList;
    NSArray *_readList;
    NSArray *_conversationList;
    NSArray *_messageTagList;
    NSArray *_readStatusList;
    NSArray *_conversationPrivateList;
    NSArray *_msgNoticeList;
    NSArray *_pdcNoticeList;
}

@property(copy, nonatomic) NSArray *pdcNoticeList; // @synthesize pdcNoticeList=_pdcNoticeList;
@property(copy, nonatomic) NSArray *msgNoticeList; // @synthesize msgNoticeList=_msgNoticeList;
@property(copy, nonatomic) NSArray *conversationPrivateList; // @synthesize conversationPrivateList=_conversationPrivateList;
@property(copy, nonatomic) NSArray *readStatusList; // @synthesize readStatusList=_readStatusList;
@property(copy, nonatomic) NSArray *messageTagList; // @synthesize messageTagList=_messageTagList;
@property(copy, nonatomic) NSArray *conversationList; // @synthesize conversationList=_conversationList;
@property(copy, nonatomic) NSArray *readList; // @synthesize readList=_readList;
@property(copy, nonatomic) NSArray *messageList; // @synthesize messageList=_messageList;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

