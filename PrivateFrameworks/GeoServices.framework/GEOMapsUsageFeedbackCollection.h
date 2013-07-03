/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceActionDetails;

@interface GEOMapsUsageFeedbackCollection : PBCodable  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _sessionRelativeTimestamp;
    int _actionType;
    GEOPlaceActionDetails *_placeActionDetails;
}

@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property int actionType;
@property double sessionRelativeTimestamp;
@property(readonly) BOOL hasPlaceActionDetails;
@property(retain) GEOPlaceActionDetails * placeActionDetails;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)placeActionDetails;
- (BOOL)hasPlaceActionDetails;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (double)sessionRelativeTimestamp;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setActionType:(int)arg1;
- (int)actionType;
- (void)copyTo:(id)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
