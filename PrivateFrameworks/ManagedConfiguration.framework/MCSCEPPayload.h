/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, NSData, NSDictionary;

@interface MCSCEPPayload : MCCertificatePayload  {
    NSString *_URLString;
    NSString *_CAInstanceName;
    NSString *_challenge;
    NSArray *_subject;
    unsigned int _keySize;
    int _usageFlags;
    NSData *_CAFingerprint;
    NSArray *_CACaps;
    NSDictionary *_subjectAltName;
    unsigned int _retries;
    unsigned int _retryDelay;
}

@property(readonly) NSString * URLString;
@property(readonly) NSString * CAInstanceName;
@property(readonly) NSData * CAFingerprint;
@property(readonly) NSArray * CACaps;
@property(readonly) NSString * challenge;
@property(readonly) NSArray * subject;
@property(readonly) unsigned int keySize;
@property(readonly) int usageFlags;
@property(readonly) NSDictionary * subjectAltName;
@property(readonly) unsigned int retries;
@property(readonly) unsigned int retryDelay;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (unsigned int)retryDelay;
- (unsigned int)retries;
- (id)subjectAltName;
- (id)CACaps;
- (id)CAFingerprint;
- (int)usageFlags;
- (unsigned int)keySize;
- (id)CAInstanceName;
- (BOOL)isRoot;
- (BOOL)isIdentity;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (struct __SecCertificate { }*)copyCertificate;
- (id)challenge;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)subject;
- (id)URLString;
- (void).cxx_destruct;
- (id)description;

@end
