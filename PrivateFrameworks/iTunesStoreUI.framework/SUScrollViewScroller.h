/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIScrollView, NSMutableArray, NSObject<UIScrollViewDelegate>;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate> {
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
    UIScrollView *_scrollView;
}

@property(readonly) UIScrollView * scrollView;


- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_performScrollRectRequest:(id)arg1;
- (void)_performContentOffsetRequest:(id)arg1;
- (void)_performNextScrollRequest;
- (void)_finishActiveScrollRequest;
- (void)_addScrollRequest:(id)arg1;
- (void)scrollFrameToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)detachFromScrollView;
- (void)attachToScrollView:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

@end
