/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad  {
    UIView *_glowView;
}

+ (id)pressedImage;
+ (id)keypadImage;

- (float)_yFudge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForKey:(unsigned int)arg1;
- (BOOL)cancelKeyChar;
- (BOOL)deleteKeyChar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setHighlighted:(BOOL)arg1;

@end
