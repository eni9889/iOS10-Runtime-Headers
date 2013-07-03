/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings  {
    float _restrictedEdgeRegionMinimumWeight;
    double _hysteresis;
    double _edgeRegionSize;
    double _bottomEdgeRegionSize;
    double _backProjectionTime;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _restrictedEdgeRegionTimeInterval;
    double _maximumSwipeDuration;
}

@property double hysteresis;
@property double edgeRegionSize;
@property double bottomEdgeRegionSize;
@property double backProjectionTime;
@property double edgeAngleWindow;
@property double edgeAngleWindowDegreees;
@property double edgeAngleWindowDecayTime;
@property double restrictedEdgeRegionTimeInterval;
@property float restrictedEdgeRegionMinimumWeight;
@property double maximumSwipeDuration;

+ (id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
+ (id)settingsControllerModule;

- (double)maximumSwipeDuration;
- (float)restrictedEdgeRegionMinimumWeight;
- (double)restrictedEdgeRegionTimeInterval;
- (double)edgeAngleWindowDecayTime;
- (double)backProjectionTime;
- (double)bottomEdgeRegionSize;
- (double)edgeRegionSize;
- (double)hysteresis;
- (void)setEdgeAngleWindowDegreees:(double)arg1;
- (double)edgeAngleWindowDegreees;
- (double)edgeAngleWindow;
- (void)setMaximumSwipeDuration:(double)arg1;
- (void)setRestrictedEdgeRegionMinimumWeight:(float)arg1;
- (void)setRestrictedEdgeRegionTimeInterval:(double)arg1;
- (void)setEdgeAngleWindowDecayTime:(double)arg1;
- (void)setEdgeAngleWindow:(double)arg1;
- (void)setBackProjectionTime:(double)arg1;
- (void)setBottomEdgeRegionSize:(double)arg1;
- (void)setEdgeRegionSize:(double)arg1;
- (void)setHysteresis:(double)arg1;
- (void)setDefaultValues;

@end
