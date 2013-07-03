/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMapTable, NSMutableArray, NSTimer, UIImage, UIPageViewController, <SKUIShowcaseDelegate>, SKUIResourceLoader, NSArray;

@interface SKUIShowcaseViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_artworkRequestIDs;
    NSMutableArray *_childViewControllers;
    <SKUIShowcaseDelegate> *_delegate;
    NSArray *_showcaseItems;
    UIPageViewController *_pageViewController;
    UIImage *_placeholderImage;
    BOOL _showsReflections;
    NSTimer *_timer;
}

@property <SKUIShowcaseDelegate> * delegate;
@property(readonly) int indexOfVisibleItem;
@property(copy) NSArray * showcaseItems;
@property BOOL showsReflections;


- (void)setShowcaseItems:(id)arg1;
- (void)setShowsReflections:(BOOL)arg1;
- (id)initWithArtworkLoader:(id)arg1;
- (id)showcaseItems;
- (void)_buttonAction:(id)arg1;
- (BOOL)showsReflections;
- (void)_reloadForTransition;
- (int)indexOfVisibleItem;
- (void)_cancelOutstandingArtworkRequests;
- (id)_artworkRequestWithItem:(id)arg1;
- (void)_timerAction:(id)arg1;
- (void)_timerStop;
- (void)_timerStart;
- (id)_placeholderImage;
- (void)_reloadChildViewControllers;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
