/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIImage, UIButton, SKUIShowcaseButton;

@interface SKUIShowcaseItemView : UIView  {
    SKUIShowcaseButton *_button;
    UIImage *_image;
    UIImageView *_reflectionImageView;
}

@property(readonly) UIButton * button;
@property(retain) UIImage * image;
@property BOOL showsReflection;


- (void)setShowsReflection:(BOOL)arg1;
- (BOOL)showsReflection;
- (void)setAccessibilityLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)button;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
