/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UISnapshotView, UITabBar, UITabBarItem, UITabBarItemProxy, NSMutableArray;

@interface UITabBarCustomizeView : UIView  {
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
    int _gridCount;
    float _gridOffset;
}

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;
+ (void)_accessibilityPerformValidations:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_finishTouchesEndedChangeAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (BOOL)accessibilityViewIsModal;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityObscuredScreenAllowedViews;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
