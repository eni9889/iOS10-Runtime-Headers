/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIImage : NSObject <NSCopying> {
    struct CGImage { } *_cgImage;
}

@property(readonly) struct CGImage { }* image;
@property(readonly) struct CGSize { float x1; float x2; } size;

+ (id)imageWithCGImage:(struct CGImage { }*)arg1;

- (struct CGSize { float x1; float x2; })size;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)cgImage;
- (struct CGImage { }*)image;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
