/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeRange : PBCodable  {
    unsigned int _from;
    unsigned int _to;
    BOOL _allDay;
    struct { 
        unsigned int from : 1; 
        unsigned int to : 1; 
        unsigned int allDay : 1; 
    } _has;
}

@property BOOL hasFrom;
@property unsigned int from;
@property BOOL hasTo;
@property unsigned int to;
@property BOOL hasAllDay;
@property BOOL allDay;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasAllDay:(BOOL)arg1;
- (void)setHasTo:(BOOL)arg1;
- (void)setHasFrom:(BOOL)arg1;
- (void)setAllDay:(BOOL)arg1;
- (BOOL)allDay;
- (BOOL)hasAllDay;
- (void)setTo:(unsigned int)arg1;
- (unsigned int)to;
- (BOOL)hasTo;
- (void)setFrom:(unsigned int)arg1;
- (unsigned int)from;
- (BOOL)hasFrom;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
