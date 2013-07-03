/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPanGestureRecognizer, _UINavigationParallaxTransition, UIGestureRecognizer, UIView, UIViewController, CADisplayLink, <_UINavigationInteractiveTransitionBaseDelegate>;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {
    UIView *_gestureRecognizerView;
    UIPanGestureRecognizer *_gestureRecognizer;
    int __interactionState;
    BOOL __transitionWasStopped;
    BOOL __stoppedTransitionWasCancelled;
    UIViewController *__parent;
    BOOL __useAugmentedShouldPopDecisionProcedure;
    BOOL __completesTransitionOnEnd;
    CADisplayLink *_displayLink;
    float _timestamps[3];
    float _velocities[3];
    float _accelerations[3];
    BOOL _shouldReverseTranslation;
    BOOL _springAnimationIsPending;
    BOOL _inSpringAnimation;
    _UINavigationParallaxTransition *_animationController;
    <_UINavigationInteractiveTransitionBaseDelegate> *_delegate;
    unsigned int _sampleCount;
    float _totalDistance;
    float _previousDisplacement;
    float _previousVelocity;
    float _previousAcceleration;
    float _averageVelocity;
    float _averageAcceleration;
    double _skipTimeStamp;
    double _previousTimeStamp;
}

@property UIPanGestureRecognizer * gestureRecognizer;
@property BOOL shouldReverseTranslation;
@property(retain) _UINavigationParallaxTransition * animationController;
@property(setter=_setInteractionState:) int _interactionState;
@property(setter=_setTransitionWasStopped:) BOOL _transitionWasStopped;
@property(setter=_setStoppedTransitionWasCancelled:) BOOL _stoppedTransitionWasCancelled;
@property(setter=_setParent:) UIViewController * _parent;
@property(setter=_setUseAugmentedShouldPopDecisionProcedure:) BOOL _useAugmentedShouldPopDecisionProcedure;
@property(setter=_setCompletesTransitionOnEnd:) BOOL _completesTransitionOnEnd;
@property(getter=_navigationGesture,readonly) UIGestureRecognizer * navigationGesture;
@property <_UINavigationInteractiveTransitionBaseDelegate> * delegate;
@property BOOL springAnimationIsPending;
@property BOOL inSpringAnimation;
@property unsigned int sampleCount;
@property float totalDistance;
@property double skipTimeStamp;
@property double previousTimeStamp;
@property float previousDisplacement;
@property float previousVelocity;
@property float previousAcceleration;
@property float averageVelocity;
@property float averageAcceleration;


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setAverageAcceleration:(float)arg1;
- (float)averageAcceleration;
- (void)setAverageVelocity:(float)arg1;
- (float)averageVelocity;
- (void)setPreviousAcceleration:(float)arg1;
- (float)previousAcceleration;
- (void)setPreviousVelocity:(float)arg1;
- (float)previousVelocity;
- (void)setPreviousDisplacement:(float)arg1;
- (float)previousDisplacement;
- (void)setPreviousTimeStamp:(double)arg1;
- (double)previousTimeStamp;
- (void)setSkipTimeStamp:(double)arg1;
- (double)skipTimeStamp;
- (void)setTotalDistance:(float)arg1;
- (float)totalDistance;
- (void)setSampleCount:(unsigned int)arg1;
- (unsigned int)sampleCount;
- (BOOL)inSpringAnimation;
- (void)_setUseAugmentedShouldPopDecisionProcedure:(BOOL)arg1;
- (BOOL)_useAugmentedShouldPopDecisionProcedure;
- (void)_setParent:(id)arg1;
- (id)_parent;
- (void)_setStoppedTransitionWasCancelled:(BOOL)arg1;
- (BOOL)_stoppedTransitionWasCancelled;
- (void)_setTransitionWasStopped:(BOOL)arg1;
- (BOOL)_transitionWasStopped;
- (int)_interactionState;
- (void)setShouldReverseTranslation:(BOOL)arg1;
- (BOOL)shouldReverseTranslation;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_completeStoppedInteractiveTransition;
- (id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (float)_popTransitionRevealInitialDisplacement;
- (void)_displayLinkTick:(id)arg1;
- (void)setNotInteractiveTransition;
- (BOOL)_completesTransitionOnEnd;
- (BOOL)popGesture:(id)arg1 withRemainingDuration:(float)arg2 shouldPopWithVelocity:(float*)arg3;
- (BOOL)springAnimationIsPending;
- (void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3;
- (id)animationController;
- (void)startInteractiveTransition;
- (void)startInteractiveTransition:(id)arg1;
- (id)_navigationGesture;
- (void)_stopInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)gestureRecognizerView;
- (id)gestureRecognizer;
- (void)setGestureRecognizer:(id)arg1;
- (void)handleNavigationTransition:(id)arg1;
- (void)setAnimationController:(id)arg1;
- (void)_setCompletesTransitionOnEnd:(BOOL)arg1;
- (void)_setInteractionState:(int)arg1;
- (void)cancelInteractiveTransition;
- (void)_clearDisplayLinkBarTransitionDriver;
- (void)_installDisplayLinkBarTransitionDriver;
- (void)setInSpringAnimation:(BOOL)arg1;
- (void)setSpringAnimationIsPending:(BOOL)arg1;
- (void)_resetInteractionController;

@end
