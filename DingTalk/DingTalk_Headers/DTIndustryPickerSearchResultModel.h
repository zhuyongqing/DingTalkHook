//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTIndustryEntryModel, NSAttributedString, NSString;

@interface DTIndustryPickerSearchResultModel : NSObject
{
    NSAttributedString *_title;
    NSString *_detail;
    DTIndustryEntryModel *_industryEntryModel;
}

@property(retain, nonatomic) DTIndustryEntryModel *industryEntryModel; // @synthesize industryEntryModel=_industryEntryModel;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

