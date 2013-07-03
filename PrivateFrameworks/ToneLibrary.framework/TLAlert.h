/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface TLAlert : NSObject  {
    BOOL _shouldOverrideMasterSwitches;
    int _type;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSObject<OS_dispatch_queue> *_targetQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property int type;
@property(copy) NSString * toneIdentifier;
@property(copy) NSString * vibrationIdentifier;
@property(setter=_setCompletionHandler:,copy) id _completionHandler;
@property(setter=_setTargetQueue:,retain) NSObject<OS_dispatch_queue> * _targetQueue;
@property(setter=_setShouldOverrideMasterSwitches:) BOOL _shouldOverrideMasterSwitches;

+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1;
+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(BOOL)arg4;

- (id)_targetQueue;
- (BOOL)_shouldOverrideMasterSwitches;
- (id)vibrationIdentifier;
- (id)toneIdentifier;
- (void)_setVibrationIdentifier:(id)arg1;
- (void)_setToneIdentifier:(id)arg1;
- (void)_setShouldOverrideMasterSwitches:(BOOL)arg1;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (BOOL)playWithCompletionHandler:(id)arg1 targetQueue:(id)arg2;
- (id)initWithType:(int)arg1;
- (void)_setTargetQueue:(id)arg1;
- (void)dealloc;
- (void)_setType:(int)arg1;
- (id)_completionHandler;
- (void)_setCompletionHandler:(id)arg1;
- (int)type;
- (void)stop;

@end
