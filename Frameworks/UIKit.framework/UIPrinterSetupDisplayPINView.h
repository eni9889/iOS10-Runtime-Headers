/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, UILabel;

@interface UIPrinterSetupDisplayPINView : UIView  {
    UILabel *_titleLabel;
    UIButton *_nextButton;
}

@property(retain) UILabel * titleLabel;
@property(retain) UIButton * nextButton;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)nextButton;
- (void)setMessage:(id)arg1 showButton:(BOOL)arg2;
- (void)setNextButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)layoutSubviews;

@end
