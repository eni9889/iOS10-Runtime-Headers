/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMapTable, UIImage, NSMutableIndexSet, SKUISwooshViewController, SKUIImageDataConsumer, SKUIResourceLoader;

@interface SKUISwooshArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_artworkRequestIDs;
    SKUIImageDataConsumer *_imageDataConsumer;
    NSMutableIndexSet *_outstandingRequestIDs;
    UIImage *_placeholderImage;
    SKUISwooshViewController *_swooshViewController;
}

@property(readonly) SKUIResourceLoader * artworkLoader;
@property(readonly) SKUISwooshViewController * swooshViewController;
@property(retain) SKUIImageDataConsumer * imageDataConsumer;
@property(readonly) UIImage * placeholderImage;


- (id)artworkLoader;
- (id)imageDataConsumer;
- (BOOL)loadImageForObject:(id)arg1 artworkRequest:(id)arg2 reason:(int)arg3;
- (void)setPlaceholderColorWithColorScheme:(id)arg1;
- (void)cancelImageLoading;
- (void)loadImagesForNextPageWithReason:(int)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (unsigned int)artworkRequestIdentifierForObject:(id)arg1;
- (id)swooshViewController;
- (BOOL)loadImageForObject:(id)arg1 URL:(id)arg2 reason:(int)arg3;
- (id)cachedImageForObject:(id)arg1;
- (void)setImageDataConsumer:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)placeholderImage;
- (void).cxx_destruct;

@end
