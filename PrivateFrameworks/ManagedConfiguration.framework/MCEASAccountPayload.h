/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString, NSData;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    BOOL _useSSL;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    BOOL _syncDefaultFoldersOnly;
    NSString *_headerMagic;
}

@property(readonly) NSString * accountDescription;
@property(readonly) NSString * hostname;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(copy) NSString * emailAddress;
@property(readonly) BOOL useSSL;
@property(readonly) NSNumber * mailNumberOfPastDaysToSync;
@property(readonly) NSData * embeddedCertificate;
@property(readonly) NSString * embeddedCertificateName;
@property(copy) NSString * embeddedCertificatePassword;
@property(readonly) NSString * certificateUUID;
@property(readonly) BOOL hasCertificate;
@property(retain) NSString * headerMagic;
@property(copy) NSString * accountPersistentUUID;
@property(retain) NSData * certificatePersistentID;
@property BOOL syncDefaultFoldersOnly;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setHeaderMagic:(id)arg1;
- (id)headerMagic;
- (void)setSyncDefaultFoldersOnly:(BOOL)arg1;
- (BOOL)syncDefaultFoldersOnly;
- (void)setEmbeddedCertificatePassword:(id)arg1;
- (id)embeddedCertificatePassword;
- (id)embeddedCertificateName;
- (id)embeddedCertificate;
- (id)mailNumberOfPastDaysToSync;
- (BOOL)hasCertificate;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)accountPersistentUUID;
- (BOOL)useSSL;
- (id)certificateUUID;
- (void)setCertificatePersistentID:(id)arg1;
- (id)certificatePersistentID;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setEmailAddress:(id)arg1;
- (id)title;
- (id)emailAddress;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)accountDescription;
- (id)hostname;
- (id)password;
- (void).cxx_destruct;
- (id)description;

@end
