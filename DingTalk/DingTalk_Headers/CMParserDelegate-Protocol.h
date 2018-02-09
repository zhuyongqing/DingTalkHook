//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMParser, NSString, NSURL;

@protocol CMParserDelegate <NSObject>

@optional
- (void)parserDidEndListItem:(CMParser *)arg1;
- (void)parserDidStartListItem:(CMParser *)arg1;
- (void)parser:(CMParser *)arg1 didEndOrderedListWithStartingNumber:(long long)arg2 tight:(_Bool)arg3;
- (void)parser:(CMParser *)arg1 didStartOrderedListWithStartingNumber:(long long)arg2 tight:(_Bool)arg3;
- (void)parser:(CMParser *)arg1 didEndUnorderedListWithTightness:(_Bool)arg2;
- (void)parser:(CMParser *)arg1 didStartUnorderedListWithTightness:(_Bool)arg2;
- (void)parserDidEndBlockQuote:(CMParser *)arg1;
- (void)parserDidStartBlockQuote:(CMParser *)arg1;
- (void)parserFoundLineBreak:(CMParser *)arg1;
- (void)parserFoundSoftBreak:(CMParser *)arg1;
- (void)parser:(CMParser *)arg1 foundInlineCode:(NSString *)arg2;
- (void)parser:(CMParser *)arg1 foundCodeBlock:(NSString *)arg2 info:(NSString *)arg3;
- (void)parser:(CMParser *)arg1 foundInlineHTML:(NSString *)arg2;
- (void)parser:(CMParser *)arg1 foundHTML:(NSString *)arg2;
- (void)parser:(CMParser *)arg1 didEndImageWithURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)parser:(CMParser *)arg1 didStartImageWithURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)parser:(CMParser *)arg1 didEndLinkWithURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)parser:(CMParser *)arg1 didStartLinkWithURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)parserDidEndStrong:(CMParser *)arg1;
- (void)parserDidStartStrong:(CMParser *)arg1;
- (void)parserDidEndEmphasis:(CMParser *)arg1;
- (void)parserDidStartEmphasis:(CMParser *)arg1;
- (void)parserDidEndParagraph:(CMParser *)arg1;
- (void)parserDidStartParagraph:(CMParser *)arg1;
- (void)parser:(CMParser *)arg1 didEndHeaderWithLevel:(long long)arg2;
- (void)parser:(CMParser *)arg1 didStartHeaderWithLevel:(long long)arg2;
- (void)parserFoundHRule:(CMParser *)arg1;
- (void)parser:(CMParser *)arg1 foundText:(NSString *)arg2;
- (void)parserDidAbort:(CMParser *)arg1;
- (void)parserDidEndDocument:(CMParser *)arg1;
- (void)parserDidStartDocument:(CMParser *)arg1;
@end
