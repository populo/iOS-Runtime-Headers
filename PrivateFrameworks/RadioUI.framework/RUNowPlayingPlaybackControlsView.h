/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget>, UIButton;

@interface RUNowPlayingPlaybackControlsView : MPUNowPlayingPlaybackControlsView {
    UIButton *_infoButton;
    bool_isWide;
}

@property <RUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> * delegate;
@property(readonly) UIButton * infoButton;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForCenteringCreateActivityIndicatorView;
- (void)_destroyInfoButtonAnimated:(bool)arg1;
- (void)_infoButtonAction:(id)arg1;
- (bool)_isRadioItem;
- (bool)_shouldAddBottomGap;
- (double)_titlesLastResortVerticalOffsetPhone;
- (Class)_transportControlsClass;
- (double)_transportControlsLastResortVerticalOffsetPhone;
- (void)_updateForItemDidChangeAnimated:(bool)arg1;
- (void)_updateSizeClass;
- (double)_volumeBottomVerticalInsetPhone;
- (void)dealloc;
- (id)infoButton;
- (void)layoutSubviews;
- (id)newProgressIndicator;
- (void)setShowingCreateLoadingIndicator:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
