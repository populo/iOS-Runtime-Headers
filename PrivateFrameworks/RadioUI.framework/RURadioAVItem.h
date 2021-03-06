/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSArray, NSString, RadioStation, RadioTrack;

@interface RURadioAVItem : MPAVItem {
    NSArray *_buyOffers;
    RadioTrack *_radioTrack;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    bool_heartbeatInvalid;
    bool_isBanned;
    bool_isInWishList;
    bool_isLiked;
}

@property(getter=isHeartbeatInvalid) bool heartbeatInvalid;
@property bool isBanned;
@property bool isInWishList;
@property bool isLiked;
@property(retain) RadioStation * station;
@property(readonly) NSString * stationHash;
@property(readonly) long long stationID;
@property(readonly) NSString * stationName;

- (void).cxx_destruct;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (void)_internalIsBannedDidChangeNotification:(id)arg1;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (void)_internalIsLikedDidChangeNotification:(id)arg1;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)addDerivedStationForArtist:(bool)arg1 withCompletionHandler:(id)arg2;
- (id)aggregateDictionaryItemType;
- (id)album;
- (long long)albumStoreID;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)buyOffers;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)copyrightText;
- (unsigned long long)countForQueueFeeder;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRadioTrack:(id)arg1;
- (bool)isBanned;
- (bool)isCloudItem;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (bool)isHeartbeatInvalid;
- (bool)isInWishList;
- (bool)isLiked;
- (bool)isRadioItem;
- (bool)isStreamable;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)persistentID;
- (id)radioTrack;
- (void)reevaluateType;
- (void)setHeartbeatInvalid:(bool)arg1;
- (void)setIsBanned:(bool)arg1;
- (void)setIsInWishList:(bool)arg1;
- (void)setIsLiked:(bool)arg1;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (long long)storeID;
- (bool)supportsSettingCurrentTime;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned long long)type;
- (id)urlTimeMarkers;

@end
