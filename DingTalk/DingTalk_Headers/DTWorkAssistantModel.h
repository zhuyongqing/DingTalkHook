//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTUserPositionModel, NSNumber;

@interface DTWorkAssistantModel : Marshal
{
    _Bool _isEnabled;
    NSNumber *_id_;
    DTUserPositionModel *_origin;
    DTUserPositionModel *_destination;
    NSNumber *_travelBy;
}

@property(retain, nonatomic) NSNumber *travelBy; // @synthesize travelBy=_travelBy;
@property(retain, nonatomic) DTUserPositionModel *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) DTUserPositionModel *origin; // @synthesize origin=_origin;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
