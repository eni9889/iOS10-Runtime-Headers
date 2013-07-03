/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAlternateTextTrack, NSArray, MPAVItem, NSDictionary, AVPlayerItemLegibleOutput, NSMutableDictionary;

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
    BOOL _disableAlternateTextTrackRendering;
    AVPlayerItemLegibleOutput *_legibleOutput;
    MPAlternateTextTrack *_currentTextTrack;
    NSArray *_outOfBandTextTracks;
}

@property(getter=isLoaded,readonly) BOOL loaded;
@property(retain) NSArray * outOfBandTextTracks;
@property BOOL disableAlternateTextTrackRendering;
@property(retain) MPAlternateTextTrack * selectedAlternateTextTrack;

+ (id)subtitleLanguages;
+ (id)accessibleSubtitleCharacteristics;

- (unsigned int)trackCountForTypes:(unsigned int)arg1;
- (BOOL)hasTracksForTypes:(unsigned int)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned int)arg2;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (id)selectedAlternateTextTrack;
- (id)initWithItem:(id)arg1;
- (void)reloadDataWithChangedCaptionDisplayType:(BOOL)arg1;
- (void)commitTrackChanges;
- (void)beginTrackChanges;
- (id)_keyForTrackType:(unsigned int)arg1;
- (id)currentTrackForType:(unsigned int)arg1;
- (unsigned int)indexOfCurrentTrackForType:(unsigned int)arg1;
- (id)tracksForType:(unsigned int)arg1;
- (id)_currentTextTrackAccordingToAVF;
- (void)_suppressAVFSubtitleRendering;
- (void)enableLegibleOutputIfNecessary;
- (void)setDisableAlternateTextTrackRendering:(BOOL)arg1;
- (BOOL)disableAlternateTextTrackRendering;
- (void)setOutOfBandTextTracks:(id)arg1;
- (id)outOfBandTextTracks;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void).cxx_destruct;
- (void)reloadData;
- (BOOL)isLoaded;

@end
