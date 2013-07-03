/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSString;

@interface MCVPNPayloadBase : MCPayload  {
    BOOL _userNameRequired;
    BOOL _passwordRequired;
    BOOL _proxyUserNameRequired;
    BOOL _proxyPasswordRequired;
    BOOL _sharedSecretRequired;
    BOOL _pinRequired;
    NSMutableDictionary *_atom;
    NSString *_certificateUUID;
    NSString *_userNameKey;
    NSString *_passwordKey;
    NSString *_proxyUserNameKey;
    NSString *_proxyPasswordKey;
    NSString *_sharedSecretKey;
    NSString *_pinKey;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

@property(retain) NSMutableDictionary * atom;
@property(retain) NSString * certificateUUID;
@property BOOL userNameRequired;
@property BOOL passwordRequired;
@property BOOL proxyUserNameRequired;
@property BOOL proxyPasswordRequired;
@property BOOL sharedSecretRequired;
@property BOOL pinRequired;
@property(retain) NSString * userNameKey;
@property(retain) NSString * passwordKey;
@property(retain) NSString * proxyUserNameKey;
@property(retain) NSString * proxyPasswordKey;
@property(retain) NSString * sharedSecretKey;
@property(retain) NSString * pinKey;
@property(copy) NSString * userName;
@property(copy) NSString * password;
@property(copy) NSString * proxyUserName;
@property(copy) NSString * proxyPassword;
@property(copy) NSString * sharedSecret;
@property(copy) NSString * pin;


- (void)setPin:(id)arg1;
- (id)pin;
- (void)setSharedSecret:(id)arg1;
- (id)sharedSecret;
- (void)setProxyUserName:(id)arg1;
- (id)proxyUserName;
- (void)setUserName:(id)arg1;
- (void)setPinKey:(id)arg1;
- (id)pinKey;
- (void)setSharedSecretKey:(id)arg1;
- (id)sharedSecretKey;
- (void)setProxyPasswordKey:(id)arg1;
- (id)proxyPasswordKey;
- (void)setProxyUserNameKey:(id)arg1;
- (id)proxyUserNameKey;
- (void)setPasswordKey:(id)arg1;
- (id)passwordKey;
- (void)setUserNameKey:(id)arg1;
- (id)userNameKey;
- (void)setPinRequired:(BOOL)arg1;
- (BOOL)pinRequired;
- (void)setSharedSecretRequired:(BOOL)arg1;
- (BOOL)sharedSecretRequired;
- (void)setProxyPasswordRequired:(BOOL)arg1;
- (BOOL)proxyPasswordRequired;
- (void)setProxyUserNameRequired:(BOOL)arg1;
- (BOOL)proxyUserNameRequired;
- (void)setUserNameRequired:(BOOL)arg1;
- (BOOL)userNameRequired;
- (void)setAtom:(id)arg1;
- (id)atom;
- (void)_validateVPNPayload:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (id)proxyPassword;
- (void)setCertificateUUID:(id)arg1;
- (id)certificateUUID;
- (void)setPasswordRequired:(BOOL)arg1;
- (BOOL)passwordRequired;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setPassword:(id)arg1;
- (id)password;
- (void).cxx_destruct;
- (id)userName;

@end
