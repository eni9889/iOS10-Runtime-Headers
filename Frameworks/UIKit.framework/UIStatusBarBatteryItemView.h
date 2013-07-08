/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView  {
    int _capacity;
    int _state;
    UIView *_accessoryView;
}

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)dealloc;
- (float)_batteryYOffsetWithBackground:(id)arg1;
- (id)_accessoryImage;
- (BOOL)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (float)extraRightPadding;
- (float)legibilityStrength;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (struct CGPoint { float x1; float x2; })accessibilityActivationPoint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityIsBatteryPercentVisible;

@end