/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUAlbumListCellDelegate>, NSString, PUStackView, UIButton, UILabel, UITextField, UIView;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate> {
    UIButton *__deleteButton;
    UIButton *__pinButton;
    UILabel *__subtitleLabel;
    UITextField *__titleTextField;
    UIView *_customImageView;
    <PUAlbumListCellDelegate> *_delegate;
    unsigned long long _editCapabilities;
    long long _layout;
    PUStackView *_stackView;
    NSString *_subtitle;
    NSString *_title;
    double _xInset;
    bool__showsTitleAndSubtitle;
    bool_combinesPhotoDecorations;
    bool_editing;
    bool_enabled;
    bool_pinned;
    bool_showsDeleteButtonWhenEditing;
}

@property(setter=_setDeleteButton:,retain) UIButton * _deleteButton;
@property(setter=_setPinButton:,retain) UIButton * _pinButton;
@property(setter=_setShowsTitleAndSubtitle:) bool _showsTitleAndSubtitle;
@property(setter=_setSubtitleLabel:,retain) UILabel * _subtitleLabel;
@property(setter=_setTitleTextField:,retain) UITextField * _titleTextField;
@property bool combinesPhotoDecorations;
@property(retain) UIView * customImageView;
@property(copy,readonly) NSString * debugDescription;
@property <PUAlbumListCellDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property unsigned long long editCapabilities;
@property(getter=isEditing) bool editing;
@property(getter=isEnabled) bool enabled;
@property(readonly) unsigned long long hash;
@property long long layout;
@property(getter=isPinned) bool pinned;
@property bool showsDeleteButtonWhenEditing;
@property(retain) PUStackView * stackView;
@property(copy) NSString * subtitle;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property double xInset;

+ (void)_updateLabelGlobalCachedSizes;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_deleteAction:(id)arg1;
- (id)_deleteButton;
- (struct CGPoint { double x1; double x2; })_deleteButtonCenter;
- (void)_pinAction:(id)arg1;
- (id)_pinButton;
- (struct CGPoint { double x1; double x2; })_pinButtonOriginForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pinButtonSize:(struct CGSize { double x1; double x2; })arg2 titleTextFieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 subtitleLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_setDeleteButton:(id)arg1;
- (void)_setPinButton:(id)arg1;
- (void)_setShowsTitleAndSubtitle:(bool)arg1;
- (void)_setStackView:(id)arg1;
- (void)_setSubtitleLabel:(id)arg1;
- (void)_setTitleTextField:(id)arg1;
- (bool)_showsPinButton;
- (bool)_showsTitleAndSubtitle;
- (id)_subtitleLabel;
- (double)_titleFieldAlpha;
- (id)_titleTextField;
- (long long)_titleTextFieldAlignmentForLayout:(long long)arg1;
- (long long)_titleTextFieldClearButtonModeForLayout:(long long)arg1;
- (void)_updateDeleteButtonAnimated:(bool)arg1;
- (void)_updatePinButtonAnimated:(bool)arg1;
- (void)_updateStackViewAnimated:(bool)arg1;
- (void)_updateSubtitleLabelAnimated:(bool)arg1;
- (void)_updateSubviewOrdering;
- (void)_updateTitleFieldAnimated:(bool)arg1;
- (void)cancelPerformRetitleAction;
- (bool)combinesPhotoDecorations;
- (id)customImageView;
- (id)delegate;
- (unsigned long long)editCapabilities;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (bool)isEnabled;
- (bool)isPinned;
- (long long)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCombinesPhotoDecorations:(bool)arg1;
- (void)setCustomImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditCapabilities:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setEditCapabilities:(unsigned long long)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditing:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setLayout:(long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setShowsDeleteButtonWhenEditing:(bool)arg1;
- (void)setShowsTitle:(bool)arg1 animated:(bool)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setXInset:(double)arg1;
- (bool)showsDeleteButtonWhenEditing;
- (id)stackView;
- (id)subtitle;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)title;
- (double)xInset;

@end
