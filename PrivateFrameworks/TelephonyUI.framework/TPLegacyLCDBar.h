/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImageView, UIImage;

@interface TPLegacyLCDBar : UIImageView  {
    UIImage *_barBackground;
    UIImageView *_shadowView;
}

@property(retain) UIImage * barBackground;
@property(readonly) UIImageView * shadowView;

+ (float)defaultHeightForOrientation:(int)arg1;
+ (float)defaultHeight;
+ (id)shadowImage;
+ (id)backgroundImage;

- (void)setBarBackground:(id)arg1;
- (id)barBackground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStretchRect;
- (void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithDefaultSize;
- (id)shadowView;

@end
