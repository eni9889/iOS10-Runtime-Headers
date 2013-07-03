/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;

@interface AASigningSession : NSObject  {
    NSString *_certURL;
    NSString *_sessionURL;
    long _error;
}

@property(readonly) long error;


- (id)signatureForData:(id)arg1;
- (void)establishSession;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (long)error;

@end
