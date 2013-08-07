/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableDictionary, NSMutableSet, NSString, VKPolylineOverlayPainter, NSMutableArray, VKLabelNavRoadGraph;

@interface VKLabelNavSupport : NSObject  {
    BOOL _needsLayout;
    BOOL _drawRoadSigns;
    VKPolylineOverlayPainter *_route;
    NSString *_currentLocationText;
    BOOL _isOnRoute;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeUserOffset;
    unsigned int _stepIndex;
    BOOL _checkOnRouteLabelsAlignment;
    BOOL _disableTileParseForOneLayout;
    NSMutableSet *_tiles;
    NSMutableSet *_pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    struct vector<std::__1::shared_ptr<vk::NavLabel>, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { 
        struct shared_ptr<vk::NavLabel> {} *__begin_; 
        struct shared_ptr<vk::NavLabel> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::NavLabel> *, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { 
            struct shared_ptr<vk::NavLabel> {} *__first_; 
        } __end_cap_; 
    } _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    int _countVisibleRoadSigns;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSString *_currentRoadName;
    int _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    BOOL _checkIfRouteSubrangeChanged;
    BOOL _useRouteSubrange;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeSubrangeStart;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeSubrangeEnd;
}

@property BOOL drawRoadSigns;
@property(retain) VKPolylineOverlayPainter * route;
@property(retain) NSString * currentLocationText;
@property(retain) NSString * currentRoadName;
@property(retain) NSString * currentShieldGroup;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;
@property(readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<vk::NavLabel>' */ struct * activeSigns; /* unknown property attribute:  vk_allocator<std::__1::shared_ptr<vk::NavLabel> > >=^{shared_ptr<vk::NavLabel>}}} */
@property(readonly) BOOL needsLayout;


- (id)route;
- (id)currentShieldGroup;
- (id)currentLocationText;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)setDrawRoadSigns:(BOOL)arg1;
- (BOOL)drawRoadSigns;
- (BOOL)isNavMode;
- (BOOL)_findRouteOverlappingJunctionFrom:(int)arg1 routeJunctions:(struct vector<RouteJunctionInfo, vk_allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x1; struct RouteJunctionInfo {} *x2; struct __compressed_pair<RouteJunctionInfo *, vk_allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x_3_1_1; } x3; }*)arg2 lookBackward:(BOOL)arg3 firstOverlap:(int*)arg4 secondOverlap:(int*)arg5;
- (id)currentRoadName;
- (void)_updateUniqueOffRouteRoads;
- (void)_initalizeCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadStarts;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3 labelCollisionEnabled:(BOOL)arg4;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 maxVisibleLabels:(unsigned int)arg3 useAllJunctions:(BOOL)arg4 placeShieldsFrontToBack:(BOOL)arg5;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 maxVisibleLabels:(unsigned int)arg3;
- (BOOL)_addJunctionsForTile:(id)arg1;
- (void)_reloadRouteJunctions;
- (BOOL)_updateActiveRouteRange;
- (BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)setCurrentShieldGroup:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)_updateCurrentRoadInfo;
- (void)_updateRoadsInGuidance;
- (void)_refreshGuidanceRoadNames;
- (unsigned char)computeRoutePositionMaskForPOIAtPixel:(const struct Vec2Imp<float> { float x1; float x2; }*)arg1 currentPositionMask:(unsigned char)arg2 context:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3;
- (const struct vector<std::__1::shared_ptr<vk::NavLabel>, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { struct shared_ptr<vk::NavLabel> {} *x1; struct shared_ptr<vk::NavLabel> {} *x2; struct __compressed_pair<std::__1::shared_ptr<vk::NavLabel> *, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > > { struct shared_ptr<vk::NavLabel> {} *x_3_1_1; } x3; }*)activeSigns;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (void)grabTilesFromScene:(id)arg1;
- (void)clearSceneIsMemoryWarning:(BOOL)arg1;
- (void)setRoute:(id)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)needsLayout;

@end