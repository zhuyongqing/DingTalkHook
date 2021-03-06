//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBizAttachment.h"

#import "DTBizAttachmentImage-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface DTBizAttachmentImage : DTBizAttachment <DTBizAttachmentImage>
{
    NSString *_mediaId;
    NSString *_filename;
    long long _imageSize;
    NSData *_data;
    long long _picType;
    long long _orientation;
    NSString *_authMediaId;
    NSString *_authCode;
    NSDictionary *_extension;
}

+ (id)imageHDPathWithMediaId:(id)arg1 authMediaId:(id)arg2 imageSize:(long long)arg3;
+ (id)thumbnailFilePathWithMediaId:(id)arg1;
+ (id)attachmentFromWKAttachment:(id)arg1;
@property(retain, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long picType; // @synthesize picType=_picType;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) long long imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (void)removeBgFile;
- (void)removelOriginalFile;
- (void)removeHDFile;
- (void)removeThumbnailFile;
- (void)removeSmallFile;
- (id)thumbnailFilePath;
- (id)HDFilePath;
@property(readonly, copy, nonatomic) NSString *imageUrl;
- (long long)magicPackageId;
- (long long)magicEmotionId;
- (unsigned long long)magicEmotionShowType;
- (_Bool)mediaIdTypeIsGIF;
- (id)thirdPartEmotionThumbnailURL;
- (_Bool)isThirdPartEmotion;
- (_Bool)isLikeEmotion;
- (_Bool)isEmotion;
- (id)localizedDisplayString;
- (id)getWKMessageAttachment;

// Remaining properties
@property(nonatomic) long long attachmentType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

