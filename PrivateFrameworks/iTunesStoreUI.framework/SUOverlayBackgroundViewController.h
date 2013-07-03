/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUTouchCaptureView, <SUOverlayBackgroundDelegate>, NSMutableArray, SUOverlayViewController, SUScalingFlipView, UISwipeGestureRecognizer, NSArray;

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    BOOL _askingToDismissEverything;
    BOOL _askingToDismissSelection;
    SUTouchCaptureView *_captureView;
    <SUOverlayBackgroundDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardFrame;
    int _selectedViewControllerIndex;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property <SUOverlayBackgroundDelegate> * delegate;
@property(readonly) SUOverlayViewController * selectedViewController;
@property(readonly) NSArray * viewControllers;


- (void)overlayPageViewTapped:(id)arg1;
- (void)_performPresentAction:(id)arg1;
- (void)_performDismissEverythingAction:(id)arg1;
- (void)_performDismissAction:(id)arg1;
- (void)_performFlipForAction:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForSlideFromBottomForViewController:(id)arg1;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_removeViewController:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_finishPresentAction:(id)arg1;
- (void)_finishDismissEverythingAction:(id)arg1;
- (void)_finishDismissAction:(id)arg1;
- (void)_finishDismissOfViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_overlayAnimationDidFinish;
- (void)_shouldDismissFinishedWithValue:(id)arg1;
- (void)_addViewController:(id)arg1;
- (void)_reloadGestureRecognizers;
- (void)_captureViewAction:(id)arg1;
- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;
- (void)layoutViewControllers;
- (float)_viewControllerHorizontalPadding;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_centeredFrameForViewController:(id)arg1;
- (float)_viewControllerKeyboardOffset;
- (void)_enqueueAction:(id)arg1;
- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;
- (id)_selectedViewController;
- (void)_sendDidDismiss;
- (void)_tearDownFlipView;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;
- (id)viewControllerForScriptWindowContext:(id)arg1;
- (void)_performNextAction;
- (void)populateNavigationHistoryWithItems:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)dismissOverlay:(id)arg1 animated:(BOOL)arg2;
- (id)copyArchivableJetsamContext;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)copyChildViewControllersForReason:(int)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyArchivableContext;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)_swipe:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)selectedViewController;
- (id)viewControllers;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

@end
