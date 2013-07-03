/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject  {
    UIPDFDocument *_document;
    unsigned int _lookAhead;
    unsigned int _jobCount;
    id *_jobsPrioritized;
    unsigned int _nextJobIndex;
    unsigned int _pageCount;
    id *_jobsByPage;
    NSOperationQueue *_renderQueue;
    int _lock;
}

@property(readonly) UIPDFDocument * document;
@property(readonly) unsigned int pageCount;
@property(readonly) unsigned int lookAhead;


- (void)cancelPendingRenderOperationsForTarget:(id)arg1;
- (void)cancelPendingRenderOperations;
- (void)cacheImageOfPage:(unsigned int)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2;
- (unsigned int)lookAhead;
- (void)addRenderJob:(id)arg1;
- (void)deliverImageOfPage:(unsigned int)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2 quality:(BOOL*)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6;
- (id)getImageIfAvailableForPage:(unsigned int)arg1;
- (id)initWithDocument:(id)arg1 cacheCount:(unsigned int)arg2 lookAhead:(unsigned int)arg3;
- (void)clearCache;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (unsigned int)pageCount;

@end
