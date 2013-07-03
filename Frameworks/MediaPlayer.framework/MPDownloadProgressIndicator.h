/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, CADisplayLink;

@interface MPDownloadProgressIndicator : UIButton  {
    float _animatedStartValue;
    float _animatedValue;
    BOOL _animating;
    BOOL _canCancel;
    double _animationEndTime;
    double _animationStartTime;
    CADisplayLink *_displayLink;
    UIImageView *_centerImageView;
    BOOL _mpExternalHidden;
    BOOL _mpInternalHidden;
    int _style;
    float _value;
}

@property(readonly) int style;
@property float value;
@property BOOL canCancel;

+ (id)_nonstopImageForStyle:(int)arg1;
+ (id)_fillImageForStyle:(int)arg1;
+ (id)_baseImageForStyle:(int)arg1;
+ (void)_drawModernGradientInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (BOOL)_isStyleModernShimmer:(int)arg1;
+ (id)_stopImageForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })_sizeForStyle:(int)arg1;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)updateFromObserver:(id)arg1;
- (void)setCanCancel:(BOOL)arg1;
- (BOOL)canCancel;
- (void)_setInternalHidden:(BOOL)arg1;
- (void)updateFromObserver:(id)arg1 animated:(BOOL)arg2;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_centerImageViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forStyle:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_fillFrameForSize:(struct CGSize { float x1; float x2; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_baseFrameForSize:(struct CGSize { float x1; float x2; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (int)style;
- (void).cxx_destruct;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setValue:(float)arg1;
- (float)value;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end
