/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASPronunciationContext;

@interface SAUIListenForPronunciation : SABaseClientBoundCommand  {
}

@property(retain) SASPronunciationContext * context;

+ (id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)listenForPronunciation;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)context;
- (void)setContext:(id)arg1;
- (id)groupIdentifier;

@end
