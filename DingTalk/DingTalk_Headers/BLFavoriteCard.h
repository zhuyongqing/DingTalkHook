//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContent.h"

@class NSString;

@interface BLFavoriteCard : BLFavoriteContent
{
    NSString *_avatarMediaId;
    long long _cardUid;
    long long _cardType;
    NSString *_cardPhone;
}

+ (id)toFavoriteContentFromApiModel:(id)arg1;
+ (id)toFavoriteContentApiModel:(id)arg1;
@property(copy, nonatomic) NSString *cardPhone; // @synthesize cardPhone=_cardPhone;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long cardUid; // @synthesize cardUid=_cardUid;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
- (void).cxx_destruct;

@end
