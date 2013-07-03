/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject  {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (BOOL)hasListenerID:(id)arg1 forService:(id)arg2;
- (void)_stopListeningToMonitor:(id)arg1;
- (id)containerForService:(id)arg1 create:(BOOL)arg2;
- (void)_startListeningToMonitor:(id)arg1;
- (BOOL)_isValidServiceType:(id)arg1;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (void)_postNotificationForService:(id)arg1 availability:(int)arg2;
- (BOOL)addListenerID:(id)arg1 forService:(id)arg2;
- (int)availabilityForListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;
- (id)init;
- (void)dealloc;

@end
