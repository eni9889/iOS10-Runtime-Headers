/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAnnotationView, VKAttributedRouteMatch;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {
    MKAnnotationView *_annotationView;
}

@property MKAnnotationView * annotationView;
@property double presentationCourse;
@property struct { double x1; double x2; } presentationCoordinate;
@property(getter=isTracking) BOOL tracking;
@property(retain) VKAttributedRouteMatch * routeMatch;


- (void)setRouteMatch:(id)arg1;
- (id)routeMatch;
- (void)setPresentationCourse:(double)arg1;
- (double)presentationCourse;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (struct { double x1; double x2; })presentationCoordinate;
- (id)annotationView;
- (void)setAnnotationView:(id)arg1;
- (void)setTracking:(BOOL)arg1;
- (BOOL)isTracking;

@end
