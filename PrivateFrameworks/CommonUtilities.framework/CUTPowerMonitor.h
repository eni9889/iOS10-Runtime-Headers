/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@class CUTWeakReference, NSMutableArray;

@interface CUTPowerMonitor : NSObject  {
    CUTWeakReference *_iokitDelegate;
    struct __CFRunLoopSource { } *_batteryRunLoopSource;
    struct IONotificationPort { } *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    struct IONotificationPort { } *_pmPort;
    unsigned int _pmNotifier;
    NSMutableArray *_delegates;
    BOOL _isExternalPowerConnected;
    double _currentLevel;
}

@property BOOL isExternalPowerConnected;
@property(readonly) double batteryPercentRemaining;
@property double currentLevel;

+ (id)sharedInstance;

- (BOOL)isExternalPowerConnected;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setExternalPowerConnected:(BOOL)arg1;
- (void)setCurrentLevel:(double)arg1;
- (double)currentLevel;
- (double)batteryPercentRemaining;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void*)arg2;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end
