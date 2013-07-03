/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserNotificationManager : NSObject  {
}

@property(readonly) BOOL hasOutstandingNotifications;


- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 displayOnLockScreen:(BOOL)arg5 displayInAppWhitelistModes:(BOOL)arg6 dismissAfterTimeInterval:(double)arg7 completionBlock:(id)arg8;
- (BOOL)hasOutstandingNotifications;
- (void)cancelAllNotificationsCompletionBlock:(id)arg1;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (id)init;
- (void)dealloc;

@end
