/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, RadioTrack;

@interface MPRadioAVItem : MPAVItem  {
    RadioTrack *_radioTrack;
    BOOL _isHeartbeatInvalid;
    BOOL _isBanned;
    BOOL _isLiked;
    BOOL _isInWishList;
    NSString *_stationHash;
    NSString *_stationName;
    long long _stationID;
}

@property(readonly) BOOL isHeartbeatInvalid;
@property BOOL isBanned;
@property BOOL isLiked;
@property BOOL isInWishList;
@property(copy) NSString * stationHash;
@property long long stationID;
@property(copy) NSString * stationName;


- (id)artist;
- (id)album;
- (id)stationName;
- (void)setStationName:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (id)stationHash;
- (long long)stationID;
- (BOOL)isHeartbeatInvalid;
- (void)setIsInWishList:(BOOL)arg1;
- (void)setIsLiked:(BOOL)arg1;
- (void)setIsBanned:(BOOL)arg1;
- (void)getStationDictionaryForDerivedStationUsingArtist:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)_sendLikeOrBanRequestWithStatus:(int)arg1;
- (BOOL)isInWishList;
- (id)initWithRadioTrack:(id)arg1;
- (void)_internalIsBannedDidChangeNotification:(id)arg1;
- (void)_internalIsLikedDidChangeNotification:(id)arg1;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (id)mediaItem;
- (BOOL)isRadioItem;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (id)_cachedArtworkImage;
- (void)reevaluateType;
- (id)localizedPositionInPlaylistString;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)titlesForTime:(double)arg1;
- (BOOL)supportsTrackInfo;
- (BOOL)supportsShare;
- (BOOL)supportsLikeOrBan;
- (BOOL)supportsHistory;
- (BOOL)supportsAddStation;
- (BOOL)isStreamable;
- (BOOL)hasDataForItemArtwork;
- (BOOL)isExplicitTrack;
- (unsigned int)countForQueueFeeder;
- (id)urlTimeMarkers;
- (id)artworkTimeMarkers;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (void)loadAssetAndPlayerItem;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)artworkMIMEType;
- (id)artworkImageData;
- (id)radioTrack;
- (BOOL)isBanned;
- (BOOL)isLiked;
- (id)mainTitle;
- (unsigned long long)persistentID;
- (id)title;
- (id)imageCache;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)type;

@end
