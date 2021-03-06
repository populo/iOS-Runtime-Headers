/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PUPhotoEditViewControllerDelegate>, CIImage, GLKView, NSArray, NSString, NSURL, PHAsset, PLPhotoEditModel, PLPhotoEditMutableModel, PLPhotoEditRenderer, PUAdjustmentsToolController, PUAutoAdjustmentController, PUCropToolController, PUEditPluginSession, PUFiltersToolController, PUPhotoEditOverlayBadge, PUPhotoEditToolController, PUPhotoEditToolbar, PUPhotoEditValuesCalculator, PUPhotoEditViewControllerSpec, PUProgressIndicatorView, PURedeyeToolController, PUResourceDownloadRequest, UIButton, UIImage, UIImageView, UILongPressGestureRecognizer, UIScrollView, _PUPhotoEditSnapshot;

@interface PUPhotoEditViewController : UIViewController <GLKViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, PUPhotoEditToolControllerDelegate, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PUPhotoLibraryUIChangeObserver, PUPhotoEditLayoutSource> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGPoint { 
        double x; 
        double y; 
    NSArray *__allTools;
    CIImage *__baseWorkCIImage;
    UIImage *__baseWorkUIImage;
    PUResourceDownloadRequest *__currentResourceLoadRequest;
    long long __disablingMostControlsCount;
    PLPhotoEditRenderer *__mainRenderer;
    id __nextRenderCompletionBlock;
    CIImage *__originalWorkCIImage;
    UIImage *__originalWorkUIImage;
    PLPhotoEditMutableModel *__photoEditModel;
    long long __previewRenderType;
    PLPhotoEditRenderer *__previewingOriginalRenderer;
    PURedeyeToolController *__redEyeController;
    NSArray *__secondaryTools;
    NSArray *__toolbarTools;
    PLPhotoEditModel *__uneditedPhotoEditModel;
    PUPhotoEditValuesCalculator *__valuesCalculator;
    long long __workImageVersion;
    PUAdjustmentsToolController *_adjustmentsController;
    PUPhotoEditToolbar *_alternateToolbar;
    NSArray *_alternateToolbarConstraints;
    UIButton *_autoEnhanceButton;
    PUAutoAdjustmentController *_autoEnhanceController;
    UIButton *_cancelButton;
    PUCropToolController *_cropController;
    PUPhotoEditToolController *_currentEditingTool;
    NSArray *_currentToolViewConstraints;
    <PUPhotoEditViewControllerDelegate> *_delegate;
    PUFiltersToolController *_filtersController;
    } _lastKnownPreviewViewSize;
    } _lastKnownWorkImageSize;
    long long _layoutOrientation;
    UIButton *_mainActionButton;
    long long _mainButtonAction;
    GLKView *_mainPreviewView;
    PUPhotoEditToolbar *_mainToolbar;
    NSArray *_mainToolbarConstraints;
    PHAsset *_photo;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    UIImage *_placeholderImage;
    UIImageView *_placeholderImageView;
    NSArray *_placeholderImageViewConstraints;
    UIButton *_pluginButton;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    NSURL *_pluginFullSizeImageURL;
    PUEditPluginSession *_pluginSession;
    long long _pluginWorkImageVersion;
    UIScrollView *_previewViewScrollingContainer;
    NSArray *_previewViewScrollingContainerConstraints;
    PUPhotoEditOverlayBadge *_previewingOriginalBadge;
    NSArray *_previewingOriginalBadgeConstraints;
    id _progressIndicatorInteractionDisablingToken;
    PUProgressIndicatorView *_progressIndicatorView;
    NSArray *_progressIndicatorViewConstraints;
    UIButton *_redEyeButton;
    NSArray *_secondaryToolButtons;
    PUPhotoEditToolbar *_secondaryToolbar;
    NSArray *_secondaryToolbarConstraints;
    _PUPhotoEditSnapshot *_stashedSnapshot;
    } _togglePreviewPressGestureInitialPoint;
    UILongPressGestureRecognizer *_togglePreviewPressGestureRecognizer;
    NSArray *_toolButtons;
    bool__canAnimateNextAutoEnhance;
    bool__hasChangedAsset;
    bool__hasFinishedSaving;
    bool__penultimateAvailable;
    bool__resourcesReadyLocally;
    bool__revertingToOriginal;
    bool__shouldBePreviewingOriginal;
    bool__waitingForBaseImageRequest;
    bool__waitingForOriginalImageRequest;
    bool_didLoadTools;
    bool_hasPluginButton;
    bool_hasRequestedAdjustmentsData;
    bool_photoTakenWithoutFlash;
    bool_pluginWorkImageVersionIsValid;
    bool_previewViewHidden;
    bool_previewViewScrollingContainerLayoutIsValid;
    bool_switchingToolsAnimated;
    bool_wantsPluginButton;
}

