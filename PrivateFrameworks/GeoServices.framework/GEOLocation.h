/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEOLocation : PBCodable  {
    double _course;
    double _heading;
    double _horizontalAccuracy;
    double _speed;
    double _timestamp;
    double _verticalAccuracy;
    int _altitude;
    GEOLatLng *_latLng;
    int _type;
    struct { 
        unsigned int course : 1; 
        unsigned int heading : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int speed : 1; 
        unsigned int timestamp : 1; 
        unsigned int verticalAccuracy : 1; 
        unsigned int altitude : 1; 
        unsigned int type : 1; 
    } _has;
}

@property(retain) GEOLatLng * latLng;
@property BOOL hasType;
@property int type;
@property BOOL hasTimestamp;
@property double timestamp;
@property BOOL hasAltitude;
@property int altitude;
@property BOOL hasHorizontalAccuracy;
@property double horizontalAccuracy;
@property BOOL hasVerticalAccuracy;
@property double verticalAccuracy;
@property BOOL hasSpeed;
@property double speed;
@property BOOL hasHeading;
@property double heading;
@property BOOL hasCourse;
@property double course;

+ (id)locationWithCLLocation:(id)arg1 course:(double)arg2;

- (void)setHasCourse:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasHeading:(BOOL)arg1;
- (void)setHasSpeed:(BOOL)arg1;
- (void)setHasVerticalAccuracy:(BOOL)arg1;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (void)setHasAltitude:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setCourse:(double)arg1;
- (BOOL)hasCourse;
- (void)setHeading:(double)arg1;
- (BOOL)hasHeading;
- (BOOL)hasSpeed;
- (void)setVerticalAccuracy:(double)arg1;
- (BOOL)hasVerticalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
- (BOOL)hasHorizontalAccuracy;
- (void)setAltitude:(int)arg1;
- (BOOL)hasAltitude;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (id)latLng;
- (id)initWithGEOCoordinate:(struct { double x1; double x2; })arg1;
- (void)setLatLng:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)copyTo:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (double)timestamp;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (double)heading;
- (double)horizontalAccuracy;
- (double)course;
- (double)verticalAccuracy;
- (int)altitude;
- (void)setType:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (int)type;
- (id)dictionaryRepresentation;
- (id)_initWithCLClientLocation:(const struct { int x1; int x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; int x14; double x15; int x16; struct { double x_17_1_1; double x_17_1_2; } x17; double x18; }*)arg1;
- (id)initWithCLLocation:(id)arg1 course:(double)arg2;
- (id)initWithCLLocation:(id)arg1;

@end
