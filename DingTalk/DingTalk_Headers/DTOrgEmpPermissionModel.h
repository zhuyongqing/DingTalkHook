//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTOrgEmpPermissionModel : Marshal
{
    _Bool _canEdit;
    _Bool _open;
    NSNumber *_permissionType;
    NSArray *_permits;
}

@property(copy, nonatomic) NSArray *permits; // @synthesize permits=_permits;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(retain, nonatomic) NSNumber *permissionType; // @synthesize permissionType=_permissionType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

