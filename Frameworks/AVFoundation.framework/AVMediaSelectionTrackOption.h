/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetTrack, AVWeakReference, NSDictionary;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    NSDictionary *_dictionary;
    id _groupID;
    AVAssetTrack *_track;
    AVWeakReference *_weakReferenceToGroup;
    bool_displaysNonForcedSubtitles;
}

- (id)_groupID;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (id)dictionary;
- (bool)displaysNonForcedSubtitles;
- (id)group;
- (bool)hasMediaCharacteristic:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isPlayable;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)track;
- (int)trackID;

@end
