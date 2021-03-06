//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTWorkItemModel : Marshal
{
    NSNumber *_id_;
    NSNumber *_orgId;
    NSNumber *_createAt;
    NSString *_icon;
    NSString *_title;
    NSArray *_contents;
    NSString *_url;
    NSString *_pcUrl;
    NSArray *_actions;
    NSString *_itemType;
}

@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *pcUrl; // @synthesize pcUrl=_pcUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSNumber *createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