@property(setter=_setBaseWorkCIImage:,retain) CIImage * _baseWorkCIImage;
@property(setter=_setBaseWorkUIImage:,retain) UIImage * _baseWorkUIImage;
@property(setter=_setCanAnimateNextAutoEnhance:) bool _canAnimateNextAutoEnhance;
@property(setter=_setCurrentResourceLoadRequest:,retain) PUResourceDownloadRequest * _currentResourceLoadRequest;
@property(setter=_setHasChangedAsset:) bool _hasChangedAsset;
@property(setter=_setHasFinishedSaving:) bool _hasFinishedSaving;
@property(setter=_setMainRenderer:,retain) PLPhotoEditRenderer * _mainRenderer;
@property(setter=_setNextRenderCompletionBlock:,copy) id _nextRenderCompletionBlock;
@property(setter=_setOriginalWorkCIImage:,retain) CIImage * _originalWorkCIImage;
@property(setter=_setOriginalWorkUIImage:,retain) UIImage * _originalWorkUIImage;
@property(getter=_isPenultimateAvailable,setter=_setPenultimateAvailable:) bool _penultimateAvailable;
@property(setter=_setPhotoEditModel:,retain) PLPhotoEditMutableModel * _photoEditModel;
@property(setter=_setPreviewRenderType:) long long _previewRenderType;
@property(setter=_setPreviewingOriginalRenderer:,retain) PLPhotoEditRenderer * _previewingOriginalRenderer;
@property(setter=_setRedEyeController:,retain) PURedeyeToolController * _redEyeController;
@property(setter=_setResourcesReadyLocally:) bool _resourcesReadyLocally;
@property(getter=_isRevertingToOriginal,setter=_setRevertingToOriginal:) bool _revertingToOriginal;
@property(setter=_setShouldBePreviewingOriginal:) bool _shouldBePreviewingOriginal;
@property(setter=_setUneditedPhotoEditModel:,copy) PLPhotoEditModel * _uneditedPhotoEditModel;
@property(setter=_setValuesCalculator:,retain) PUPhotoEditValuesCalculator * _valuesCalculator;
@property(setter=_setWaitingForBaseImageRequest:) bool _waitingForBaseImageRequest;
@property(setter=_setWaitingForOriginalImageRequest:) bool _waitingForOriginalImageRequest;
@property(setter=_setWorkImageVersion:) long long _workImageVersion;
@property(copy,readonly) NSString * debugDescription;
@property <PUPhotoEditViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property long long layoutOrientation;
@property(readonly) PHAsset * photo;
@property(readonly) PUPhotoEditViewControllerSpec * photoEditSpec;
@property(retain) UIImage * placeholderImage;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewViewFrame;
@property(getter=isPreviewViewHidden) bool previewViewHidden;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionButtonForToolbar:(id)arg1 isMainAction:(bool)arg2;
- (id)_allTools;
- (id)_baseWorkCIImage;
- (id)_baseWorkUIImage;
- (void)_beginDisablingMostControls;
- (bool)_canAnimateNextAutoEnhance;
- (void)_captureSnapshotOfBasePhotoWithCompletionHandler:(id)arg1;
- (void)_checkPhotoTakenWithoutFlash;
- (id)_currentResourceLoadRequest;
- (id)_defaultInitialEditingTool;
- (void)_endDisablingMostControls;
- (void)_finishSaving;
- (void)_handleAutoEnhanceButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_handlePluginButton:(id)arg1;
- (void)_handleRedeyeButton:(id)arg1;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleSecondaryToolbarToolButton:(id)arg1;
- (void)_handleTogglePreviewPressGesture:(id)arg1;
- (void)_handleToolbarToolButton:(id)arg1;
- (bool)_hasChangedAsset;
- (bool)_hasFinishedSaving;
- (bool)_isDisablingMostControls;
- (bool)_isPenultimateAvailable;
- (bool)_isPreviewingOriginal;
- (bool)_isReadyToRender;
- (bool)_isRedEyeButtonSecondaryActionInSecondaryToolbar;
- (bool)_isRevertingToOriginal;
- (void)_loadBaseImageIfNecessary;
- (void)_loadOriginalImageIfNecessary;
- (void)_loadPhotoEditModelIfNecessary;
- (void)_loadPluginSessionIfNeededAndUpdatePluginButtonAnimated:(bool)arg1;
- (void)_loadRemoteResourcesIfNecessary;
- (void)_loadToolsIfNeeded;
- (id)_mainRenderer;
- (id)_newToolButtonForTool:(id)arg1;
- (id)_nextRenderCompletionBlock;
- (void)_notifyDelegateSaveFinishedAfterDelayIfNeeded;
- (id)_orientedCIImageFromUIImage:(id)arg1;
- (id)_originalWorkCIImage;
- (id)_originalWorkUIImage;
- (id)_photoEditModel;
- (void)_photoEditModelDidChange:(id)arg1;
- (long long)_previewRenderType;
- (id)_previewingOriginalRenderer;
- (id)_redEyeController;
- (void)_resetModelAndBaseImagesToWorkImageVersion:(long long)arg1;
- (bool)_resourcesReadyLocally;
- (void)_restoreSnapshot:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_revertToOriginalWithCompletionHandler:(id)arg1;
- (struct CGSize { double x1; double x2; })_scaleSize:(struct CGSize { double x1; double x2; })arg1 toFitSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_secondaryTools;
- (void)_setBaseWorkCIImage:(id)arg1;
- (void)_setBaseWorkUIImage:(id)arg1;
- (void)_setCanAnimateNextAutoEnhance:(bool)arg1;
- (void)_setCurrentResourceLoadRequest:(id)arg1;
- (void)_setDisablingMostControlsCount:(long long)arg1;
- (void)_setHasChangedAsset:(bool)arg1;
- (void)_setHasFinishedSaving:(bool)arg1;
- (void)_setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setLayoutOrientation:(long long)arg1;
- (void)_setMainRenderer:(id)arg1;
- (void)_setNextRenderCompletionBlock:(id)arg1;
- (void)_setOriginalWorkCIImage:(id)arg1;
- (void)_setOriginalWorkUIImage:(id)arg1;
- (void)_setPenultimateAvailable:(bool)arg1;
- (void)_setPhotoEditModel:(id)arg1;
- (void)_setPreviewRenderType:(long long)arg1;
- (void)_setPreviewingOriginalRenderer:(id)arg1;
- (void)_setRedEyeController:(id)arg1;
- (void)_setResourcesReadyLocally:(bool)arg1;
- (void)_setRevertingToOriginal:(bool)arg1;
- (void)_setShouldBePreviewingOriginal:(bool)arg1;
- (void)_setUneditedPhotoEditModel:(id)arg1;
- (void)_setValuesCalculator:(id)arg1;
- (void)_setWaitingForBaseImageRequest:(bool)arg1;
- (void)_setWaitingForOriginalImageRequest:(bool)arg1;
- (void)_setWorkImageVersion:(long long)arg1;
- (void)_setupToolsIfNeeded;
- (bool)_shouldBePreviewingOriginal;
- (bool)_shouldDisplayTool:(id)arg1;
- (void)_showCancelAndRevertOptionsAllowResetTool:(bool)arg1;
- (void)_startSaving;
- (void)_switchToEditingTool:(id)arg1 animated:(bool)arg2;
- (id)_toolbarButtonsForToolbar:(id)arg1;
- (id)_toolbarTools;
- (id)_uneditedPhotoEditModel;
- (void)_updateAutoEnhanceButton;
- (void)_updateBackgroundColor;
- (void)_updateLastKnownImageSize;
- (void)_updateLayoutOrientationWithViewSize:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (void)_updateMainActionButtonAnimated:(bool)arg1;
- (void)_updateMainRenderer;
- (void)_updateModelDependentControlsAnimated:(bool)arg1;
- (void)_updatePenultimateAvailableWithCompletionHandler:(id)arg1;
- (void)_updatePhoto;
- (void)_updatePlaceholderImage;
- (void)_updatePluginWorkImageVersion;
- (void)_updatePreviewContainerLayout;
- (void)_updatePreviewingOriginal;
- (void)_updatePreviewingOriginalBadge;
- (void)_updateProgressIndicatorAnimated:(bool)arg1;
- (void)_updateRedEyeToolButton;
- (void)_updateRenderedPreviewForceRender:(bool)arg1;
- (void)_updateScrollViewCentering;
- (void)_updateScrollViewContentSize;
- (void)_updateScrollViewForProxyZooming;
- (void)_updateSubviewsOrdering;
- (void)_updateTogglePreviewGestureRecognizer;
- (void)_updateToolbarAnimated:(bool)arg1;
- (void)_updateToolbarBackgroundAnimated:(bool)arg1;
- (void)_updateValuesCalculator;
- (id)_valuesCalculator;
- (bool)_waitingForBaseImageRequest;
- (bool)_waitingForOriginalImageRequest;
- (struct CGSize { double x1; double x2; })_workImageSizeForScreen:(id)arg1;
- (long long)_workImageVersion;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id)arg3;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 loadDisplaySizeImageWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 loadFullSizeImageWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(id)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)editPluginSessionDidEnd:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithPhoto:(id)arg1;
- (bool)isPreviewViewHidden;
- (long long)layoutOrientation;
- (id)photo;
- (id)photoEditSpec;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)placeholderImage;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewViewFrame;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsStatusBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)requestDismissTransitionViewContentsWithCompletion:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPreviewViewHidden:(bool)arg1;
- (void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(bool)arg2;
- (void)toolController:(id)arg1 updateModelDependentControlsAnimated:(bool)arg2;
- (id)toolControllerBaseCIImage:(id)arg1;
- (id)toolControllerBaseImage:(id)arg1;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
- (void)toolControllerDidChangePreferredRenderMode:(id)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
- (void)toolControllerDidFinish:(id)arg1;
- (id)toolControllerImageScrollView:(id)arg1;
- (id)toolControllerMainContainerView:(id)arg1;
- (id)toolControllerMainRenderer:(id)arg1;
- (struct CGSize { double x1; double x2; })toolControllerOriginalImageSize:(id)arg1;
- (id)toolControllerPreviewView:(id)arg1;
- (id)toolControllerUneditedPhotoEditModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
