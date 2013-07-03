/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSDate, NSMutableArray, NSString;

@interface IMSystemMonitor : NSObject  {
    BOOL _watchesDataProtectionLockState;
    BOOL _watchesScreenLightState;
    BOOL _receivesMemoryWarnings;
    BOOL _willSleep;
    BOOL _screenLocked;
    BOOL _screensaverActive;
    BOOL _watchesSystemLockState;
    BOOL _underFirstLock;
    BOOL _active;
    BOOL _backingUp;
    BOOL _switchedOut;
    BOOL _screenLit;
    BOOL _systemLocked;
    BOOL _idleOverride;
    BOOL _usesPowerNotifications;
    BOOL _usesSystemIdleState;
    BOOL _inBackground;
    int _dataProtectionState;
    NSMutableArray *_listeners;
    NSDate *_idleStart;
    NSDate *_dateScreenLightLastChanged;
    NSDate *_dateSystemLockLastChanged;
    NSString *_userID;
    NSMutableArray *_earlyListeners;
    int _userIdleToken;
    double _delayTime;
}

@property(setter=setActive:) BOOL isActive;
@property BOOL usesPowerNotifications;
@property BOOL receivesMemoryWarnings;
@property BOOL usesSystemIdleState;
@property BOOL watchesDataProtectionLockState;
@property BOOL watchesSystemLockState;
@property BOOL watchesScreenLightState;
@property(readonly) BOOL systemIsSleeping;
@property(readonly) BOOL systemIsShuttingDown;
@property(readonly) BOOL isScreenSaverActive;
@property(readonly) BOOL isScreenLocked;
@property(readonly) BOOL isScreenLit;
@property(readonly) NSDate * dateScreenLightLastChanged;
@property(readonly) BOOL isSystemLocked;
@property(readonly) NSDate * dateSystemLockLastChanged;
@property(readonly) BOOL isUnderDataProtectionLock;
@property(readonly) BOOL isUnderFirstDataProtectionLock;
@property BOOL isFastUserSwitched;
@property(readonly) BOOL isBackingUp;
@property(readonly) BOOL isSetup;
@property(readonly) BOOL isSystemIdle;
@property(readonly) double systemIdleTime;
@property(readonly) BOOL isInBackground;
@property(retain) NSMutableArray * _listeners;
@property(retain) NSMutableArray * _earlyListeners;
@property int userIdleToken;
@property BOOL _idleOverride;
@property BOOL _underFirstLock;
@property int _dataProtectionState;
@property(retain) NSDate * _idleStart;
@property(retain) NSString * _userID;
@property double _delayTime;

+ (id)sharedInstance;

- (BOOL)isActive;
- (void)setUserIdleToken:(int)arg1;
- (int)userIdleToken;
- (BOOL)isInBackground;
- (BOOL)usesSystemIdleState;
- (void)set_earlyListeners:(id)arg1;
- (id)_earlyListeners;
- (void)set_idleOverride:(BOOL)arg1;
- (BOOL)_idleOverride;
- (void)set_delayTime:(double)arg1;
- (double)_delayTime;
- (void)set_userID:(id)arg1;
- (id)_userID;
- (BOOL)isSystemLocked;
- (id)dateSystemLockLastChanged;
- (id)dateScreenLightLastChanged;
- (BOOL)isScreenLit;
- (void)set_idleStart:(id)arg1;
- (id)_idleStart;
- (void)set_listeners:(id)arg1;
- (id)_listeners;
- (void)setIsFastUserSwitched:(BOOL)arg1;
- (BOOL)isFastUserSwitched;
- (BOOL)isBackingUp;
- (void)set_underFirstLock:(BOOL)arg1;
- (BOOL)_underFirstLock;
- (void)set_dataProtectionState:(int)arg1;
- (int)_dataProtectionState;
- (BOOL)watchesSystemLockState;
- (BOOL)isScreenSaverActive;
- (BOOL)isScreenLocked;
- (BOOL)systemIsSleeping;
- (BOOL)receivesMemoryWarnings;
- (BOOL)watchesScreenLightState;
- (BOOL)watchesDataProtectionLockState;
- (void)_registerForLoginWindowNotifications;
- (void)_handleLoginWindowNotification:(id)arg1;
- (BOOL)isSetup;
- (void)_setupStateChanged;
- (void)_restoreDidStop;
- (void)_restoreDidStart;
- (void)_checkRestoredFromBackup;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_systemWillShutdown;
- (BOOL)systemIsShuttingDown;
- (double)systemIdleTime;
- (void)_overrideAndDisableIdleTimer:(BOOL)arg1;
- (void)_setIdleState:(BOOL)arg1;
- (void)setUsesSystemIdleState:(BOOL)arg1;
- (void)_updateIdleState;
- (void)_setSystemLockState:(BOOL)arg1;
- (void)_setSystemScreenState:(BOOL)arg1;
- (void)setUsesPowerNotifications:(BOOL)arg1;
- (void)setWatchesScreenLightState:(BOOL)arg1;
- (void)setWatchesSystemLockState:(BOOL)arg1;
- (void)setWatchesDataProtectionLockState:(BOOL)arg1;
- (BOOL)isUnderFirstDataProtectionLock;
- (BOOL)isUnderDataProtectionLock;
- (void)_setDataProtectionLockState:(int)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_screenSaverStopped:(id)arg1;
- (void)_notificationCenterDidDisappear:(id)arg1;
- (void)_notificationCenterWillAppear:(id)arg1;
- (void)_resume:(id)arg1;
- (void)_suspend:(id)arg1;
- (void)_resumeEventsOnly:(id)arg1;
- (void)_suspendEventsOnly:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_systemWillSleep;
- (void)_systemDidWake;
- (void)_receivedMemoryNotification;
- (BOOL)isSystemIdle;
- (BOOL)usesPowerNotifications;
- (void)_postScreenSaverStarted;
- (void)_postScreenLocked;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (void)_unregisterForLoginWindowNotifications;
- (void)_unregisterForRestoreNotifications;
- (void)_registerForRestoreNotifications;
- (void)_removeEarlyListener:(id)arg1;
- (void)_addEarlyListener:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setReceivesMemoryWarnings:(BOOL)arg1;

@end
