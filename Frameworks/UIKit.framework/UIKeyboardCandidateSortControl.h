/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISegmentedControl, UIKeyboardCandidateBarSegmentControl;

@interface UIKeyboardCandidateSortControl : UIView  {
    UIKeyboardCandidateBarSegmentControl *_segmentedControl;
    int _visualStyle;
}

@property(readonly) UISegmentedControl * segmentedControl;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)dealloc;
- (BOOL)needsToUpdateSortControlForTitles:(id)arg1;
- (void)addSegmentedControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateTitleTextAttributes;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (void)setSortControlTitles:(id)arg1;
- (id)segmentedControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visualStyle:(int)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)layoutSubviews;

@end
