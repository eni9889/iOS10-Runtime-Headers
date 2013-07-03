/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, ISURLRequestPerformance;

@interface SUScriptRequestPerformance : SUScriptObject  {
    ISURLRequestPerformance *_performance;
}

@property(readonly) double finishInterval;
@property(readonly) NSString * JSONHeaders;
@property(readonly) double receivedResponseInterval;
@property(readonly) double renderBeginInterval;
@property(readonly) double renderEndInterval;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)JSONHeaders;
- (double)renderBeginInterval;
- (double)renderEndInterval;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)initWithRequestPerformance:(id)arg1;
- (double)receivedResponseInterval;
- (double)finishInterval;
- (id)attributeKeys;
- (void)dealloc;

@end
