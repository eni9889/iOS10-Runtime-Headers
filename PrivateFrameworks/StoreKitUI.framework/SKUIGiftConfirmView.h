/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIButton, UILabel, SKUIGiftConfiguration, UIView, SKUIGiftConfirmLabeledValue;

@interface SKUIGiftConfirmView : UIView  {
    SKUIGiftConfirmLabeledValue *_amountView;
    UILabel *_chargeDisclaimerLabel;
    UILabel *_confirmYourOrderLabel;
    SKUIGiftConfirmLabeledValue *_fromView;
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGiftConfirmLabeledValue *_itemView;
    SKUIGiftConfirmLabeledValue *_messageView;
    SKUIGiftConfirmLabeledValue *_recipientsView;
    UIView *_rule1;
    UIView *_rule2;
    UIView *_rule3;
    UIView *_rule4;
    UIView *_rule5;
    UIView *_rule6;
    SKUIGiftConfirmLabeledValue *_senderView;
    SKUIGiftConfirmLabeledValue *_sendOnView;
    UIButton *_termsButton;
    SKUIGiftConfirmLabeledValue *_themeNameView;
    UILabel *_totalLabel;
}

@property(readonly) UIButton * termsButton;


- (id)_newBoldLabelWithSize:(float)arg1 white:(float)arg2;
- (id)_termsButton;
- (id)_newLightLabelWithSize:(float)arg1 white:(float)arg2 alpha:(float)arg3;
- (id)termsButton;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
