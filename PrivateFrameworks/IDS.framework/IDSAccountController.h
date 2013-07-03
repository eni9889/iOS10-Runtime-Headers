/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSSet, _IDSAccountController;

@interface IDSAccountController : NSObject  {
    _IDSAccountController *_internal;
}

@property(readonly) NSSet * accounts;


- (id)_initWithService:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(id)arg5;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (id)accountWithUniqueID:(id)arg1;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)enabledAccounts;
- (id)_initWithService:(id)arg1 onIDSQueue:(BOOL)arg2;
- (id)_internal;
- (id)initWithService:(id)arg1;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)accounts;
- (void)dealloc;
- (id)serviceName;

@end
