//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageForwardSubTask.h"

@class DTBizMessage, WKBizMessage;

@interface DTMessageForwardSingleSubTask : DTMessageForwardSubTask
{
    DTBizMessage *_message;
    WKBizMessage *_wkMessage;
}

+ (id)singleTaskWithConversation:(id)arg1 message:(id)arg2 wkMessage:(id)arg3;
@property(readonly, nonatomic) WKBizMessage *wkMessage; // @synthesize wkMessage=_wkMessage;
@property(readonly, nonatomic) DTBizMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (_Bool)isMatch:(id)arg1;

@end
