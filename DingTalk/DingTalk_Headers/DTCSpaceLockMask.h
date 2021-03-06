//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DTCSpaceLockMask : NSObject
{
    NSMutableDictionary *_maskImageCache;
    NSMutableDictionary *_upperImageCache;
    NSMutableDictionary *_bottomImageCache;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *bottomImageCache; // @synthesize bottomImageCache=_bottomImageCache;
@property(retain, nonatomic) NSMutableDictionary *upperImageCache; // @synthesize upperImageCache=_upperImageCache;
@property(retain, nonatomic) NSMutableDictionary *maskImageCache; // @synthesize maskImageCache=_maskImageCache;
- (void).cxx_destruct;
- (id)cropImage:(id)arg1 toRect:(struct CGRect)arg2;
- (id)createMaskViewWithHeight:(double)arg1;
- (void)clear;
- (id)halfMaskImageWithHeight:(double)arg1 uppper:(_Bool)arg2;
- (id)maskImageWithHeight:(double)arg1;

@end

