/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIView, UIColor, UILabel, NSString;

@interface SKUICountdownFlapView : UIImageView  {
    UIView *_backgroundViewBot;
    UIView *_backgroundViewTop;
    UIImageView *_backgroundViewTransitionBot;
    UIImageView *_backgroundViewTransitionTop;
    float _factor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    UILabel *_labelBot;
    UILabel *_labelTop;
    UILabel *_labelTransitionBot;
    UILabel *_labelTransitionTop;
    int _position;
    NSString *_string;
    UIColor *_textColor;
}

@property(readonly) int position;
@property(readonly) UIColor * flapTopColor;
@property(readonly) UIColor * flapBottomColor;
@property(retain) NSString * string;
@property(retain) UIColor * textColor;


- (id)_newLabel;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForAngle:(float)arg1 isTop:(BOOL)arg2;
- (id)_newBackgroundImageForTop:(int)arg1;
- (id)initWithPosition:(int)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3;
- (id)flapBottomColor;
- (id)flapTopColor;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setString:(id)arg1;
- (id)string;
- (void).cxx_destruct;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (int)position;

@end
