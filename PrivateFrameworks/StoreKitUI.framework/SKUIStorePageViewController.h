/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, UICollectionView, NSMutableArray, NSString, NSMapTable, SKUIProductPageOverlayController, NSURLRequest, SKUIResourceLoader, SKUIStorePage, SKUILoadURLOperation, <SKUIStorePageDataSource>, UIRefreshControl, SKUIArtworkRequest, SKUIClientContext, NSArray, SKUIMetricsController, SKUITextLayoutCache, UIImage, NSOperationQueue, <SKUIStorePageDelegate>, SKUIColorScheme;

@interface SKUIStorePageViewController : UIViewController <SKUIArtworkRequestDelegate, SKUIProductPageOverlayDelegate, SKUIResourceLoaderDelegate, SKUIStorePageCollectionViewDelegate, SKUITextLayoutCacheDelegate, UICollectionViewDataSource, UIViewControllerRestoration> {
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUIArtworkRequest *_backgroundArtworkRequest;
    UIImage *_backgroundImage;
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsetAdjustments;
    <SKUIStorePageDataSource> *_dataSource;
    <SKUIStorePageDelegate> *_delegate;
    int _disappearOrientation;
    NSArray *_initialOverlayURLs;
    NSString *_lastDataConsumerClassName;
    NSURLRequest *_lastRequest;
    BOOL _loadOnAppear;
    SKUILoadURLOperation *_loadOperation;
    NSMapTable *_menuSectionContexts;
    NSOperationQueue *_operationQueue;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    SKUIColorScheme *_placeholderColorScheme;
    UIView *_pinnedHeaderView;
    UIRefreshControl *_refreshControl;
    SKUIResourceLoader *_resourceLoader;
    NSMutableArray *_sections;
    SKUIStorePage *_storePage;
    SKUITextLayoutCache *_textLayoutCache;
}

@property(getter=isLoading,readonly) BOOL loading;
@property(copy) SKUIStorePage * storePage;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIStorePageDataSource> * dataSource;
@property <SKUIStorePageDelegate> * delegate;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) UIRefreshControl * refreshControl;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)setStorePage:(id)arg1;
- (id)storePage;
- (id)_visibleMetricsImpressionsDictionary;
- (void)_setSelectedIndex:(int)arg1 forMenuSection:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)artworkLoaderDidIdle:(id)arg1;
- (void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (void)cancelPageLoad;
- (void)textLayoutCacheDidFinishBatch:(id)arg1;
- (id)collectionView:(id)arg1 layout:(id)arg2 pageSectionForIndexPath:(id)arg3;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2;
- (id)defaultSectionForComponent:(id)arg1;
- (void)_enumerateVisibleSectionsUsingBlock:(id)arg1;
- (id)_textLayoutCache;
- (id)_sectionWithPageComponent:(id)arg1;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(int)arg2;
- (id)_newStorePageSectionContext;
- (id)_menuContextForMenuComponent:(id)arg1;
- (void)_prefetchArtworkForVisibleSections;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)_reloadCollectionView;
- (void)_reloadStorePage;
- (void)_setStorePage:(id)arg1 error:(id)arg2;
- (void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (void)loadURLRequest:(id)arg1 withCompletionBlock:(id)arg2;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)loadURL:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (id)_sections;
- (id)_colorScheme;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)_resourceLoader;
- (BOOL)isLoading;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)_collectionView;
- (id)refreshControl;
- (void)setRefreshControl:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end
