/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSObject<OS_dispatch_queue>, NSMutableArray, SSXPCServer;

@interface SSDistributedNotificationCenter : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSString *_portName;
    SSXPCServer *_server;
}

@property(readonly) NSString * namedPort;


- (id)namedPort;
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2;
- (void)_distributedNotificationMessage:(id)arg1 connection:(id)arg2;
- (id)initWithNamedPort:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;

@end
