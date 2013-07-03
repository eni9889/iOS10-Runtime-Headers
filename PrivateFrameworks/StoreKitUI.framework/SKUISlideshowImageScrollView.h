/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIImage;

@interface SKUISlideshowImageScrollView : UIScrollView  {
    UIImageView *_imageView;
    struct CGPoint { 
        float x; 
        float y; 
    } _centerPointBeforeResize;
    float _scaleBeforeResize;
    UIImage *_image;
}

@property(retain) UIImage * image;
@property(readonly) UIImageView * imageView;


- (void)zoomIntoPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)resetZoomScale;
- (float)_computeMinimumZoomScale;
- (void)_resetMinMaxZoomScales;
- (void)_recoverFromResize;
- (void)_prepareToResize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
- (id)imageView;
- (void)layoutSubviews;

@end
