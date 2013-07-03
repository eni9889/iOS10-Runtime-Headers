/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPuckDrawStyle : VKDrawStyle  {
    BOOL hasCircleBrightness;
    BOOL hasArrowColor;
    BOOL hasArrowColorStale;
    float circleBrightness;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } arrowColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } arrowColorStale;
}

@property(readonly) float circleBrightness;
@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } arrowColor;
@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } arrowColorStale;
@property(readonly) BOOL hasCircleBrightness;
@property(readonly) BOOL hasArrowColor;
@property(readonly) BOOL hasArrowColorStale;


- (void)takeFromZoomInvariantProperties:(id)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })arrowColorStale;
- (BOOL)hasArrowColorStale;
- (float)circleBrightness;
- (BOOL)hasCircleBrightness;
- (BOOL)hasArrowColor;
- (id).cxx_construct;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })arrowColor;
- (id)variant;

@end
