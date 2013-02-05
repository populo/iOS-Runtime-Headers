/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;

@interface CKAVMediaObject : CKMediaObject {
    NSString *_createdFilename;
    BOOL _durationLoaded;
}

+ (double)maxMMSTrimDurationForMediaType:(int)arg1;
+ (id)transcodeOptionsWithMaxBytes:(int)arg1 forMediaType:(int)arg2;

- (void)copyToPasteboard:(id)arg1;
- (void)dealloc;
- (double)duration;
- (id)effectiveExportedFilename;
- (id)fileForDataWithExtension:(id)arg1;
- (id)icon;
- (void)prepareForTranscode;
- (void)setDuration:(double)arg1;
- (id)subtitle;
- (id)title;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (id)transcodeMimeType;
- (id)transcodePath;
- (double)transcodeStartTime;
- (id)transcodedFilename;

@end