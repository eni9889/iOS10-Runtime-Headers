/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSInvocation;

@interface _UIActionWhenIdle : NSObject  {
    NSInvocation *_invocation;
}

@property(retain) NSInvocation * invocation;

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void)invoke;
- (void)invalidate;
- (void)dealloc;
- (void)setInvocation:(id)arg1;
- (void)addObserverToRunLoop;
- (id)invocation;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)initWithInvocation:(id)arg1;

@end
