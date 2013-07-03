/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSNumber;

@interface SAPhonePlayVoiceMail : SADomainCommand  {
}

@property(copy) NSString * snippetViewId;
@property(copy) NSString * speakableText;
@property(copy) NSURL * voiceMailId;
@property(copy) NSNumber * voiceMailIndex;

+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playVoiceMail;

- (void)setVoiceMailIndex:(id)arg1;
- (id)voiceMailIndex;
- (void)setVoiceMailId:(id)arg1;
- (id)voiceMailId;
- (void)setSnippetViewId:(id)arg1;
- (id)snippetViewId;
- (void)setSpeakableText:(id)arg1;
- (id)speakableText;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
