//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTCommentModel : Marshal
{
    NSNumber *_id_;
    NSNumber *_objectId;
    NSNumber *_objectType;
    NSNumber *_objectContainerId;
    NSNumber *_creatorId;
    NSNumber *_parentCommentId;
    NSArray *_atPerson;
    NSString *_content;
    NSNumber *_createTime;
    NSNumber *_modifyTime;
    NSString *_extension;
}

@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSArray *atPerson; // @synthesize atPerson=_atPerson;
@property(retain, nonatomic) NSNumber *parentCommentId; // @synthesize parentCommentId=_parentCommentId;
@property(retain, nonatomic) NSNumber *creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSNumber *objectContainerId; // @synthesize objectContainerId=_objectContainerId;
@property(retain, nonatomic) NSNumber *objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) NSNumber *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

