/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface SFUCryptoUtils : NSObject  {
}

+ (id)sha1HashFromStorage:(id)arg1;
+ (id)sha256HashFromStorage:(id)arg1;
+ (id)decodePassphraseHint:(id)arg1;
+ (id)encodePassphraseHint:(id)arg1;
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id*)arg4;
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;
+ (BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;
+ (id)generatePassphraseVerifierForKey:(id)arg1;
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;
+ (id)generateRandomSalt;
+ (id)sha256HashFromData:(id)arg1;
+ (BOOL)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long)arg2;
+ (unsigned int)ivLengthForKey:(id)arg1;
+ (id)sha256HashFromString:(id)arg1;


@end
