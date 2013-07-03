/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlmanac : NSObject  {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    double _sunrise;
    double _sunset;
    double _nextSunrise;
    double _nextSunset;
}

@property(readonly) BOOL isDayLight;


- (void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3;
- (double)intervalForNextAstronomicalChange;
- (BOOL)isDayLight;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1;
- (double)intervalForNextAstronomicalChangeFromTime:(double)arg1;
- (BOOL)isDayLightForTime:(double)arg1;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 time:(double)arg2;
- (id).cxx_construct;

@end
