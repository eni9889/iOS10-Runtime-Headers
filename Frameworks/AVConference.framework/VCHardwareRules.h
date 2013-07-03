/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface VCHardwareRules : NSObject  {
    NSMutableDictionary *supportedEncodingRules;
    NSMutableDictionary *supportedDecodingRules;
    int encodeScore;
    int decodeScore;
    BOOL encodeHiDef;
    BOOL decodeHiDef;
    NSString *machineName;
    NSMutableArray *supportedPayloads;
}

@property(readonly) int encodeScore;
@property(readonly) int decodeScore;
@property(readonly) BOOL encodeHiDef;
@property(readonly) BOOL decodeHiDef;
@property(readonly) NSString * machineName;
@property(readonly) NSMutableArray * supportedPayloads;

+ (id)VCHardwareRulesSingleton;

- (id)machineName;
- (BOOL)decodeHiDef;
- (BOOL)encodeHiDef;
- (int)decodeScore;
- (int)encodeScore;
- (void)resetEncodingRulesForCamera:(unsigned int)arg1;
- (float)getBestDecodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2;
- (float)getBestEncodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2;
- (void)getBestDecodingFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3;
- (void)getBestPreviewFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3;
- (BOOL)useSoftFramerateSwitching;
- (BOOL)isHiDefCapapable;
- (BOOL)isMachineNewerThanSandybridge:(int)arg1;
- (BOOL)isMacBookAirModel;
- (int)getCPUFamilyType;
- (BOOL)isGVAEncoderAvailable;
- (int)getScoreFromHardwareInfo:(id)arg1 cpuFamily:(int)arg2 frequency:(int)arg3 numProcs:(int)arg4;
- (id)getCPUTypeStringForMachineType:(int)arg1;
- (void)calculateDecodingScore;
- (void)calculateEncodingScore;
- (float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3;
- (void)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4;
- (id)supportedDecodingSizesFromDictionaryForPayload:(int)arg1;
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;
- (id)supportedEncodingSizesFromDictionaryForPayload:(int)arg1;
- (void)getBestEncodingFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3;
- (float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3 forPayload:(int)arg4;
- (BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5 forPayload:(int)arg6;
- (id)supportedDecodingRulesFromDictionaryForPayload:(int)arg1;
- (id)supportedEncodingRulesFromDictionaryForPayload:(int)arg1;
- (BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5;
- (BOOL)canDoHiDefDecoding;
- (int)getHardwareScore;
- (BOOL)canDoHiDefEncoding;
- (void)setPreferredVideoRules;
- (void)createSupportedRuleSets;
- (void)createSupportedPayloads;
- (id)supportedDecodingRulesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedEncodingRulesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedDecodingSizesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedEncodingSizesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedPayloads;
- (id)init;
- (void)dealloc;

@end
