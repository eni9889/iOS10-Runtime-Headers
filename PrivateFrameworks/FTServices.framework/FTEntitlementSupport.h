/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary;

@interface FTEntitlementSupport : NSObject  {
}

@property(readonly) BOOL faceTimeNonWiFiEntitled;
@property(readonly) NSDictionary * registrationState;

+ (id)sharedInstance;

- (BOOL)_disconnectCTServerConnection;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (void)_cleanupMachInfo;
- (void)_unregisterForCTEntitlementNotifications;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_handleEntitlementNotification:(struct __CFDictionary { }*)arg1;
- (void)_registrationStateChanged;
- (id)_rawEntitlementValue;
- (BOOL)_setupCTServerConnection;
- (BOOL)faceTimeNonWiFiEntitled;
- (id)registrationState;
- (id)init;

@end
