//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "DTMapViewControllerDelegate-Protocol.h"

@class NSString;

@interface DTLAPMapSignIn : LAPluginBase <DTMapViewControllerDelegate>
{
}

+ (id)pluginExactName;
- (void)mapViewControllerDidCancel:(id)arg1;
- (void)mapViewController:(id)arg1 didFailWithCode:(long long)arg2 error:(id)arg3;
- (void)mapViewController:(id)arg1 didUpdatePOI:(id)arg2;
- (void)presentMapViewControllerWithRequest:(id)arg1 response:(id)arg2;
- (void)search:(id)arg1 to:(id)arg2;
- (void)__exported__search:(id)arg1 to:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

