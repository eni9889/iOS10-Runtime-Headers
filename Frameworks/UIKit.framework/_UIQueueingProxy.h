/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy <XPCProxyTarget> {
    int _lock;
    unsigned int _suspensionCount;
    NSMutableArray *_queuedInvocations;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shouldSuspendInvocationBlock;

}

+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id)arg2;
+ (id)proxyWithTarget:(id)arg1;

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)resume;
- (void)suspend;
- (void)removeAllEnqueuedInvocations;
- (void)_dispatchSuspendedMessages;

@end
