/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUICategoryArtworkLoader, UISegmentedControl, SKUISegmentedControl, SKUIClientContext, <SKUICategoryControllerDelegate>, SKUICategory, UIBarButtonItem, UIViewController, NSArray, UIPopoverController, SKUICategoryTableViewController, SKUILoadURLOperation, NSOperationQueue, NSURL;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate> {
    SKUICategoryArtworkLoader *_artworkLoader;
    UIBarButtonItem *_button;
    SKUIClientContext *_clientContext;
    UIViewController *_contentsController;
    NSURL *_defaultURL;
    <SKUICategoryControllerDelegate> *_delegate;
    SKUILoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UIPopoverController *_popover;
    SKUICategory *_rootCategory;
    NSURL *_selectedURL;
    SKUISegmentedControl *_segmentedControl;
    int _segmentedControlLength;
    NSArray *_segmentedControlSegments;
    SKUICategoryTableViewController *_tableViewController;
}

@property(retain) SKUIClientContext * clientContext;
@property <SKUICategoryControllerDelegate> * delegate;
@property(retain) SKUICategory * category;
@property(retain) NSURL * defaultURL;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) UIBarButtonItem * categoryButton;
@property(readonly) BOOL isLoading;
@property int segmentedControlLength;
@property(readonly) UISegmentedControl * segmentedControl;
@property(retain) NSURL * selectedURL;


- (id)_artworkLoader;
- (void)buttonAction:(id)arg1;
- (id)initWithContentsController:(id)arg1;
- (int)segmentedControlLength;
- (void)setSegmentedControlLength:(int)arg1;
- (id)_tableViewControllerWithCategory:(id)arg1;
- (void)_reloadSelectedSegment;
- (void)_precacheArtworkForCategory:(id)arg1;
- (void)_reloadSegmentedControl;
- (void)segmentedControlAction:(id)arg1;
- (void)_setCachedResponse:(id)arg1 error:(id)arg2;
- (id)selectedURL;
- (id)defaultURL;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (id)categoryButton;
- (void)setDefaultURL:(id)arg1;
- (void)setSelectedURL:(id)arg1;
- (void)loadFromURL:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (BOOL)isLoading;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)segmentedControl;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)dismiss;
- (void)setCategory:(id)arg1;
- (id)category;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end
