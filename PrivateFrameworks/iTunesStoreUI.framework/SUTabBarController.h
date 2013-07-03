/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUPreviewOverlayViewController, _UIBackdropView, <SUTabBarControllerDelegate>, NSMutableArray, SUClientInterface, UIImage, NSString, SUViewController, UIViewController, NSArray;

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate, _UIBasicAnimationFactory> {
    SUClientInterface *_clientInterface;
    NSString *_moreListTitle;
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    int _reloadingUnderneathTransientControllerCount;
    NSArray *_sections;
    BOOL _ignoreTabReselection;
    UIImage *_moreListSelectedImage;
    UIImage *_moreListUnselectedImage;
    SUViewController *_preloadedViewController;
    NSString *_preloadedViewControllerIdentifier;
    NSString *_preloadedViewControllerKey;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    int _storeBarStyle;
    _UIBackdropView *_tabBarBackdropView;
}

@property(readonly) SUClientInterface * clientInterface;
@property <SUTabBarControllerDelegate> * delegate;
@property(retain) NSArray * sections;
@property(retain) NSString * selectedIdentifier;
@property(retain) NSString * moreListTitle;
@property(getter=_previewOverlayViewController,readonly) SUPreviewOverlayViewController * _previewOverlayViewController;

+ (Class)_moreNavigationControllerClass;

- (id)moreListTitle;
- (id)_sectionForType:(int)arg1;
- (void)_fixupTabBarSelection;
- (void)_showPreviewOverlay:(id)arg1 animated:(BOOL)arg2;
- (id)_previewOverlayViewController;
- (void)_hidePreviewOverlayAnimated:(BOOL)arg1;
- (id)viewControllerForSectionType:(int)arg1;
- (unsigned int)indexOfViewControllerWithSectionType:(int)arg1;
- (void)dismissOverlayBackgroundViewController;
- (void)cancelTransientViewController:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)setMoreListTitle:(id)arg1;
- (void)setMoreListSelectedImage:(id)arg1 unselectedImage:(id)arg2;
- (void)selectSectionOfType:(int)arg1;
- (BOOL)saveToDefaults;
- (void)resetToSystemDefaults;
- (void)reloadSectionWithIdentifier:(id)arg1 URL:(id)arg2;
- (void)reloadSectionVisibilityAnimated:(BOOL)arg1;
- (void)pushTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (BOOL)loadFromDefaultsAndSetSections:(id)arg1;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (void)_endReloadingUnderneathTransientViewController;
- (void)_beginReloadingUnderneathTransientViewController;
- (id)_archivedContextsForViewController:(id)arg1;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)_sectionForIdentifier:(id)arg1;
- (id)viewControllerForSectionIdentifier:(id)arg1;
- (void)_showPhonePreviewOverlay:(id)arg1 animated:(BOOL)arg2;
- (void)_showPadPreviewOverlay:(id)arg1 animated:(BOOL)arg2;
- (void)_removePreviewOverlayViewController;
- (void)_hidePhonePreviewOverlayAnimated:(BOOL)arg1;
- (void)_hidePadPreviewOverlayAnimated:(BOOL)arg1;
- (void)_transitionSafeHandlePartnerChange:(id)arg1;
- (void)_moveView:(id)arg1 toView:(id)arg2;
- (void)_fixupViewControllers;
- (void)_setStoreBarStyle:(int)arg1;
- (int)ITunesStoreUIBarStyle;
- (BOOL)_isReloadingUnderneathTransientViewController;
- (id)overlayBackgroundViewController;
- (id)selectedIdentifier;
- (void)_applyMoreListConfiguration;
- (BOOL)_saveTransientNavigationPathToDefaults;
- (BOOL)_saveNavigationPathToDefaults;
- (BOOL)saveOrderingToDefaults;
- (void)selectDefaultSection;
- (void)resetUserDefaults;
- (void)setSelectedIdentifier:(id)arg1;
- (void)_reloadViewControllersFromSections:(id)arg1 animated:(BOOL)arg2;
- (void)_moveTransientViewController:(id)arg1 toSectionWithIdentifier:(id)arg2 asRoot:(BOOL)arg3;
- (void)_restoreArchivedTransientContexts:(id)arg1;
- (void)_restoreOverlayContexts:(id)arg1;
- (void)_restoreArchivedContexts:(id)arg1;
- (void)setSectionOrdering:(id)arg1;
- (BOOL)loadFromDefaults;
- (id)_rootViewControllerForSection:(id)arg1;
- (id)_viewControllerForContext:(id)arg1;
- (void)_partnerChanged:(id)arg1;
- (void)_applicationDidChangeStatusBarFrame:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (id)clientInterface;
- (id)sections;
- (id)init;
- (void)dealloc;
- (void)setSections:(id)arg1;
- (void)tabBar:(id)arg1 willShowCustomizationSheet:(id)arg2 withNavigationBar:(id)arg3;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)_setSelectedViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (id)selectedViewController;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end
