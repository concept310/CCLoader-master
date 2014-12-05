/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBControlCenterSectionViewController.h"

#import "SBUIControlCenterButtonDelegate-Protocol.h"

@class AVFlashlight, NSMutableArray, NSObject<OS_dispatch_queue>, SBControlCenterButton;

@interface SBCCQuickLaunchSectionController : SBControlCenterSectionViewController <SBUIControlCenterButtonDelegate>
{
    SBControlCenterButton *_torchButton;
    SBControlCenterButton *_clockButton;
    SBControlCenterButton *_calculatorButton;
    SBControlCenterButton *_cameraButton;
    NSMutableArray *_buttons;
    AVFlashlight *_flashlight;
    _Bool _ccVisible;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    _Bool _flashlightOn;
}

+ (Class)viewClass;
@property(nonatomic, getter=isFlashlightOn) _Bool flashlightOn; // @synthesize flashlightOn=_flashlightOn;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)_featureLockStateDidChangeNotification:(id)arg1;
- (void)_deviceBlockStateDidChangeNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateTorchButtonState;
- (void)_enableTorch:(_Bool)arg1;
- (void)buttonTapped:(id)arg1;
- (void)_activateAppWithBundleId:(id)arg1 url:(id)arg2;
- (id)_urlForButton:(id)arg1;
- (id)_bundleIDForButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateFlashlightPowerState;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)noteSettingsDidUpdate:(id)arg1;
- (id)view;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

@end

