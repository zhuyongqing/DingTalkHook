//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface BLPhotoGroupVO : NSObject
{
    UIImage *_thumbnail;
    NSString *_albumName;
    long long _assetsCount;
}

@property(nonatomic) long long assetsCount; // @synthesize assetsCount=_assetsCount;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (id)initWithAssetGroup:(id)arg1;

@end

