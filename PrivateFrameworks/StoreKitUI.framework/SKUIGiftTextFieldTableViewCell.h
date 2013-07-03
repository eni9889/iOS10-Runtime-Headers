/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIControl, UILabel, NSAttributedString, UIView, <UITextFieldDelegate>, NSString, UITextField;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell  {
    UILabel *_label;
    UITextField *_textField;
    UIView *_topBorderView;
}

@property(copy) NSAttributedString * attributedPlaceholder;
@property(getter=isEnabled) BOOL enabled;
@property int keyboardType;
@property(copy) NSString * label;
@property(readonly) UIControl * textField;
@property <UITextFieldDelegate> * textFieldDelegate;
@property(copy) NSString * value;


- (id)textFieldDelegate;
- (void)setTextFieldDelegate:(id)arg1;
- (int)keyboardType;
- (id)label;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)attributedPlaceholder;
- (void)setAttributedPlaceholder:(id)arg1;
- (id)textField;
- (void)setLabel:(id)arg1;
- (void)setKeyboardType:(int)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setValue:(id)arg1;
- (id)value;

@end
