/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, SSLookupProperties, NSString;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
    BOOL _authenticatesIfNeeded;
    SSAuthenticationContext *_authenticationContext;
    SSLookupProperties *_properties;
    int _resultFilters;
}

@property(copy) NSString * keyProfile;
@property int localizationStyle;
@property(copy) SSAuthenticationContext * authenticationContext;
@property BOOL authenticatesIfNeeded;
@property int resultFilters;
@property(readonly) SSLookupProperties * _lookupProperties;


- (BOOL)authenticatesIfNeeded;
- (void)setResultFilters:(int)arg1;
- (int)resultFilters;
- (void)setAuthenticatesIfNeeded:(BOOL)arg1;
- (id)_lookupProperties;
- (void)startWithLookupBlock:(id)arg1;
- (void)setLocalizationStyle:(int)arg1;
- (int)localizationStyle;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)start;

@end
