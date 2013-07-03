/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIButton, <TPSimpleNumberPadDelegate>;

@interface TPSimpleNumberPad : TPNumberPad  {
    UIButton *_deleteButton;
    BOOL _showsDeleteButton;
    <TPSimpleNumberPadDelegate> *_delegate;
}

@property <TPSimpleNumberPadDelegate> * delegate;
@property BOOL showsDeleteButton;

+ (id)_numberPadCharacters;

- (BOOL)showsDeleteButton;
- (void)_updateDeleteButton;
- (void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2;
- (id)initWithButtons:(id)arg1;
- (void)setShowsDeleteButton:(BOOL)arg1;
- (void)buttonUp:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
