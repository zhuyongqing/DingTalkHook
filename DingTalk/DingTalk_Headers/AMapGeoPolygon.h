//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray;

@interface AMapGeoPolygon : AMapSearchObject
{
    NSArray *_points;
}

+ (id)polygonWithString:(id)arg1;
+ (id)polygonWithPoints:(id)arg1;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
- (void).cxx_destruct;
- (id)description;
- (id)coordinateString;

@end
