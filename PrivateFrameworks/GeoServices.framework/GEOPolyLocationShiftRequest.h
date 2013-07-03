/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEOPolyLocationShiftRequest : PBRequest  {
    GEOLatLng *_location;
}

@property(retain) GEOLatLng * location;


- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)copyTo:(id)arg1;
- (id)location;
- (struct { double x1; double x2; })coordinate;
- (void)setLocation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
