//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface DTActiveConversationObserver : NSObject
{
    NSMutableSet *_conversationIds;
}

+ (void)disposeObserver;
+ (void)setupObserver;
+ (id)activeObserver;
- (void).cxx_destruct;
- (void)clearAll;
- (_Bool)isActiveConversationId:(id)arg1;
- (void)activeWithConversation:(id)arg1;

@end

