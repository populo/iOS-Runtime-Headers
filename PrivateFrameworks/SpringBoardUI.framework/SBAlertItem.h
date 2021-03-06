/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSArray, NSString, UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertSheet;
    NSArray *_allowedBundleIDs;
    bool_allowInCar;
    bool_allowInSetup;
    bool_allowMessageInCar;
    bool_didEverActivate;
    bool_didPlayPresentationSound;
    bool_ignoreIfAlreadyDisplaying;
    bool_orderOverSBAlert;
    bool_pendInSetupIfNotAllowed;
    bool_pendWhileKeyBagLocked;
    bool_preventLockOver;
}

@property bool allowInCar;
@property bool allowInSetup;
@property bool allowMessageInCar;
@property(retain) NSArray * allowedBundleIDs;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool ignoreIfAlreadyDisplaying;
@property bool pendInSetupIfNotAllowed;
@property bool pendWhileKeyBagLocked;
@property(readonly) Class superclass;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (bool)_didEverActivate;
- (bool)_dismissesOverlaysOnLockScreen;
- (void)_playPresentationSound;
- (id)alertController;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (int)alertPriority;
- (id)alertSheet;
- (Class)alertSheetClass;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (bool)allowAutoUnlock;
- (bool)allowInCar;
- (bool)allowInSetup;
- (bool)allowLockScreenDismissal;
- (bool)allowMenuButtonDismissal;
- (bool)allowMessageInCar;
- (id)allowedBundleIDs;
- (double)autoDismissInterval;
- (bool)behavesSuperModally;
- (void)buttonDismissed;
- (void)cleanPreviousConfiguration;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)dealloc;
- (void)didActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (bool)didPlayPresentationSound;
- (void)dismiss:(int)arg1;
- (void)dismiss;
- (bool)dismissOnLock;
- (bool)dismissOnModalDisplayActivation;
- (bool)dismissesAutomatically;
- (bool)displayActionButtonOnLockScreen;
- (bool)forcesModalAlertAppearance;
- (bool)hasActiveKeyboardOnScreen;
- (bool)ignoreIfAlreadyDisplaying;
- (id)init;
- (bool)isCriticalAlert;
- (id)lockLabel;
- (void)noteVolumeOrLockPressed;
- (bool)pendInSetupIfNotAllowed;
- (bool)pendWhileKeyBagLocked;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (id)prepareNewAlertSheetWithLockedState:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)preventInterruption;
- (bool)preventLockOver;
- (bool)reappearsAfterLock;
- (bool)reappearsAfterUnlock;
- (void)screenWillUndim;
- (void)setAllowInCar:(bool)arg1;
- (void)setAllowInSetup:(bool)arg1;
- (void)setAllowMessageInCar:(bool)arg1;
- (void)setAllowedBundleIDs:(id)arg1;
- (void)setIgnoreIfAlreadyDisplaying:(bool)arg1;
- (void)setOrderOverSBAlert:(bool)arg1;
- (void)setPendInSetupIfNotAllowed:(bool)arg1;
- (void)setPendWhileKeyBagLocked:(bool)arg1;
- (void)setPreventLockOver:(bool)arg1;
- (id)shortLockLabel;
- (bool)shouldShowInEmergencyCall;
- (bool)shouldShowInLockScreen;
- (id)sound;
- (bool)togglesMediaControls;
- (bool)undimsScreen;
- (int)unlockSource;
- (bool)unlocksScreen;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)willRelockForButtonPress:(bool)arg1;

@end
