/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUCellConfiguration, UIView, UIBezierPath, NSMutableArray;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {
    int _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    unsigned int _drawAsDisabled : 1;
    unsigned int _highlighted : 1;
    unsigned int _highlightsOnlyContentView : 1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned int _useSubviewLayout : 1;
}

@property BOOL usesSubviews;
@property int clipCorners;
@property(retain) SUCellConfiguration * configuration;
@property(getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property BOOL drawAsDisabled;
@property BOOL highlightsOnlyContentView;
@property(getter=isHighlighted) BOOL highlighted;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)_removeSubviewsForConfiguration;
- (id)_clippedImageForImage:(id)arg1;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (void)_reloadSubviewAlphasAnimated:(BOOL)arg1;
- (BOOL)isDeleteConfirmationVisible;
- (void)_reloadSubviewsForConfiguration;
- (void)setUsesSubviews:(BOOL)arg1;
- (BOOL)usesSubviews;
- (void)setHighlightsOnlyContentView:(BOOL)arg1;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (BOOL)drawAsDisabled;
- (id)_clipPath;
- (BOOL)highlightsOnlyContentView;
- (void)setUsesSubviews:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDeleteConfirmationVisisble:(BOOL)arg1;
- (void)setConfiguration:(id)arg1;
- (void)reloadView;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)configuration;
- (void)setClipCorners:(int)arg1;
- (int)clipCorners;
- (void)setHighlighted:(BOOL)arg1;
- (id)_scriptingInfo;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLanguage;
- (id)description;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
