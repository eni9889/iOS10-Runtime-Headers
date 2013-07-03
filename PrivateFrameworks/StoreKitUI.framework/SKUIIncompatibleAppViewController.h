/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUILoadURLOperation, SKUIIncompatibleAppView, SKUIProductPageHeaderViewController, SKUIItemArtworkContext, UIImage, <SKUIProductPageChildViewControllerDelegate>, SKUIProductPageItem, UIScrollView;

@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController> {
    SKUIItemArtworkContext *_artworkContext;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    UIImage *_iconImage;
    SKUIProductPageItem *_incompatibleItem;
    SKUILoadURLOperation *_loadIconOperation;
    SKUIIncompatibleAppView *_incompatibleView;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SKUIProductPageItem * incompatibleItem;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) UIScrollView * scrollView;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;


- (id)incompatibleItem;
- (void)_learnMoreAboutApp:(id)arg1;
- (void)_learnMoreAboutIPad:(id)arg1;
- (id)initWithIncompatibleItem:(id)arg1;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (void)setHeaderViewController:(id)arg1;
- (id)headerViewController;
- (id)_artworkContext;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)scrollView;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)reloadData;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end
