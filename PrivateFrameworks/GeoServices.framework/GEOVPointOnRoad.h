/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVPointOnRoad : PBCodable  {
    int _featureIndex;
    int _vertexIndex;
    struct { 
        unsigned int vertexIndex : 1; 
    } _has;
}

@property int featureIndex;
@property BOOL hasVertexIndex;
@property int vertexIndex;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setFeatureIndex:(int)arg1;
- (int)featureIndex;
- (void)setHasVertexIndex:(BOOL)arg1;
- (void)setVertexIndex:(int)arg1;
- (int)vertexIndex;
- (BOOL)hasVertexIndex;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
