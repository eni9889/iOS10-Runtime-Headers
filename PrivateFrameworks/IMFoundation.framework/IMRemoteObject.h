/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSObject<OS_xpc_object>;

@interface IMRemoteObject : NSObject  {
    id _internal;
}

@property(readonly) NSString * portName;
@property int pid;
@property(readonly) NSObject<OS_xpc_object> * connection;
@property(readonly) BOOL isValid;

+ (id)_remoteObjects;
+ (void)_unregisterIMRemoteObject:(id)arg1;
+ (void)_registerIMRemoteObject:(id)arg1;
+ (void)initialize;

- (void)setPid:(int)arg1;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2;
- (int)pid;
- (unsigned int)forwardXPCObject:(id)arg1;
- (void)_cleanupMachBitsCanPost:(BOOL)arg1;
- (id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4;
- (void)setPortName:(id)arg1;
- (void)_systemShutdown:(id)arg1;
- (id)portName;
- (void)_portDidBecomeInvalid;
- (id)_queue;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)connection;

@end
