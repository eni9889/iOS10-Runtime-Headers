/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject  {
    NSMutableDictionary *_services;
}

@property(readonly) NSArray * allServices;

+ (id)sharedInstance;

- (void)registerSessionClassWithBundle:(id)arg1;
- (id)serviceWithName:(id)arg1;
- (id)allServices;
- (id)init;
- (void)dealloc;

@end
