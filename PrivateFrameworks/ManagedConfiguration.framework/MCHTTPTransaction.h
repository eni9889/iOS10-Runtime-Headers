/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSError, NSMutableData, NSObject<OS_dispatch_semaphore>, NSURLConnection, NSString, NSURL, NSData;

@interface MCHTTPTransaction : NSObject  {
    NSURL *_requestURL;
    NSString *_method;
    double _timeout;
    NSString *_userAgent;
    NSString *_contentType;
    NSData *_data;
    struct __SecIdentity { } *_identity;
    NSString *_CMSSignatureHeaderName;
    NSURL *_currentURL;
    NSURL *_permanentlyRedirectedURL;
    BOOL _rememberData;
    NSMutableData *_responseData;
    int _statusCode;
    NSError *_error;
    NSURLConnection *_connection;
    NSObject<OS_dispatch_semaphore> *_doneSema;
}

@property(retain) NSURL * url;
@property(retain) NSString * method;
@property double timeout;
@property(retain) NSString * userAgent;
@property(retain) NSString * contentType;
@property(retain) NSData * data;
@property(retain) NSString * CMSSignatureHeaderName;
@property(readonly) NSData * responseData;
@property(readonly) NSError * error;
@property(readonly) NSURL * permanentlyRedirectedURL;
@property(readonly) int statusCode;

+ (id)performRequestURL:(id)arg1 method:(id)arg2 timeout:(double)arg3 userAgent:(id)arg4 contentType:(id)arg5 data:(id)arg6 identity:(struct __SecIdentity { }*)arg7 outPermanentlyRedirectedURL:(id*)arg8 outError:(id*)arg9;
+ (id)transactionWithURL:(id)arg1 method:(id)arg2;

- (void)setCMSSignatureHeaderName:(id)arg1;
- (id)CMSSignatureHeaderName;
- (id)userAgent;
- (void)setMethod:(id)arg1;
- (void)performCompletionBlock:(id)arg1;
- (struct __SecIdentity { }*)copyIdentity;
- (BOOL)_shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (void)_beginTransaction;
- (id)permanentlyRedirectedURL;
- (id)responseData;
- (void)performSynchronously;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setData:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (double)timeout;
- (id)data;
- (void)dealloc;
- (void).cxx_destruct;
- (id)error;
- (void)setUrl:(id)arg1;
- (void)setTimeout:(double)arg1;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)url;
- (id)method;
- (int)statusCode;

@end
