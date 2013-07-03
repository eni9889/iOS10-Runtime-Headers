/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDDatabase, NSArray;

@interface ACDDatabaseInitializer : NSObject  {
    ACDDatabase *_database;
    NSArray *_dataclasses;
    NSArray *_accountTypes;
    NSArray *_accounts;
    NSArray *_accessKeys;
}


- (void)insertAllDefaultContent;
- (id)_resultsForEntityNamed:(id)arg1;
- (void)_addCredentialType:(id)arg1 toAccountType:(id)arg2 supportsAuthentication:(BOOL)arg3;
- (void)_ensureAccountTypeWithIdentifier:(id)arg1 supportsDataclasses:(id)arg2 syncsDataclasses:(id)arg3;
- (id)_accessKeyWithName:(id)arg1;
- (void)_addAccessKeyWithName:(id)arg1;
- (id)_accounts;
- (id)_dataclassWithName:(id)arg1;
- (void)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 credentialType:(id)arg5 supportsAuthentication:(BOOL)arg6 supportsMultipleAccounts:(BOOL)arg7;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (void)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(BOOL)arg7 supportsMultipleAccounts:(BOOL)arg8 credentialProtectionPolicy:(id)arg9;
- (void)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(BOOL)arg7 supportsMultipleAccounts:(BOOL)arg8;
- (id)_accessKeys;
- (id)_accountTypes;
- (id)_dataclasses;
- (void)_makeTencentWeiboSingleton;
- (void)_updateIdentityServicesAccountDescription;
- (void)_updateIdentityServicesAccountTypeToSupportAuthenticationAndMultipleAccounts;
- (void)_addFindMyiPhoneAccountType;
- (void)_addAccessKeysAttributeToTencentWeiboAccountType;
- (void)_addTencentWeiboAccessKeys;
- (void)_updateTencentWeiboCredentialTypeToOAuth2;
- (void)_addIMAPMailAccountType;
- (void)_addPOPAccountType;
- (void)_addIMAPAccountType;
- (void)_addTokenCredentialTypeToYahooAccountType;
- (void)_addPasswordCredentialTypeToGmailAccountType;
- (void)_addPasswordCredentialTypeToSMTPAccountType;
- (void)_ensureProperAccountTypeDataclasses;
- (void)_addLDAPAccountType;
- (void)_addIMAPNotesAccountType;
- (void)_addHotmailAccountType;
- (void)_addExchangeAccountType;
- (void)_addBookmarkDAVAccountType;
- (void)_addSubscribedCalendarAccountType;
- (void)_limitLinkedInToOneAccount;
- (void)_addIdentityServicesAccountType;
- (void)_updateVimeoCredentialTypeToOAuth;
- (void)_updateFlickrCredentialTypeToOAuth;
- (void)_limitVimeoToOneAccount;
- (void)_limitFlickrToOneAccount;
- (void)_addAccessKeysAttributeToLinkedInAccountType;
- (void)_addLinkedInAccessKeys;
- (void)_addiTunesStoreAccountType;
- (void)_addGameCenterAccountType;
- (void)_addMadridAccountType;
- (void)_addFaceTimeAccountType;
- (void)_addRemindersDataclassToCalDAVAccountType;
- (void)_addYahooAccountType;
- (void)_addGmailAccountType;
- (void)_addSMTPAccountType;
- (void)_upgradeLinkedInAccountType;
- (void)_addTencentWeiboAccountType;
- (void)_addAccessKeysAttributeToLiverpoolAccountType;
- (void)_addLiverpoolAccessKeys;
- (void)_addLiverpoolAccountType;
- (void)_addAppleAccountType;
- (void)_addFacebookAudienceAccessKeyToFacebookAccountType;
- (void)_addFacebookAudienceAccessKey;
- (void)_removeFacebookAppVersionAccessKey;
- (void)_removeFacebookPermissionGroupAccessKey;
- (void)_addAccessKeysAttributeToFacebookAccountType;
- (void)_addFacebookAccessKeys;
- (void)_addYelpAccountType;
- (void)_addSupportsMultipleAccountsAttributeToAccountTypes;
- (void)_addSyncableDataclassesToCardAndCalDAV;
- (void)_addMissingAccountTypes;
- (void)_addSupportsAuthenticationAttributeToAccounts;
- (void)_addSupportsAuthenticationAttributeToAccountTypes;
- (void)_updateWeiboAccountTypeIfNecessary;
- (void)_addYoukuAccountType;
- (void)_addTudouAccountType;
- (void)_addContactsCalendarsDataclassesToFB;
- (void)_addDataclassWithName:(id)arg1;
- (void)_addCardDAVAccountType;
- (void)_addCalDAVAccountType;
- (void)_addFacebookAccountType;
- (void)_addLinkedInAccountType;
- (void)_addVimeoAccountType;
- (void)_addFlickrAccountType;
- (void)_addAppleIDAccountType;
- (void)_addWeiboAccountType;
- (void)_addTwitterAccountType;
- (void)updateDefaultContent;
- (id)initWithDatabase:(id)arg1;
- (void).cxx_destruct;

@end
