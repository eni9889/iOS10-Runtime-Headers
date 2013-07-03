/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CADisplayLink, UIView;

@interface UIViewHeartbeat : NSObject  {
    UIView *_view;
    SEL _selector;
    CADisplayLink *_heartbeat;
}

+ (void)stopHeartbeatWithView:(id)arg1 selector:(SEL)arg2;
+ (void)startHeartbeatWithView:(id)arg1 selector:(SEL)arg2 inRunLoopMode:(id)arg3;

- (void)dealloc;
- (void)_updateDisplayLink:(id)arg1;

@end
