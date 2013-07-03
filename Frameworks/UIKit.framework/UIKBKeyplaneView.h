/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBRenderConfig, NSTimer, UIKBKeyView, UIView, UIKBTree, NSString, UIKBCacheToken, NSMutableDictionary, CALayer;

@interface UIKBKeyplaneView : UIView <UIKBCacheableView> {
    UIKBTree *_keyplane;
    UIKBTree *_defaultKeyplane;
    UIKBCacheToken *_cacheToken;
    UIView *_splitRight;
    UIKBKeyView *_candidateGapView;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    NSTimer *_activatedTimer;
    BOOL _performingDeactivation;
    BOOL _shouldDrawRect;
    UIKBRenderConfig *_renderConfig;
    CALayer *_keyBorders;
    CALayer *_keyBackgrounds;
    CALayer *_keyCaps;
}

@property(retain) UIKBTree * keyplane;
@property(retain) UIKBTree * defaultKeyplane;
@property(retain) UIKBCacheToken * cacheToken;
@property(retain) UIKBRenderConfig * renderConfig;
@property(readonly) NSString * cacheKey;
@property(readonly) BOOL cacheDeferable;
@property(readonly) float cachedWidth;
@property(readonly) BOOL keepNonPersistent;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)displayLayer:(id)arg1;
- (void)dealloc;
- (void)activateKeys;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (id)cacheIdentifierForKey:(id)arg1;
- (Class)classForKey:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (void)deactivateKey:(id)arg1 isStateDowngrade:(BOOL)arg2;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (void)scheduleDelayedDeactivation;
- (void)performDelayedDeactivation:(id)arg1;
- (void)cancelDelayedDeactivation;
- (BOOL)_shouldDrawLowResBackground;
- (int)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2;
- (id)defaultKeyplane;
- (id)cacheToken;
- (id)_setupLayerIfNoLayer:(id)arg1 withContents:(id)arg2;
- (void)dimKeyCaps:(float)arg1 duration:(float)arg2;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (void)deactivateKey:(id)arg1;
- (id)viewForKey:(id)arg1;
- (void)deactivateKeys;
- (void)updateDecorationViewsIfNeeded;
- (void)setCacheToken:(id)arg1;
- (void)setDefaultKeyplane:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2;
- (BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (int)stateForKey:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)purgeKeyViews;
- (void)purgeSubviews;
- (BOOL)keepNonPersistent;
- (BOOL)cacheDeferable;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (float)cachedWidth;
- (id)cacheKey;
- (id)keyplane;
- (void)setKeyplane:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
