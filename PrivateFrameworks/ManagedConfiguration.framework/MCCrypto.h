/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCrypto : NSObject  {
}

+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate {}**)arg2 outError:(id*)arg3;
+ (BOOL)isValidPKCS12Data:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateRefFromPEMData:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateRefFromPKCS1Data:(id)arg1;
+ (id)_decryptionFailedError;


@end
