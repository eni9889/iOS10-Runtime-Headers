/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSDictionary, HSControlPrompt;

@interface HSControlPromptUpdateResponse : HSResponse  {
    unsigned int _nextPromptID;
    HSControlPrompt *_prompt;
    NSDictionary *_promptDictionary;
}

@property unsigned int nextPromptID;
@property(retain) HSControlPrompt * prompt;
@property(copy) NSDictionary * promptDictionary;


- (void)setPromptDictionary:(id)arg1;
- (void)setNextPromptID:(unsigned int)arg1;
- (id)promptDictionary;
- (unsigned int)nextPromptID;
- (void)dealloc;
- (void)setPrompt:(id)arg1;
- (id)prompt;

@end
