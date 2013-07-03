/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSConditionLock;

@interface _SCRCThreadTask : NSObject  {
    id _target;
    SEL _selector;
    unsigned long _count;
    void *_objects[5];
    NSConditionLock *_waitLock;
    unsigned long _mask;
}


- (void)setWaitLock:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned long)arg3 count:(unsigned long)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;
- (void)dealloc;
- (void)fire;

@end
