/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSCountedSet, NSObject<OS_dispatch_queue>;

@interface MFPowerController : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    int _powerToken;
    int _pluggedIn;
    struct __CFDictionary { } *_assertionsByIdentifier;
    NSCountedSet *_identifiers;
}

+ (id)sharedInstance;

- (void)_setPluggedIn:(unsigned int)arg1;
- (void)_destroyAssertionWithIdentifier_nts:(id)arg1;
- (void)_createAssertionWithIdentifier_nts:(id)arg1;
- (void)_powerAssertionDidExpire:(id)arg1;
- (void)log:(id)arg1 message:(id)arg2;
- (BOOL)isPluggedIn;
- (id)copyDiagnosticInformation;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;

@end
