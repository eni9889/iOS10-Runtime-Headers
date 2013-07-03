/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImageView, UIImage, NSString, GKLabel;

@interface GKImageBubbleControl : GKBubbleControl  {
    UIImage *_image;
    NSString *_placeholderText;
    UIImageView *_imageView;
    GKLabel *_placeholderLabel;
}

@property(retain) UIImage * image;
@property NSString * placeholderText;
@property(retain) UIImageView * imageView;
@property(retain) GKLabel * placeholderLabel;


- (void)setPlaceholderText:(id)arg1;
- (id)placeholderText;
- (void)_updatePlaceholderLabel;
- (void)invalidateMask;
- (void)setPlaceholderLabel:(id)arg1;
- (id)placeholderLabel;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setImageView:(id)arg1;
- (id)imageView;

@end
