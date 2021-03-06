/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIActionSheet;

@interface CNFRegActionSheetManager : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    id _handler;
    id _presenter;
    bool_dismissingActionSheetForRotation;
}

@property(retain) UIActionSheet * actionSheet;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id handler;
@property(readonly) unsigned long long hash;
@property(copy) id presenter;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)actionSheet;
- (void)dealloc;
- (void)dismissCurrentActionSheet;
- (void)handleDidRotate:(id)arg1;
- (void)handleWillRotate:(id)arg1;
- (id)handler;
- (id)init;
- (id)presenter;
- (void)setActionSheet:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;

@end
