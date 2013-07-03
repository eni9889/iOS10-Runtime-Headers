/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, NSData, NSDictionary, AVExternalDeviceInternal;

@interface AVExternalDevice : NSObject  {
    AVExternalDeviceInternal *_externalDevice;
}

@property(readonly) NSArray * screenIDs;
@property(readonly) NSDictionary * screenInputCapabilities;
@property(readonly) NSArray * HIDMappings;
@property(readonly) NSData * dockIcon;
@property(readonly) NSData * settingsIcon;
@property(readonly) NSString * modelName;

+ (id)currentExternalDevice;

- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)requestCarUI;
- (id)modelName;
- (id)settingsIcon;
- (id)dockIcon;
- (id)HIDMappings;
- (id)screenIDs;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (id)initWithCurrentExternalDevice;
- (struct OpaqueFigEndpoint { }*)_figEndpoint;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)screenInputCapabilities;

@end
