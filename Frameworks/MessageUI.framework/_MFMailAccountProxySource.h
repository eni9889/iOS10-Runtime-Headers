/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSLock;

@interface _MFMailAccountProxySource : NSObject  {
    NSLock *_lock;
    NSArray *_accountProxies;
    BOOL _registeredForNotifications;
    int _notifyToken;
}

+ (id)defaultInstance;

- (id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)_resetAccountsChanged:(BOOL)arg1;
- (void)_registerForNotifications_nts;
- (void)_deregisterForNotifications_nts;
- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)arg1;

@end
