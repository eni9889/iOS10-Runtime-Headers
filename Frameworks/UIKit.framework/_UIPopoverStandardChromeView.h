/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView  {
    UIView *_arrowView;
    UIView *_leftCapView;
    UIView *_rightCapView;
    float _arrowOffset;
    unsigned int _arrowDirection;
    int _backgroundStyle;
    BOOL _arrowVisible;
    BOOL useShortMode;
    BOOL _debugMode;
}

@property int backgroundStyle;
@property(getter=isArrowVisible) BOOL arrowVisible;
@property BOOL useShortMode;
@property(getter=isDebugModeEnabled) BOOL debugModeEnabled;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDebugModeEnabled:(BOOL)arg1;
- (BOOL)isDebugModeEnabled;
- (void)setUseShortMode:(BOOL)arg1;
- (void)setArrowVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setArrowVisible:(BOOL)arg1;
- (BOOL)isArrowVisible;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (BOOL)wouldPinForOffset:(float)arg1;
- (BOOL)hasComponentViews;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsUpOrDown;
- (BOOL)useShortMode;
- (BOOL)isRightArrowPinnedToBottom;
- (BOOL)isRightArrowPinnedToTop;
- (float)maxNonPinnedOffset;
- (float)minNonPinnedOffset;
- (void)_loadNecessaryViews;
- (void)setArrowOffset:(float)arg1;
- (float)arrowOffset;
- (void)setArrowDirection:(unsigned int)arg1;
- (unsigned int)arrowDirection;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (BOOL)isPinned;
- (void)willMoveToWindow:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end
