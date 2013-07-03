/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@class NSError, NSDictionary;

@interface CRXPCReplyAnalyzer : NSObject  {
    NSDictionary *_dictionaryValue;
    NSError *_error;
}

@property(retain) NSDictionary * dictionaryValue;
@property(retain) NSError * error;

+ (id)analyzer;

- (void)setDictionaryValue:(id)arg1;
- (id)errorFromServiceReply:(id)arg1;
- (void)analyzeXPCDictionary:(id)arg1 method:(id)arg2;
- (void)analyzeXPCError;
- (id)dictionaryValue;
- (void)analyzeMethod:(id)arg1 reply:(id)arg2;
- (void)dealloc;
- (void)setError:(id)arg1;
- (id)error;

@end
