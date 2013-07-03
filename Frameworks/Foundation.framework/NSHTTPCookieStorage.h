/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject  {
    NSHTTPCookieStorageInternal *_internal;
}

+ (id)sharedHTTPCookieStorage;

- (void)_setPrivateBrowsingEnabled:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_saveCookies;
- (struct OpaqueCFHTTPCookieStorage { }*)_cookieStorage;
- (id)sortedCookiesUsingDescriptors:(id)arg1;
- (void)setCookieAcceptPolicy:(unsigned int)arg1;
- (unsigned int)cookieAcceptPolicy;
- (void)deleteCookie:(id)arg1;
- (void)setCookie:(id)arg1;
- (id)cookies;
- (id)cookiesForURL:(id)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (void)_readAcceptCookiesPreference;

@end
