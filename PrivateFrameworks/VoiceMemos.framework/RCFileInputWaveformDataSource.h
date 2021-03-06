/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSObject<OS_dispatch_queue>, NSURL;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {
    NSURL *_AVFileURL;
    double _cachedDuration;
    float _loadingProgress;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(copy,readonly) NSURL * AVFileURL;
@property(readonly) bool savesGeneratedWaveform;

- (void).cxx_destruct;
- (id)AVFileURL;
- (double)duration;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id)arg2;
- (id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(bool)arg2 segmentFlushInterval:(double)arg3;
- (id)initWithAVFileURL:(id)arg1;
- (float)loadingProgress;
- (void)saveGeneratedWaveformIfNecessary;
- (bool)savesGeneratedWaveform;
- (void)setLoadingProgress:(float)arg1;
- (bool)setPaused:(bool)arg1;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;

@end
