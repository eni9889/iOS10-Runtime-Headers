/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIColorScheme, <SKUIQuicklinksViewControllerDelegate>, SKUIQuicklinksView, UICollectionView;

@interface SKUIQuicklinksViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    <SKUIQuicklinksViewControllerDelegate> *_delegate;
    NSArray *_links;
    SKUIQuicklinksView *_quicklinksView;
}

@property <SKUIQuicklinksViewControllerDelegate> * delegate;
@property(readonly) NSArray * indexPathsForVisibleItems;
@property(copy) NSArray * links;


- (void)_reloadForInterfaceOrientation:(int)arg1;
- (int)_numberOfRows;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLinkAtIndex:(int)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setLinks:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)links;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)indexPathsForVisibleItems;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;

@end
