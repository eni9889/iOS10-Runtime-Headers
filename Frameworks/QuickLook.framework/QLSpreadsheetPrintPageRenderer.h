/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableArray, UIWebPaginationInfo, UIWebBrowserView;

@interface QLSpreadsheetPrintPageRenderer : QLRemotePrintPageHelper  {
    UIWebBrowserView *_printView;
    UIWebPaginationInfo *_paginationInfo;
    BOOL _frameLoaded;
    NSMutableArray *_urls;
    unsigned int _currentURLIndex;
    unsigned int _currentPageIndex;
    int _totalPagesPrinted;
    BOOL _printingDone;
}


- (BOOL)_loadNextURL;
- (BOOL)_loadURLAtIndex:(unsigned int)arg1;
- (id)_documentURLs;
- (id)pdfDataForPageAtIndex:(int)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 printingDone:(BOOL*)arg3;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)dealloc;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)numberOfPages;

@end
