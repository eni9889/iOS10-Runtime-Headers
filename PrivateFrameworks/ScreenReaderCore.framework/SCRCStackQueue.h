/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCStackQueue : NSObject  {
    struct _SCRCStackNode { id x1; void *x2; void *x3; } *_firstNode;
    struct _SCRCStackNode { id x1; void *x2; void *x3; } *_lastNode;
    unsigned int _count;
}


- (id)dequeueObject;
- (id)topObject;
- (id)popObject;
- (void)pushArray:(id)arg1;
- (id)popObjectRetained;
- (void)pushObject:(id)arg1;
- (id)dequeueObjectRetained;
- (void)enqueueObject:(id)arg1;
- (BOOL)isEmpty;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)dealloc;
- (id)description;

@end
