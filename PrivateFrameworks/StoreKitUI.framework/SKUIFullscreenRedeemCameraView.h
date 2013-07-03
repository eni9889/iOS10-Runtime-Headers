/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, SKUIRedeemTextField, UIImage, NSString, <SKUIRedeemCameraViewDelegate>;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {
    <SKUIRedeemCameraViewDelegate> *_delegate;
    UIView *_overlay;
    UIView *_redeemerView;
    SKUIRedeemTextField *_textField;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardRect;
    BOOL _enabled;
}

@property <SKUIRedeemCameraViewDelegate> * delegate;
@property BOOL enabled;
@property(retain) UIImage * image;
@property(copy) NSString * text;


- (void)_resumeRedeemer;
- (void)_hideKeyboard;
- (void)_pauseRedeemer;
- (void)_tapGestureAction:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (id)text;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)showKeyboard;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)start;

@end
