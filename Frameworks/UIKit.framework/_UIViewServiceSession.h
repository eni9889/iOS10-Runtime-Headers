/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSXPCConnection, NSObject<OS_dispatch_queue>, NSLock, _UIAsyncInvocation, NSMutableDictionary;

@interface _UIViewServiceSession : NSObject <_UIViewServiceDeputyDelegate, _UIViewServiceViewControllerOperatorDelegate, _UIViewServiceSession_HostInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableSet *_deputies;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

@property(copy) id terminationHandler;

+ (id)sessionWithConnection:(id)arg1;
+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id)arg2;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(/* Warning: Unrecognized filer type: 'R' using 'void*' */ void*)arg2 replyHandler:(id)arg3;
     /* Encoded args for previous method: v20@0:4#8R@12@?16 */

- (void)checkDeputyForRotation:(id)arg1;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(id)arg2;
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (void)__requestConnectionToDeputyOfType:(id)arg1 withReplyHandler:(id)arg2;
- (void)setTerminationHandler:(id)arg1;
- (int)__automatic_invalidation_logic;
- (id)terminationHandler;

@end
