/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class _UIHostedWindow, <QLPreviewContentDelegate>, QLRemotePrintPageHelper, <QLPreviewContentDataSource>, QLPreviewContentController, NSMutableDictionary;

@interface QLServicePreviewContentController : UIViewController <QLRemotePreviewContentControllerProtocol, QLPreviewContentDataSource, QLPreviewContentDelegate> {
    NSMutableDictionary *_previewItemCache;
    int _sourceUUID;
    QLPreviewContentController *_previewContentController;
    int _numberOfPreviewItems;
    int _previewMode;
    BOOL _remoteInstantiationFinished;
    BOOL _blockRemoteImages;
    QLRemotePrintPageHelper *_printPageHelper;
    int _clientInterfaceOrientation;
    _UIHostedWindow *_hostedWindow;
}

@property(readonly) int sourceUUID;
@property <QLPreviewContentDataSource> * dataSource;
@property <QLPreviewContentDelegate> * delegate;
@property int previewMode;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)_remotePreviewItemAtIndex:(int)arg1;
- (void)_updateHostedWindowFrame;
- (void)_getPDFPageAtIndex:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2 handler:(id)arg3;
- (void)_getNumberOfPagesForSize:(struct CGSize { float x1; float x2; })arg1 withHandler:(id)arg2;
- (int)sourceUUID;
- (void)_prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setNumberOfPreviewItems:(int)arg1;
- (void)_willAnimateRotationTo:(int)arg1;
- (id)clientProcessAlertViewForPreviewContentController:(id)arg1;
- (void)previewContentControllerDidExitFullScreen:(id)arg1;
- (void)previewContentController:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (id)printPageHelper;
- (int)previewMode;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (void)showContentsWasTappedInPreviewContentController:(id)arg1;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didUnloadItem:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(id)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (int)currentSourceUUIDForPreviewContentController:(id)arg1;
- (void)togglePlayState;
- (void)forceResignFirstResponder;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)willChangeContentFrame;
- (void)configureWithParameters:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewMode:(int)arg1;
- (void)becomeForeground;
- (void)enterBackground;
- (int)numberOfPreviewItems;
- (void)refreshCurrentPreviewItem;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (int)currentPreviewItemIndex;
- (void)setTransitioning:(BOOL)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)purgeCache;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)_willAppearInRemoteViewController;
- (id)printPageRenderer;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)reloadData;

@end
