/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <GEOMapAccessRestrictions>, NSObject<OS_dispatch_queue>;

@interface GEOMapAccess : GEOMapRequestManager  {
    unsigned int _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileStyle;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    <GEOMapAccessRestrictions> *_restrictions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _tileErrorHandler;

}

@property(readonly) unsigned int zoomLevel;
@property(readonly) int tileSize;
@property(readonly) int tileScale;
@property(readonly) int tileStyle;
@property(readonly) BOOL allowsNetworkTileLoad;
@property <GEOMapAccessRestrictions> * restrictions;
@property(copy) id tileErrorHandler;

+ (id)realisticMap;
+ (BOOL)supportsRealisticMap;

- (id)findTilesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 tileHander:(id)arg3 completionHandler:(id)arg4;
- (void)setTileErrorHandler:(id)arg1;
- (id)tileErrorHandler;
- (int)tileStyle;
- (int)tileScale;
- (id)buildMapEdgeFrom:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 edgeHandler:(id)arg2;
- (id)findEdgesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 edgeHandler:(id)arg3 completionHandler:(id)arg4;
- (id)findClosestRoadAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id)arg2 completionHandler:(id)arg3;
- (id)findClosestNamedFeaturesAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id)arg2 pointHandler:(id)arg3 polygonHandler:(id)arg4 completionHandler:(id)arg5;
- (BOOL)allowsNetworkTileLoad;
- (id)initWithZoomLevel:(unsigned int)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileStyle:(int)arg4;
- (void)setCallbackQueue:(id)arg1;
- (unsigned int)zoomLevel;
- (void)setRestrictions:(id)arg1;
- (id)restrictions;
- (int)tileSize;
- (void)dealloc;
- (id)callbackQueue;

@end
