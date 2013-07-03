/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad  {
    UIButton *_emergencyCallButton;
    UIButton *_poundButton;
    UIImage *_deleteIcon;
}

+ (id)pressedImage;
+ (id)keypadImage;

- (float)_yFudge;
- (BOOL)showsEmergencyCallButton;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)_updateCancelAndDeleteButtons;
- (void)setDeleteEnabled:(BOOL)arg1;
- (BOOL)emergencyKeyChar;
- (BOOL)cancelKeyChar;
- (BOOL)deleteKeyChar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
