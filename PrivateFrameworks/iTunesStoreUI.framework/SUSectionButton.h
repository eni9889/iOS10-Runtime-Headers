/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString, UIImage;

@interface SUSectionButton : NSObject <NSCopying> {
    NSString *_accessibilityTitle;
    NSString *_displayTitle;
    UIImage *_image;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    NSURL *_imageURL;
    float _imageURLScale;
    int _tag;
}

@property(copy) NSString * accessibilityTitle;
@property(copy) NSString * displayTitle;
@property(retain) UIImage * image;
@property(copy) NSURL * imageURL;
@property float imageURLScale;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageInsets;
@property int tag;


- (void)setImageURLScale:(float)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setAccessibilityTitle:(id)arg1;
- (float)imageURLScale;
- (void)applyToBarButtonItem:(id)arg1;
- (id)initWithSectionButtonDictionary:(id)arg1;
- (void)setImageURL:(id)arg1;
- (id)displayTitle;
- (id)imageURL;
- (id)accessibilityTitle;
- (id)image;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (int)tag;
- (void)setTag:(int)arg1;

@end
