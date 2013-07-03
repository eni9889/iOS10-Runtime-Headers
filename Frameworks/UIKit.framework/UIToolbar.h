/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, _UIBackdropView, UIColor, NSArray, UIView, <UIToolbarDelegate>;

@interface UIToolbar : UIView <_UIShadowedView, _UIBarPositioningInternal, UIBarPositioning> {
    id _delegate;
    NSArray *_items;
    UIColor *_barTintColor;
    struct { 
        unsigned int barStyle : 2; 
        unsigned int mode : 2; 
        unsigned int wasEnabled : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int barTranslucence : 3; 
        unsigned int isLocked : 1; 
        unsigned int backgroundLayoutNeedsUpdate : 1; 
    } _toolbarFlags;
    struct __CFDictionary { } *_groups;
    NSArray *_buttonItems;
    int _currentButtonGroup;
    int _pressedTag;
    float _extraEdgeInsets;
    id _appearanceStorage;
    _UIBackdropView *_adaptiveBackdrop;
    UIImageView *_backgroundView;
    UIView *_shadowView;
    BOOL _forcesOpaqueBackground;
    BOOL _isAdaptiveToolbarDisabled;
    BOOL _wantsLetterpressContent;
    int _barPosition;
}

@property(getter=_isLocked,setter=_setLocked:) BOOL _locked;
@property int barStyle;
@property(copy) NSArray * items;
@property(getter=isTranslucent) BOOL translucent;
@property(retain) UIColor * tintColor;
@property(retain) UIColor * barTintColor;
@property <UIToolbarDelegate> * delegate;
@property(setter=_setShadowView:,retain) UIView * _shadowView;
@property(setter=_setForcesOpaqueBackground:) BOOL _forcesOpaqueBackground;
@property(getter=_isAdaptiveToolbarDisabled,setter=_setAdaptiveToolbarDisabled:) BOOL _adaptiveToolbarDisabled;
@property(setter=_setWantsLetterpressContent:) BOOL _wantsLetterpressContent;
@property(readonly) int barPosition;

+ (float)defaultSelectionModeHeight;
+ (float)_buttonGap;
+ (id)defaultButtonFont;
+ (Class)defaultTextButtonClass;
+ (Class)defaultButtonClass;
+ (float)defaultHeightForBarSize:(int)arg1;
+ (float)defaultHeight;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (id)items;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (id)_buttonName:(id)arg1 withType:(int)arg2;
- (void)_updateScriptingInfo:(id)arg1 view:(id)arg2;
- (id)_descriptionForTag:(int)arg1;
- (id)_buttonWithDescription:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_adjustButtonPressed:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (id)_customToolbarAppearance;
- (BOOL)_isLocked;
- (void)_cleanupAdaptiveBackdrop;
- (void)_layoutBackgroundViewConsideringStatusBar;
- (BOOL)_supportsAdaptiveBackground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (void)_setForceTopBarAppearance:(BOOL)arg1;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)setOnStateForButton:(BOOL)arg1 forButton:(int)arg2;
- (BOOL)onStateForButton:(int)arg1;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)getVisibleButtonTags:(int*)arg1 count:(unsigned int*)arg2 maxItems:(unsigned int)arg3;
- (int)currentButtonGroup;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)registerButtonGroup:(int)arg1 withButtons:(int*)arg2 withCount:(int)arg3;
- (void)showButtons:(int*)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (void)_buttonBarFinishedAnimating;
- (void)positionButtons:(id)arg1 tags:(int*)arg2 count:(int)arg3 group:(int)arg4;
- (id)createButtonWithDescription:(id)arg1;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)_currentButtons;
- (void)_showButtons:(int*)arg1 withCount:(int)arg2 group:(int)arg3 withDuration:(double)arg4 adjustPositions:(BOOL)arg5 skipTag:(int)arg6;
- (float)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (BOOL)_isAdaptiveToolbarDisabled;
- (id)shadowImageForToolbarPosition:(int)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)animateToolbarItemIndex:(unsigned int)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (int)mode;
- (float)extraEdgeInsets;
- (void)setExtraEdgeInsets:(float)arg1;
- (void)_setAdaptiveToolbarDisabled:(BOOL)arg1;
- (unsigned int)_subviewIndexAboveBackgroundView;
- (BOOL)_isTopBar_legacy;
- (void)_updateToolbarButtonsForInteractionTintColorChange;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 actuallyRepositionButtons:(BOOL)arg3;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_didFinishHidingRetainedOldItems:(id)arg1;
- (void)_setBarTintColor:(id)arg1 force:(BOOL)arg2;
- (void)setBarStyle:(int)arg1 force:(BOOL)arg2;
- (BOOL)_isInNavigationBar;
- (void)_finishButtonAnimation:(int)arg1 forButton:(int)arg2;
- (id)backgroundImageForToolbarPosition:(int)arg1 barMetrics:(int)arg2;
- (void)_setLocked:(BOOL)arg1;
- (void)_setShadowView:(id)arg1;
- (BOOL)_forcesOpaqueBackground;
- (id)barTintColor;
- (void)_setHidesShadow:(BOOL)arg1;
- (BOOL)_hidesShadow;
- (void)_setForcesOpaqueBackground:(BOOL)arg1;
- (void)_setWantsLetterpressContent:(BOOL)arg1;
- (int)barPosition;
- (int)_barPosition;
- (int)barStyle;
- (BOOL)_wantsLetterpressContent;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1;
- (id)_currentCustomBackground;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)_setBarPosition:(int)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)_updateOpacity;
- (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
- (id)_shadowView;
- (void)_updateBackgroundImage;
- (id)_effectiveBarTintColor;
- (void)_updateBackgroundColor;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundView:(id)arg1;
- (BOOL)isMinibar;
- (BOOL)_subclassImplementsDrawRect;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)tintColorDidChange;
- (void)invalidateIntrinsicContentSize;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (id)scriptingInfoWithChildren;
- (BOOL)isTranslucent;
- (void)_setVisualAltitudeBias:(struct CGSize { float x1; float x2; })arg1;
- (void)_setVisualAltitude:(float)arg1;
- (id)_backgroundView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutSubviews;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityOnlyComparesByXAxis;

@end
