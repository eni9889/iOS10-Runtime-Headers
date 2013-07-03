/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSString;

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding> {
}

@property(copy) NSString * language;

+ (id)voiceWithLanguage:(id)arg1;
+ (id)currentLanguageCode;
+ (id)speechVoices;
+ (void)load;
+ (BOOL)supportsSecureCoding;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)description;
- (id)initWithLanguage:(id)arg1;

@end
