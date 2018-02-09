//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTCSpaceSearchByTypesParam : Marshal
{
    NSArray *_orgIds;
    NSArray *_contentTypes;
    NSArray *_fileExtensions;
    NSNumber *_offset;
    NSNumber *_length;
}

@property(retain, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSArray *fileExtensions; // @synthesize fileExtensions=_fileExtensions;
@property(copy, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(copy, nonatomic) NSArray *orgIds; // @synthesize orgIds=_orgIds;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
