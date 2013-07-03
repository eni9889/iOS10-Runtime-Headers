/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    unsigned int _requestExitAfterHidingControls : 1;
    unsigned int _rotateAfterHidingControls : 1;
    unsigned int _showControlsAfterRotate : 1;
    unsigned int _autoHidingForItemChange : 1;
    unsigned int _scheduledAutoHide : 1;
    unsigned int _orientationForStatusBarOverrideActive : 1;
    int _orientationForStatusBarOverride;
}


- (void)_hideOverlayWithAnimation:(BOOL)arg1;
- (int)orientationForStatusBar;
- (void)_autohideControlsOverlay;
- (void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2;
- (int)_validInterfaceOrientation;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (void)showOverlayIfNecessary;
- (BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2 atLocation:(struct CGPoint { float x1; float x2; })arg3;
- (void)displayVideoViewOnScreen;
- (id)newAlternateTracksTransition;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (BOOL)inhibitOverlay;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (void)transformVideoForInterfaceOrientation:(int)arg1 animate:(BOOL)arg2;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (void)_setStatusBarVisible:(BOOL)arg1 duration:(float)arg2;
- (BOOL)forceScaleToFitInPortrait;
- (void)cancelControlsOverlayAutohide;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)setInhibitOverlay:(BOOL)arg1;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (BOOL)controlsOverlayVisible;
- (BOOL)canShowControlsOverlay;
- (void)setItem:(id)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (int)statusBarStyle;
- (id)init;
- (void)dealloc;
- (void)_applicationDidBecomeActive:(id)arg1;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
