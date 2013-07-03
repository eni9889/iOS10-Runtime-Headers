/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface AXSpringBoardServer : AXServer  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _currentAlertHandler;

    NSMutableArray *_gestureOverrides;
    NSMutableArray *_actionHandlers;
}

+ (id)server;

- (BOOL)isGuidedAccessActive;
- (void)hideNotificationCenter;
- (void)copyStringToPasteboard:(id)arg1;
- (void)showNotificationCenter;
- (void)showControlCenter:(BOOL)arg1;
- (BOOL)isControlCenterVisible;
- (int)activeApplicationOrientation;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (void)removeOverrideIntent:(id)arg1;
- (void)removeActionHandler:(id)arg1;
- (void)showAlert:(int)arg1 withHandler:(id)arg2;
- (void)hideAlert;
- (float)volumeLevel;
- (BOOL)isScreenLockedWithPasscode:(BOOL*)arg1;
- (BOOL)isRingerMuted;
- (BOOL)isSideSwitchUsedForOrientation;
- (void)resetDimTimer;
- (BOOL)isVideoPlaying;
- (void)setSystemGesturesEnabled:(BOOL)arg1;
- (BOOL)isOrientationLocked;
- (BOOL)isSystemSleeping;
- (int)topEventPidOverride;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isSiriListening;
- (void)setSiriListening:(BOOL)arg1;
- (BOOL)isVoiceControlRunning;
- (void)startHearingAidServer;
- (void)toggleHearingControl;
- (void)openSCATCustomGestureCreation;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openAppSwitcher;
- (void)openVoiceControl;
- (BOOL)isSiriVisible;
- (void)openSiri;
- (void)takeScreenshot;
- (id)_serviceName;
- (void)toggleNotificationCenter;
- (BOOL)isNotificationCenterVisible;
- (void)registerOverrideIntentForGesture:(int)arg1 withHandler:(id)arg2 withIdentifierCallback:(id)arg3;
- (void)setCancelGestureActivation:(int)arg1 cancelEnabled:(BOOL)arg2;
- (void)registerSpringBoardActionHandler:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)showAlert:(int)arg1 withHandler:(id)arg2 withData:(id)arg3;
- (void)cleanupAlertHandler;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (BOOL)_shouldValidateEntitlements;
- (id)_handleActionResult:(id)arg1;
- (id)_handleGestureOverrideResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (void)_didConnectToServer;
- (void)setVolume:(float)arg1;
- (int)pid;
- (id)init;
- (void)dealloc;
- (int)activeInterfaceOrientation;

@end
