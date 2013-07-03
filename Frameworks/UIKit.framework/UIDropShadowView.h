/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, UIView;

@interface UIDropShadowView : UIView  {
    float _cornerRadius;
    UIView *_contentView;
    UIView *_backgroundImage;
    NSDictionary *_preservedLayerValues;
}

@property float cornerRadius;
@property UIView * contentView;


- (id)contentView;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)cornerRadius;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)updateShadowPath;
- (void)didFinishRotation;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 newBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setCornerRadius:(float)arg1;

@end
