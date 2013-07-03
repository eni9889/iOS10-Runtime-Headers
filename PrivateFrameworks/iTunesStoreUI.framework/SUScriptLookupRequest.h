/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject  {
    SSLookupRequest *_request;
}

@property(retain) id authenticatesIfNeeded;
@property(copy) NSString * keyProfile;
@property int localizationStyle;
@property(readonly) int localizationStyleDevice;
@property(readonly) int localizationStyleServer;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (int)localizationStyleServer;
- (int)localizationStyleDevice;
- (void)startWithLookupFunction:(id)arg1;
- (id)authenticatesIfNeeded;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setAuthenticatesIfNeeded:(id)arg1;
- (void)setLocalizationStyle:(int)arg1;
- (int)localizationStyle;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)attributeKeys;
- (id)init;
- (void)dealloc;

@end
