//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTMAPage, NSDictionary;

@interface DTMAPageMessage : NSObject
{
    DTMAPage *_sender;
    DTMAPage *_receiver;
    NSDictionary *_messageContent;
}

@property(retain, nonatomic) NSDictionary *messageContent; // @synthesize messageContent=_messageContent;
@property(retain, nonatomic) DTMAPage *receiver; // @synthesize receiver=_receiver;
@property(retain, nonatomic) DTMAPage *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;

@end
