/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIAsyncInvocation, _UISizeTrackingView, _UIRemoteView, _UIViewServiceInterface, NSError, UIActionSheet, UIView, NSString, _UITextServiceSession, UIDimmingView, NSArray;

@interface _UIRemoteViewController : UIViewController <XPCProxyTarget, _UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate> {
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    unsigned int _serviceRegisteredScrollToTopViewCount;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    BOOL _fencingCurrentTransaction;
    unsigned int _fenceReplyPort;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UIRemoteView *_fullScreenTextEffectsRemoteView;
    _UIRemoteView *_textEffectsAboveStatusBarRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    BOOL _snapshotTextEffectsAfterRotation;
    unsigned int _serviceScreenDisplayID;
    _UIAsyncInvocation *_terminationInvocation;
    int _terminationErrorLock;
    NSError *_terminationError;
    UIActionSheet *_hostedActionSheet;
    _UITextServiceSession *_textServiceSession;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    int _preferredStatusBarStyle;
    BOOL _prefersStatusBarHidden;
}

@property(readonly) NSString * serviceBundleIdentifier;
@property(readonly) int serviceProcessIdentifier;
@property(readonly) struct { unsigned int x1[8]; } serviceAuditToken;

+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3;
+ (BOOL)_shouldUseXPCObjects;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)disconnect;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)serviceViewControllerProxyWithErrorHandler:(id)arg1;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (int)serviceProcessIdentifier;
- (void)__sendNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 hidden:(BOOL)arg2;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(id)arg1 animated:(BOOL)arg2 fenceSendRight:(id)arg3 withReplyHandler:(id)arg4;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__showServiceForText:(id)arg1 type:(int)arg2 fromRectValue:(id)arg3 replyHandler:(id)arg4;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
- (id)_appearanceSource;
- (id)serviceBundleIdentifier;
- (void)viewServiceSupportedInterfaceOrientationsDidChange;
- (void)_updateTouchGrabbingView;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_restoreTextEffectsRemoteView;
- (struct { unsigned int x1[8]; })serviceAuditToken;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (int)__automatic_invalidation_logic;
- (id)serviceViewControllerProxy;
- (BOOL)_serviceHasScrollToTopView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(int)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)_willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (BOOL)_ignoreAppSupportedOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)_customizesForPresentationInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)__willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (BOOL)canBecomeFirstResponder;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityResponderElement;

@end
