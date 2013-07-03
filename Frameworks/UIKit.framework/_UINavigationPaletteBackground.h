/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UINavigationBar, UIColor, _UIBackdropView, _UINavigationControllerPalette, UIView;

@interface _UINavigationPaletteBackground : UIView  {
    UIColor *_barTintColor;
    UIImageView *_shadowView;
    _UINavigationControllerPalette *_palette;
    UINavigationBar *_bar;
    _UIBackdropView *_adaptiveBackdrop;
    struct { 
        unsigned int barTranslucence : 3; 
        unsigned int barStyle : 3; 
        unsigned int barWantsAdaptiveBackdrop : 1; 
        unsigned int barForcesOpaqueBackground : 1; 
    } _navbarFlags;
}

@property int barStyle;
@property(retain) UIColor * barTintColor;
@property(getter=_shadowView,setter=_setShadowView:,retain) UIView * shadowView;
@property(getter=isTranslucent) BOOL translucent;
@property BOOL barWantsAdaptiveBackdrop;
@property BOOL barForcesOpaqueBackground;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)forcesOpaqueConsultingInternalForcingAndBarTranslucence;
- (void)_syncWithBarStyles;
- (void)updateBackgroundView;
- (void)_setShadowView:(id)arg1;
- (BOOL)barForcesOpaqueBackground;
- (BOOL)barWantsAdaptiveBackdrop;
- (id)barTintColor;
- (int)barStyle;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)arg1;
- (void)setBarStyle:(int)arg1;
- (id)_shadowView;
- (void)setBarForcesOpaqueBackground:(BOOL)arg1;
- (id)initWithNavigationBar:(id)arg1 forPalette:(id)arg2;
- (void)didMoveToSuperview;
- (BOOL)isTranslucent;

@end
