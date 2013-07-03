/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUTelephonyCall : TUCall  {
    struct __CTCall { } *_call;
}

+ (int)callStatusForCTCallStatusType:(int)arg1;

- (struct __CTCall { }*)call;
- (void)disconnect;
- (int)service;
- (id)isoCountryCode;
- (id)initWithCall:(struct __CTCall { }*)arg1;
- (long)causeCode;
- (BOOL)isEmergencyCall;
- (id)audioCategory;
- (double)callDuration;
- (BOOL)isAlerting;
- (void)leaveConference;
- (void)joinConference;
- (id)bundleIDForHostingApplication;
- (BOOL)unhold;
- (BOOL)hold;
- (void)answer;
- (double)startTime;
- (BOOL)isOutgoing;
- (BOOL)isConferenced;
- (int)status;
- (BOOL)isBlocked;
- (BOOL)isVoicemail;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (int)callIdentifier;
- (BOOL)setMuted:(BOOL)arg1;
- (BOOL)isTTY;
- (BOOL)isMuted;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)resume;

@end
