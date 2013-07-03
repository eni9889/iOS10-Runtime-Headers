/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest  {
}

@property(copy) NSString * interactionId;
@property(copy) NSString * sessionId;

+ (id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startCorrectedSpeechRequest;

- (id)sessionId;
- (void)setInteractionId:(id)arg1;
- (id)interactionId;
- (void)setSessionId:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
