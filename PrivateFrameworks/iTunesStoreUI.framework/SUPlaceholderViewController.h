/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUGradientView, SULoadingView, SUGradient;

@interface SUPlaceholderViewController : SUViewController  {
    SUGradient *_backgroundGradient;
    SUGradient *_defaultBackgroundGradient;
    BOOL _hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
    BOOL _shouldShowLoadingView;
}

@property(copy) SUGradient * backgroundGradient;
@property(copy) SUGradient * defaultBackgroundGradient;
@property(readonly) SULoadingView * loadingView;
@property BOOL shouldShowLoadingView;


- (BOOL)shouldShowLoadingView;
- (void)setShouldShowLoadingView:(BOOL)arg1;
- (id)_newURLBagBackgroundGradient;
- (void)_reloadLoadingView;
- (id)_copyActiveGradient;
- (void)_reloadBackgroundGradient;
- (void)_bagDidLoadNotification:(id)arg1;
- (id)defaultBackgroundGradient;
- (void)parentViewControllerHierarchyDidChange;
- (void)setScriptProperties:(id)arg1;
- (id)copyDefaultScriptProperties;
- (id)loadingView;
- (id)copyArchivableContext;
- (int)ITunesStoreUIBarStyle;
- (void)setDefaultBackgroundGradient:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (id)backgroundGradient;
- (void)setBackgroundGradient:(id)arg1;
- (void)loadView;

@end
