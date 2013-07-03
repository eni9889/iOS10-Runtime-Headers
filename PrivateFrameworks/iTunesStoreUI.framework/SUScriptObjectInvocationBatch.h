/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptObject, NSMutableArray, NSLock;

@interface SUScriptObjectInvocationBatch : NSObject  {
    NSMutableArray *_invocationQueue;
    NSLock *_lock;
    struct __CFDictionary { } *_proxies;
    SUScriptObject *_rootObject;
}

@property SUScriptObject * rootObject;


- (void)enqueueInvocation:(id)arg1;
- (void)_delayedDequeueInvocations;
- (void)dequeueInvocations;
- (id)batchProxyForObject:(id)arg1;
- (id)copyQueuedInvocationsForObject:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)rootObject;
- (void)setRootObject:(id)arg1;

@end
