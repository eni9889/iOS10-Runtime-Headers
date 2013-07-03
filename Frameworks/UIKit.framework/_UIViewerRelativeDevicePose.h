/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    float _planarRotationAngle;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _viewerOffset;
}

@property struct UIOffset { float x1; float x2; } viewerOffset;
@property float planarRotationAngle;


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPlanarRotationAngle:(float)arg1;
- (float)planarRotationAngle;
- (struct UIOffset { float x1; float x2; })_acceleratedOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg1 accelerationBoostFactor:(struct CGPoint { float x1; float x2; })arg2;
- (void)_setAcceleration:(struct CGPoint { float x1; float x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg2;
- (id)_acceleratedOutputRange;
- (void)setViewerOffset:(struct UIOffset { float x1; float x2; })arg1;
- (struct UIOffset { float x1; float x2; })viewerOffset;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
