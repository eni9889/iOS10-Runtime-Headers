/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage, MPAVController, NSString, <MPVolumeControllerDelegate>;

@interface MPVolumeController : NSObject  {
    MPAVController *_player;
    NSString *_volumeAudioCategory;
    BOOL _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    BOOL _debugVolumeWarning;
    BOOL _volumeWarningEnabled;
    <MPVolumeControllerDelegate> *_delegate;
    float _volumeValue;
    int _volumeWarningState;
    float _EUVolumeLimit;
}

@property <MPVolumeControllerDelegate> * delegate;
@property(readonly) float volumeValue;
@property BOOL muted;
@property(retain) MPAVController * player;
@property(copy) NSString * volumeAudioCategory;
@property(readonly) BOOL volumeWarningEnabled;
@property(readonly) int volumeWarningState;
@property(readonly) float EUVolumeLimit;


- (void)_forcefullySetVolumeValue:(float)arg1;
- (void)_volumeDidChange:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (BOOL)_isPlayerInValidState;
- (void)_internalSetVolumeValue:(float)arg1;
- (float)volumeValue;
- (void)_tearDownNotifications;
- (void)_setVolumeWarningState:(int)arg1;
- (float)_volumeFromAVController;
- (void)_setupNotifications;
- (void)_systemVolumeDidChange:(id)arg1;
- (float)EUVolumeLimit;
- (void)setVolumeAudioCategory:(id)arg1;
- (id)volumeAudioCategory;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)updateVolumeValue;
- (void)updateVolumeWarningState;
- (int)volumeWarningState;
- (BOOL)volumeWarningEnabled;
- (float)setVolumeValue:(float)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (BOOL)muted;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setMuted:(BOOL)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;

@end
