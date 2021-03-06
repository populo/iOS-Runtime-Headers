/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSDate, NSDictionary, NSIndexPath, NSMutableArray, NSString, RUIBarButtonItem, RUIObjectModel<RUITableViewDelegate>, RUIPhotoPicker, RUITableHeaderView, RUITableViewRow, UIDatePicker, UIPickerView, UITableView, _UIBackdropView;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate, RUITableViewRowDelegate, RUITableViewSectionDelegate> {
    UIDatePicker *_datePicker;
    RUITableViewRow *_defaultFirstResponderRow;
    NSIndexPath *_embeddedPickerRowIndexPath;
    NSDictionary *_footerViewAttributes;
    float _fullscreenCellHeight;
    RUITableHeaderView *_headerView;
    NSDictionary *_headerViewAttributes;
    float _lastLayoutWidth;
    RUIObjectModel<RUITableViewDelegate> *_objectModel;
    RUIBarButtonItem *_oldLeftBarButtonItemForPicker;
    NSDate *_oldPickerDate;
    RUIBarButtonItem *_oldRightBarButtonItemForPicker;
    RUIPhotoPicker *_photoPicker;
    _UIBackdropView *_pickerBackdrop;
    NSIndexPath *_pickerRowIndexPath;
    NSMutableArray *_sections;
    UIPickerView *_selectPicker;
    UITableView *_tableView;
    bool_registeredForNotifications;
    bool_showDatePicker;
    bool_showSelectPicker;
    bool_showingPickerNavBarButtons;
}

@property(copy,readonly) NSString * debugDescription;
@property(retain) RUITableViewRow * defaultFirstResponderRow;
@property(copy,readonly) NSString * description;
@property(retain) NSDictionary * footerViewAttributes;
@property(readonly) unsigned long long hash;
@property(retain) NSString * headerTitle;
@property(readonly) RUITableHeaderView * headerView;
@property(retain) NSDictionary * headerViewAttributes;
@property RUIObjectModel<RUITableViewDelegate> * objectModel;
@property(readonly) NSMutableArray * sections;
@property(getter=isShowingPicker,readonly) bool showingPicker;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_becomeFirstResponderAtIndexPath:(id)arg1;
- (void)_clearPickers;
- (void)_datePickerRevert;
- (void)_enumerateRowsUsingBlock:(id)arg1;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (void)_registerForNotifications:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectPickerFrame;
- (void)_setBottomInset:(float)arg1;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerDone:(id)arg1;
- (void)dealloc;
- (id)defaultFirstResponderRow;
- (id)footerViewAttributes;
- (id)headerTitle;
- (id)headerView;
- (id)headerViewAttributes;
- (void)hidePickerViewAnimated:(bool)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)init;
- (bool)isShowingPicker;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)objectModel;
- (id)objectModelRowForIndexPath:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (void)rowActivatedLink:(id)arg1 attributes:(id)arg2 completion:(id)arg3;
- (void)rowActivatedLink:(id)arg1 attributes:(id)arg2;
- (void)rowDidChange:(id)arg1;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sectionActivatedLink:(id)arg1 attributes:(id)arg2 completion:(id)arg3;
- (id)sections;
- (void)setAttributes:(id)arg1;
- (void)setDefaultFirstResponderRow:(id)arg1;
- (void)setFooterViewAttributes:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewAttributes:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setSelectedRadioGroupRow:(id)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(bool)arg2;
- (id)sourceURL;
- (id)sourceURLForRUITableViewRow;
- (id)sourceURLForRUITableViewSection;
- (id)subElementsWithName:(id)arg1;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldStartedEditing:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
