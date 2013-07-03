/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSString;

@interface GEORPCorrectedLabel : PBCodable  {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; } *_featureHandles;
    unsigned int _featureHandlesCount;
    unsigned int _featureHandlesSpace;
    NSString *_correctedValue;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
}

@property(readonly) BOOL hasOriginalValue;
@property(retain) NSString * originalValue;
@property(retain) NSString * correctedValue;
@property(readonly) BOOL hasFeatureRegion;
@property(retain) GEOMapRegion * featureRegion;
@property(readonly) unsigned int featureHandlesCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }* featureHandles;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setFeatureHandles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)arg1 count:(unsigned int)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)featureHandles;
- (void)addFeatureHandle:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })featureHandleAtIndex:(unsigned int)arg1;
- (unsigned int)featureHandlesCount;
- (id)featureRegion;
- (BOOL)hasFeatureRegion;
- (id)correctedValue;
- (id)originalValue;
- (BOOL)hasOriginalValue;
- (void)clearFeatureHandles;
- (void)setFeatureRegion:(id)arg1;
- (void)setCorrectedValue:(id)arg1;
- (void)setOriginalValue:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
