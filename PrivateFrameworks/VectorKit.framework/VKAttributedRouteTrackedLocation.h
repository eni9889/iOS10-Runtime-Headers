/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class CLLocation, VKAttributedRouteMatch, VKAttributedRoute, NSDate;

@interface VKAttributedRouteTrackedLocation : NSObject  {
    VKAttributedRoute *_route;
    VKAttributedRouteMatch *_matchedLocation;
    CLLocation *_rawLocation;
    NSDate *_lastTimeInTunnel;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _lastGoodMatchCoordinate;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _newStepLastRouteCoord;
    struct { 
        double latitude; 
        double longitude; 
    } _newStepLastGeoCoord;
    unsigned int _newStepProgressions;
    double _newStepDistanceTraveled;
    double _estimatedCourse;
}

@property(readonly) VKAttributedRoute * route;
@property(readonly) VKAttributedRouteMatch * matchedLocation;
@property(readonly) CLLocation * rawLocation;
@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } lastGoodMatchCoordinate;
@property(retain) NSDate * lastTimeInTunnel;
@property(readonly) double timeSinceTunnel;
@property(readonly) unsigned int newStepProgressions;
@property(readonly) double newStepDistanceTraveled;
@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } newStepLastRouteCoord;
@property(readonly) struct { double x1; double x2; } newStepLastGeoCoord;


- (id)lastTimeInTunnel;
- (void)setMatchedLocation:(id)arg1;
- (void)setLastTimeInTunnel:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })newStepLastRouteCoord;
- (double)newStepDistanceTraveled;
- (struct { double x1; double x2; })newStepLastGeoCoord;
- (unsigned int)newStepProgressions;
- (void)updateWithRouteMatch:(id)arg1 rawLocation:(id)arg2 newStepProgressions:(unsigned int)arg3 newStepDistanceTraveled:(double)arg4 newStepLastRouteCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg5 newStepLastGeoCoord:(struct { double x1; double x2; })arg6;
- (void)updateWithRouteMatch:(id)arg1;
- (double)timeSinceTunnel;
- (struct PolylineCoordinate { unsigned int x1; float x2; })lastGoodMatchCoordinate;
- (void)updatedWithProjectedRouteMatch:(id)arg1;
- (id)matchedLocation;
- (id)initWithRoute:(id)arg1;
- (id)route;
- (id)rawLocation;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;

@end
