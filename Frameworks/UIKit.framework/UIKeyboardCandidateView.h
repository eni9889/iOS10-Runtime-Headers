/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateUnsplitKeyboardToggleButton, UIView<UIKeyboardCandidateList>, UIImageView, UIKeyboardCandidateGrid, UIKeyboardCandidateSplitKeyboardToggleButton, UIKeyboardCandidateBar, UIKeyboardCandidateSortControl;

@interface UIKeyboardCandidateView : UIInputView  {
    UIKeyboardCandidateBar *_bar;
    UIKeyboardCandidateSortControl *_sortControl;
    UIKeyboardCandidateGrid *_extendedView;
    UIView<UIKeyboardCandidateList> *_inlineView;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;
    UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;
    struct { 
        unsigned int isExtended; 
        unsigned int didMinimizeKeyboard; 
        unsigned int isSplit; 
    } _candidateBarFlags;
}

@property(retain) UIView<UIKeyboardCandidateList> * inlineView;

+ (id)sharedInstanceForInlineView;
+ (float)defaultExtendedControlHeight;
+ (void)setActiveCandidateView:(id)arg1;
+ (id)activeCandidateList;
+ (id)sharedInstanceForInlineView:(BOOL)arg1;
+ (id)activeCandidateView;
+ (id)sharedInstance;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setInlineView:(id)arg1;
- (float)barHeight;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)setCandidateBarCanExtend:(BOOL)arg1;
- (void)updatePageControlStatus;
- (void)_toggleExtendedCandidateView:(id)arg1;
- (BOOL)isExtended;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (id)activeCandidateList;
- (id)inlineView;
- (void)candidatesDidChange;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
