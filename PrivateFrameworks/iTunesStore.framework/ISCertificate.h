/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISCertificate : NSObject  {
    struct __SecTrust { } *_trust;
}


- (void)setCertificateData:(id)arg1;
- (BOOL)checkData:(id)arg1 againstAppleSignature:(id)arg2;
- (BOOL)checkData:(id)arg1 againstSignature:(id)arg2;
- (BOOL)isValid;
- (void)dealloc;
- (void)_invalidate;

@end
