/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionRenderContextInternal;

@interface AVVideoCompositionRenderContext : NSObject  {
    AVVideoCompositionRenderContextInternal *_internal;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } renderTransform;
@property(readonly) float renderScale;
@property(readonly) struct { int x1; int x2; } pixelAspectRatio;
@property(readonly) struct { float x1; float x2; float x3; float x4; } edgeWidths;
@property(readonly) BOOL highQualityRendering;

+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;

- (struct __CVBuffer { }*)newPixelBuffer;
- (BOOL)highQualityRendering;
- (struct { float x1; float x2; float x3; float x4; })edgeWidths;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })renderTransform;
- (BOOL)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1 clientRequiredPixelBufferAttributes:(id)arg2;
- (void)_willDeallocOrFinalize;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (float)renderScale;
- (struct CGSize { float x1; float x2; })size;
- (struct { int x1; int x2; })pixelAspectRatio;
- (void)finalize;
- (void)dealloc;

@end
