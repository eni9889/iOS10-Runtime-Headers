/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UILabel;

@interface SBPasscodeTextField : UITextField  {
    float _letterSpacing;
    BOOL _usesLargeClearButton;
    UILabel *_hiddenLabel;
}

@property float letterSpacing;
@property BOOL usesLargeClearButton;


- (void)setUsesLargeClearButton:(BOOL)arg1;
- (BOOL)usesLargeClearButton;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setLetterSpacing:(float)arg1;
- (float)letterSpacing;
- (void)dealloc;
- (void)_endedEditing;
- (id)createTextLabelWithTextColor:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)attachFieldEditor:(id)arg1;
- (id)_style;
- (void)_handleKeyUIEvent:(id)arg1;

@end
