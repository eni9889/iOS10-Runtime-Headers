/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, NSDictionary;

@interface IMServiceAgent : NSObject  {
    NSDictionary *_currentAVChatInfo;
}

@property(retain) NSArray * myAvailableMessages;
@property(retain) NSArray * myAwayMessages;
@property(readonly) unsigned long long vcCapabilities;
@property(readonly) NSDictionary * currentAVChatInfo;
@property(readonly) unsigned int requestAudioReflectorStart;
@property(readonly) unsigned int requestAudioReflectorStop;

+ (int)serviceAgentCapabilities;
+ (void)setServiceAgentCapabilities:(int)arg1;
+ (id)sharedAgent;
+ (id)imageURLForStatus:(unsigned int)arg1;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (void)forgetStatusImageAppearance;
+ (id)notificationCenter;

- (unsigned int)requestVideoStillForPerson:(id)arg1;
- (unsigned int)requestAudioReflectorStop;
- (unsigned int)requestAudioReflectorStart;
- (id)currentAVChatInfo;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (void)setMyAwayMessages:(id)arg1;
- (void)setMyAvailableMessages:(id)arg1;
- (id)myAwayMessages;
- (id)myAvailableMessages;
- (void)launchIfNecessary;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (unsigned long long)vcCapabilities;
- (id)myPictureData;
- (id)serviceWithName:(id)arg1;
- (id)notificationCenter;

@end
