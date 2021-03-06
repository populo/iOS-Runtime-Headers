/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUTrackActionsDelegate>, NSString, RUTrackActionsView, UIImage, _UIBackdropView;

@interface _RUTrackActionsModalItemContentView : _UIModalItemContentView <RUTrackActioning, RUTrackActionsDelegate> {
    _UIBackdropView *_backdropView;
    <RUTrackActionsDelegate> *_trackActionsDelegate;
    RUTrackActionsView *_trackActionsView;
}

@property(copy) NSString * artistText;
@property(retain) UIImage * artworkImage;
@property(readonly) long long cancelIndex;
@property(readonly) struct CGSize { double x1; double x2; } contentSize;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property long long enabledActions;
@property(readonly) unsigned long long hash;
@property long long onActions;
@property(copy) NSString * songText;
@property(readonly) Class superclass;
@property <RUTrackActionsDelegate> * trackActionsDelegate;

+ (struct CGSize { double x1; double x2; })artworkSize;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_layoutViewHierarchy;
- (void)_statusBarHeightChanged:(id)arg1;
- (long long)actionForButtonIndex:(long long)arg1;
- (id)artistText;
- (id)artworkImage;
- (long long)cancelIndex;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1 withSelectedAction:(long long)arg2 atIndex:(long long)arg3;
- (long long)enabledActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)onActions;
- (void)setArtistText:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setEnabledActions:(long long)arg1;
- (void)setModalItem:(id)arg1;
- (void)setOnActions:(long long)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSongText:(id)arg1;
- (void)setTrackActionsDelegate:(id)arg1;
- (id)songText;
- (void)trackActioningObject:(id)arg1 didSelectAction:(long long)arg2 atIndex:(long long)arg3;
- (id)trackActioningObject:(id)arg1 localizedTitleForAction:(long long)arg2;
- (void)trackActioningObjectDidChangeContentSize:(id)arg1;
- (id)trackActionsDelegate;

@end
