/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSMutableArray, ACAccountStore;

@interface AAAccountManager : NSObject  {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
}

+ (id)sharedManager;

- (id)accountWithUsername:(id)arg1;
- (id)accountWithPersonID:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)saveAllAccounts;
- (void)_removeAppleIDCertsForUsername:(id)arg1;
- (void)updateAccount:(id)arg1;
- (id)accountsEnabledForDataclass:(id)arg1;
- (id)_accountStore;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)primaryAccount;
- (id)accounts;
- (id)accountWithIdentifier:(id)arg1;
- (void)reloadAccounts;
- (void)dealloc;
- (void).cxx_destruct;

@end
