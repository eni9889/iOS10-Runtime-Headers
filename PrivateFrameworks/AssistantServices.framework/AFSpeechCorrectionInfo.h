/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding> {
    int _alternativeSelectionCount;
    int _characterModificationCount;
}

@property int alternativeSelectionCount;
@property int characterModificationCount;

+ (BOOL)supportsSecureCoding;

- (int)characterModificationCount;
- (int)alternativeSelectionCount;
- (void)setCharacterModificationCount:(int)arg1;
- (void)setAlternativeSelectionCount:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
