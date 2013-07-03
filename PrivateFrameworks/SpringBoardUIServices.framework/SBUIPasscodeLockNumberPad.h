/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UIView, UILabel, UIControl<SBUIPasscodeNumberPadButton>, UIColor, <SBUIPasscodeLockNumberPadDelegate>, SBNumberPadWithDelegate;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate> {
    SBNumberPadWithDelegate *_numberPad;
    <SBUIPasscodeLockNumberPadDelegate> *_delegate;
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_bottomPaddingView;
    UILabel *_emergencyCallButton;
    UILabel *_backspaceButton;
    UILabel *_cancelButton;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    BOOL _showsBackspaceButton;
    BOOL _showsEmergencyCallButton;
    BOOL _showsCancelButton;
    UIColor *_customBackgroundColor;
}

@property <SBUIPasscodeLockNumberPadDelegate> * delegate;
@property BOOL showsBackspaceButton;
@property BOOL showsEmergencyCallButton;
@property BOOL showsCancelButton;
@property(retain) UIControl<SBUIPasscodeNumberPadButton> * downButton;

+ (id)_buttonForCharacter:(unsigned int)arg1;

- (id)downButton;
- (BOOL)showsBackspaceButton;
- (float)_distanceToTopOfFirstButton;
- (void)setShowsBackspaceButton:(BOOL)arg1;
- (void)setDownButton:(id)arg1;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_configureAdditionalButtons;
- (void)_emergencyCallButtonHit;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (id)_fontForAncillaryButton;
- (void)setCustomBackgroundColor:(id)arg1;
- (BOOL)showsEmergencyCallButton;
- (void)_setLuminosityBoost:(float)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setBackgroundAlpha:(float)arg1;
- (BOOL)showsCancelButton;
- (id)initWithDefaultSize;
- (void)setShowsCancelButton:(BOOL)arg1;

@end
