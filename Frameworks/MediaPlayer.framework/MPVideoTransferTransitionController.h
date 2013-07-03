/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, UIView, MPVideoView, UIViewController;

@interface MPVideoTransferTransitionController : MPTransitionController  {
    MPVideoView *_inflightVideoView;
    UINavigationBar *_portraitNavigationBar;
    BOOL _showOverlayAfterTransition;
    UIView *_transitionBehindView;
    UIViewController *_inflightBackstopViewController;
    float _preTransitionWindowLevel;
}

@property(retain) UINavigationBar * portraitNavigationBar;
@property(retain) UIView * transitionBehindView;
@property(retain) UIViewController * inflightBackstopViewController;
@property BOOL showOverlayAfterTransition;


- (void)setTransitionBehindView:(id)arg1;
- (id)transitionBehindView;
- (void)setInflightBackstopViewController:(id)arg1;
- (void)setShowOverlayAfterTransition:(BOOL)arg1;
- (BOOL)showOverlayAfterTransition;
- (void)setPortraitNavigationBar:(id)arg1;
- (id)portraitNavigationBar;
- (id)inflightBackstopViewController;
- (void)_transformView:(id)arg1 forOrientation:(int)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_prepareViewsWithBeginAnimationTransactionBlock:(id)arg1;
- (void)_animationDidStop;
- (void)_updateStatusBar;
- (void)performTransition:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
