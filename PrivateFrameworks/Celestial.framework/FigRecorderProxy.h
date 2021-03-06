/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class <FigCaptureSessionPreviewTapDelegate>;

@interface FigRecorderProxy : FigCaptureSessionProxy {
    long long _identifier;
    <FigCaptureSessionPreviewTapDelegate> *_previewTapDelegate;
    struct OpaqueFigRecorder { } *_recorder;
    bool_previewTapOpened;
}

- (void)closePreviewTap;
- (void)dealloc;
- (long long)identifier;
- (id)initWithFigRecorder:(struct OpaqueFigRecorder { }*)arg1 identifier:(long long)arg2;
- (int)openPreviewTapWithDelegate:(id)arg1;

@end
