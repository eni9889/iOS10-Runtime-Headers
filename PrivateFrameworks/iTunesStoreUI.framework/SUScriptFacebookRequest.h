/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptAppleAccount, NSURL, SLRequest;

@interface SUScriptFacebookRequest : SUScriptObject  {
    SLRequest *_request;
    int _requestMethod;
    SUScriptAppleAccount *_scriptAccount;
    NSURL *_url;
}

@property(retain) SUScriptAppleAccount * account;
@property(readonly) int requestMethod;
@property(readonly) NSURL * URL;
@property(readonly) int requestMethodDelete;
@property(readonly) int requestMethodGet;
@property(readonly) int requestMethodPost;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)initWithURL:(id)arg1 requestMethod:(id)arg2;
- (void)performRequestWithFunction:(id)arg1;
- (void)addParameterWithKey:(id)arg1 value:(id)arg2;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)_performRequest:(id)arg1 withScriptFunction:(id)arg2;
- (BOOL)_isRequestAllowed:(id*)arg1;
- (int)requestMethodDelete;
- (int)requestMethodPost;
- (int)requestMethodGet;
- (id)_className;
- (id)scriptAttributeKeys;
- (int)requestMethod;
- (void)setParameters:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)attributeKeys;
- (void)dealloc;
- (id)URL;

@end
