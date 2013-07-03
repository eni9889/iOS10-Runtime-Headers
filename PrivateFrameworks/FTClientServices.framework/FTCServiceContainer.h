/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject  {
    FTCServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(retain) FTCServiceMonitor * monitor;
@property(readonly) NSMutableSet * listeners;


- (void)setMonitor:(id)arg1;
- (id)initWithServiceType:(int)arg1;
- (id)listeners;
- (BOOL)addListenerID:(id)arg1;
- (BOOL)hasListenerID:(id)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (id)monitor;
- (void)dealloc;

@end
