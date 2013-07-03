/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKViewVolume, VKFootprint, <VKCameraDelegate>;

@interface VKCamera : NSObject  {
    <VKCameraDelegate> *_delegate;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _position;
    struct { 
        double v[4][4]; 
    } _orientation;
    float _aspectRatio;
    float _verticalFieldOfView;
    struct { 
        BOOL orthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
    } _frustum;
    struct { 
        BOOL orthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
    } _previousFrustum;
    double _minHeight;
    double _maxHeight;
    double _maxPitch;
    double _terrainHeight;
    double _maxFarClipDistance;
    BOOL _needsUpdate;
    BOOL _updating;
    int _updateNumber;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrix;
    struct { 
        double v[4][4]; 
    } _projectionMatrix;
    struct { 
        double v[4][4]; 
    } _viewMatrix;
    struct { 
        double v[4][4]; 
    } _viewMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _projectionMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _worldMatrix;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    struct Vec3Imp<double> { 
        double x; 
        double y; 
        double z; 
    } _forward;
    struct Vec3Imp<double> { 
        double x; 
        double y; 
        double z; 
    } _right;
    struct Vec3Imp<double> { 
        double x; 
        double y; 
        double z; 
    } _up;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    double _distanceToGroundAndFarClipPlaneIntersection;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    BOOL _allowDatelineWraparound;
    double _canonicalPitch;
}

@property(readonly) struct { BOOL x1; double x2; double x3; double x4; double x5; } frustum;
@property struct VKPoint { double x1; double x2; double x3; } position;
@property const struct { double x1[4][4]; }* orientation;
@property float aspectRatio;
@property(readonly) float horizontalFieldOfView;
@property float verticalFieldOfView;
@property(readonly) double farClipDistance;
@property(readonly) double nearClipDistance;
@property struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; } cameraState;
@property(readonly) int updateNumber;
@property double minHeight;
@property double maxHeight;
@property double maxPitch;
@property double terrainHeight;
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrix;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrix;
@property(readonly) const struct { double x1[4][4]; }* viewMatrix;
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* viewMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* worldMatrix;
@property(readonly) VKViewVolume * viewVolume;
@property(readonly) VKFootprint * footprint;
@property(readonly) struct Vec3Imp<double> { double x1; double x2; double x3; } upVector;
@property(readonly) struct Vec3Imp<double> { double x1; double x2; double x3; } rightVector;
@property(readonly) struct Vec3Imp<double> { double x1; double x2; double x3; } forwardVector;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } groundPoint;
@property(readonly) double pitch;
@property(readonly) double yaw;
@property(readonly) double tanHalfHorizFOV;
@property(readonly) double tanHalfVerticalFOV;
@property(readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property(readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property <VKCameraDelegate> * delegate;
@property double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property BOOL allowDatelineWraparound;
@property double canonicalPitch;


- (void)setCanonicalPitch:(double)arg1;
- (double)canonicalPitch;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (BOOL)allowDatelineWraparound;
- (double)screenHeightOfGroundAndFarClipPlaneIntersection;
- (double)distanceToGroundAndFarClipPlaneIntersection;
- (void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1;
- (double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
- (int)updateNumber;
- (void)setTerrainHeight:(double)arg1;
- (double)terrainHeight;
- (void)setMaxPitch:(double)arg1;
- (double)maxPitch;
- (float)aspectRatio;
- (struct { BOOL x1; double x2; double x3; double x4; double x5; })frustum;
- (double)depthForViewWidth:(double)arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isOuterWorldBoundsVisible;
- (float)maximumStyleZForRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (BOOL)hasChangedState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; }*)arg1;
- (void)setCameraState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPoint;
- (struct Vec3Imp<double> { double x1; double x2; double x3; })upVector;
- (id)viewVolume;
- (const struct { double x1[4][4]; }*)worldMatrix;
- (const struct { double x1[4][4]; }*)projectionMatrixUnscaled;
- (const struct { double x1[4][4]; }*)viewProjectionMatrixUnscaled;
- (const struct { double x1[4][4]; }*)viewMatrixUnscaled;
- (const struct { double x1[4][4]; }*)viewMatrix;
- (const struct { double x1[4][4]; }*)projectionMatrix;
- (const struct { double x1[4][4]; }*)viewProjectionMatrix;
- (double)tanHalfVerticalFOV;
- (double)nearClipDistance;
- (float)horizontalFieldOfView;
- (void)setVerticalFieldOfView:(float)arg1;
- (void)setAspectRatio:(float)arg1;
- (void)_setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)logCameraState;
- (double)tanHalfHorizFOV;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1 atGroundLevel:(double)arg2;
- (struct Vec3Imp<double> { double x1; double x2; double x3; })rightVector;
- (struct Vec3Imp<double> { double x1; double x2; double x3; })forwardVector;
- (double)farClipDistance;
- (float)verticalFieldOfView;
- (void)adjustClipPlanes;
- (BOOL)isWorldSpaceRectVisible:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (double)widthOfViewAtDepth:(double)arg1;
- (struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; })cameraState;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (id)footprint;
- (double)maxHeight;
- (double)minHeight;
- (double)yaw;
- (double)pitch;
- (void)setMinHeight:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setOrientation:(const struct { double x1[4][4]; }*)arg1;
- (void)setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (id)delegate;
- (const struct { double x1[4][4]; }*)orientation;
- (struct VKPoint { double x1; double x2; double x3; })position;

@end
