//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class DTIMAPAccount;

@interface DTCIMAPListFolderTask : BLBaseAPITask
{
    DTIMAPAccount *_imapAccount;
}

@property(retain, nonatomic) DTIMAPAccount *imapAccount; // @synthesize imapAccount=_imapAccount;
- (void).cxx_destruct;
- (unsigned long long)canRetryWithError:(id)arg1;
- (void)process;

@end

