/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLGridProgram : VGLProgram  {
    int _uGridMix;
    float _gridMix;
    int _uColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _color;
    int _uLineColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _lineColor;
    int _uGridView;
    union { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    } _gridView;
    int _uMajorSize;
    float _majorSize;
    int _uMinorSize;
    float _minorSize;
    int _uLineParams;
    struct { 
        float x; 
        float y; 
        float z; 
        float w; 
    } _lineParams;
}

@property float gridMix;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } lineColor;
@property union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; } gridView;
@property float majorSize;
@property float minorSize;
@property struct { float x1; float x2; float x3; float x4; } lineParams;

+ (id)fragName;
+ (id)vertName;

- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })gridView;
- (struct { float x1; float x2; float x3; float x4; })lineParams;
- (float)minorSize;
- (float)majorSize;
- (float)gridMix;
- (void)setGridMix:(float)arg1;
- (void)setMinorSize:(float)arg1;
- (void)setMajorSize:(float)arg1;
- (void)setLineParams:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setGridView:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg1;
- (void)setLineColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })lineColor;
- (void)setup;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (id).cxx_construct;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;

@end
