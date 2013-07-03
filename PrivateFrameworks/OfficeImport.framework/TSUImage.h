/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class UIImage;

@interface TSUImage : NSObject  {
    struct CGImage { } *mCGImage;
    long mCGImageLock;
    float mScale;
    int mOrientation;
}

@property(readonly) UIImage * UIImage;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) int imageOrientation;
@property(readonly) float scale;

+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;

- (void)p_loadImageForScreenScaleIfNecessary:(float)arg1;
- (id)UIImage;
- (id)initWithUIImage:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 leftCapWidth:(int)arg3 topCapHeight:(int)arg4;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 stretchingCenterWidthBy:(float)arg3;
- (id)JPEGRepresentationWithCompressionQuality:(float)arg1;
- (id)PNGRepresentation;
- (struct CGImage { }*)CGImageForContentsScale:(float)arg1;
- (struct CGImage { }*)p_imageForContentsScale:(float)arg1;
- (id)initWithImageSourceRef:(struct CGImageSource { }*)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 isFlipped:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })size;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (int)imageOrientation;
- (struct CGImage { }*)CGImage;
- (id)TIFFRepresentation;
- (float)scale;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end
