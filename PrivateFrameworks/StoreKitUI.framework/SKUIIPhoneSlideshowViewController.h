/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, SKUIGiftThemeCollectionView, UIPageControl, NSMutableArray, <SKUISlideshowViewControllerDataSource>, SKUIScreenshotDataConsumer, NSMutableDictionary;

@interface SKUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIClientContext *_clientContext;
    <SKUISlideshowViewControllerDataSource> *_dataSource;
    SKUIGiftThemeCollectionView *_collectionView;
    UIPageControl *_pageControl;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_placeholderQueue;
    NSMutableArray *_images;
    NSMutableDictionary *_placeholderImages;
    SKUIScreenshotDataConsumer *_screenshotConsumer;
    int _indexToScrollToOnLoadView;
    BOOL _respondsToCount;
    BOOL _respondsToURL;
    BOOL _respondsToImage;
}

@property(retain) SKUIClientContext * clientContext;
@property <SKUISlideshowViewControllerDataSource> * dataSource;
@property int currentIndex;


- (void)_setLowResImage:(id)arg1 atIndex:(int)arg2;
- (id)_placeholderImageAtIndex:(int)arg1;
- (id)_imageAtIndex:(int)arg1;
- (void)_setImage:(id)arg1 atIndex:(int)arg2;
- (void)_reloadPageControl;
- (void)setCurrentIndex:(int)arg1;
- (void)_doneAction:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)currentIndex;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;

@end
