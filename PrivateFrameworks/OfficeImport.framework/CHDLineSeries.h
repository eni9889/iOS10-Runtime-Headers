/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
    CHDMarker *mMarker;
    boolmSmooth;
}


- (bool)isSmooth;
- (void)setSmooth:(bool)arg1;
- (void)setMarker:(id)arg1;
- (id)initWithChart:(id)arg1;
- (id)marker;
- (void)dealloc;

@end
