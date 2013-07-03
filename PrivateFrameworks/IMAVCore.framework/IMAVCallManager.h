/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSDate, NSArray, IMPowerAssertion, NSMutableArray, NSMutableDictionary;

@interface IMAVCallManager : NSObject  {
    IMPowerAssertion *_powerAssertion;
    NSMutableArray *_chatArray;
    NSMutableArray *_acChatProxyArray;
    NSMutableArray *_avChatProxyArray;
    NSMutableDictionary *_guidToACChatProxyMap;
    NSMutableDictionary *_guidToAVChatProxyMap;
    NSDate *_lastCallStateChange;
    int _avToken;
    int _acToken;
    unsigned int _avCallState;
    unsigned int _acCallState;
    unsigned int _telephonyCallState;
    unsigned int _globalCallState;
}

@property(readonly) unsigned int callState;
@property(readonly) BOOL hasActiveCall;
@property(readonly) NSArray * calls;
@property(setter=_setTelephonyCallState:) unsigned int _telephonyCallState;
@property(readonly) NSArray * _FTCalls;

+ (id)sharedInstance;

- (BOOL)_hasActiveTelephonyCall;
- (void)_setTelephonyCallState:(unsigned int)arg1;
- (unsigned int)_callStateForType:(unsigned int)arg1;
- (id)_calls;
- (void)__setTelephonyCallState:(unsigned int)arg1;
- (id)calls;
- (void)_postStateChangeIfNecessary;
- (unsigned int)_telephonyCallState;
- (void)_postStateChangeNamed:(id)arg1 fromState:(unsigned int)arg2 toState:(unsigned int)arg3 postType:(BOOL)arg4 type:(unsigned int)arg5;
- (id)_nonRetainingChatList;
- (id)_FTCalls;
- (void)_setACCallState:(unsigned int)arg1 quietly:(BOOL)arg2;
- (void)_setAVCallState:(unsigned int)arg1 quietly:(BOOL)arg2;
- (void)_setACCallState:(unsigned int)arg1;
- (void)_setAVCallState:(unsigned int)arg1;
- (unsigned int)_callState;
- (void)_sendProxyUpdate;
- (void)_addACChatProxy:(id)arg1;
- (void)_addAVChatProxy:(id)arg1;
- (id)_activeFaceTimeCall;
- (id)_activeAudioCall;
- (BOOL)_hasActiveAudioCall;
- (BOOL)_hasActiveFaceTimeCall;
- (void)_updateOverallChatState;
- (void)_updateAVCallState;
- (void)_updateAVChatProxyWithInfo:(id)arg1;
- (void)_updateACCallState;
- (void)_updateACChatProxyWithInfo:(id)arg1;
- (unsigned int)callState;
- (id)init;
- (void)dealloc;
- (BOOL)hasActiveCall;

@end
