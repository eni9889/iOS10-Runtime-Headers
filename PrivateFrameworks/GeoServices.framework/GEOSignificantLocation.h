/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation;

@interface GEOSignificantLocation : PBCodable  {
    GEOLocation *_location;
    unsigned int _locationIndex;
    struct { 
        unsigned int locationIndex : 1; 
    } _has;
}

@property(readonly) BOOL hasLocation;
@property(retain) GEOLocation * location;
@property BOOL hasLocationIndex;
@property unsigned int locationIndex;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasLocationIndex:(BOOL)arg1;
- (void)setLocationIndex:(unsigned int)arg1;
- (unsigned int)locationIndex;
- (BOOL)hasLocationIndex;
- (BOOL)hasLocation;
- (void)copyTo:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
