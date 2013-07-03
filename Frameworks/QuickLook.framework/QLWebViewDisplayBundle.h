/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPDFHanderDelegateForwarder, NSURLRequest, QLPreviewConverter, QLScrubView, NSMutableArray, UIView, UIWebView, NSData;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate> {
    UIWebView *_webView;
    UIView *_accessoryView;
    QLPreviewConverter *_previewConverter;
    NSURLRequest *_previewRequest;
    unsigned int _isLoadedDuringZoom : 1;
    unsigned int _isHTMLContent : 1;
    unsigned int _isXMLContent : 1;
    unsigned int _isPDFContent : 1;
    unsigned int _isSpreadsheetContent : 1;
    unsigned int _isPlainText : 1;
    unsigned int _isRTFContent : 1;
    unsigned int _isCSVContent : 1;
    unsigned int _loadStarted : 1;
    float _defaultZoom;
    float _navigationBarHeight;
    QLScrubView *_scrubView;
    int _lastPage;
    BOOL _inScroll;
    BOOL _webViewReadyForThumbnailing;
    NSMutableArray *_htmlSlideNodes;
    NSData *_pdfPreviewData;
    QLPDFHanderDelegateForwarder *_forwarder;
}

+ (int)backgroundTypeForUTI:(id)arg1 andMode:(int)arg2;

- (void)userInteractedWithScrubView:(id)arg1;
- (void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned int)arg2;
- (struct CGSize { float x1; float x2; })scrubView:(id)arg1 pageSizeAtIndex:(unsigned int)arg2;
- (id)scrubView:(id)arg1 thumbnailOperationForPageAtIndex:(unsigned int)arg2;
- (int)numberOfPagesInScrubView:(id)arg1;
- (void)scrollToPage:(unsigned int)arg1;
- (id)_htmlPageXPath;
- (struct CGSize { float x1; float x2; })pageSizeAtIndex:(int)arg1;
- (id)_htmlSlideNodes;
- (id)previewConverter;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_scrubView:(BOOL)arg1;
- (unsigned int)currentPageNumber;
- (struct CGPDFDocument { }*)_getCGPDFDocumentRef;
- (id)_copyPreviewConverterForPreviewItem:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameWithoutOverlay;
- (id)_getWebView:(BOOL)arg1;
- (void)_hideScrubberIfNeeded:(double)arg1;
- (void)_showScrubberIfNeeded:(double)arg1;
- (void)_tearDownWebView;
- (id)gestureRecognizersForFullScreenDisplay;
- (id)printPageHelper;
- (id)pdfPreviewData;
- (int)airPlayMode;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)cancelLoad;
- (void)loadWithHints:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewMode:(int)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(struct CGPoint { float x1; float x2; })arg2;
- (void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
- (id)alertViewForUIWebPDFViewHandler:(id)arg1;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (int)pageCount;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)arg1;

@end
