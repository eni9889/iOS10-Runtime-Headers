/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityManager : NSObject  {
    id _internal;
}

@property(copy) id activityHandler;
@property(getter=isActivityAvailable,readonly) BOOL activityAvailable;


- (BOOL)isActivityAvailable;
- (id)activityHandler;
- (void)setActivityHandler:(id)arg1;
- (id)init;
- (void)dealloc;

@end
