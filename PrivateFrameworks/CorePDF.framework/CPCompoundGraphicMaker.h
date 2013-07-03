/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPCluster, CPChunk;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {
    CPChunk *parentChunk;
    BOOL shapesAreVectorGraphics;
    unsigned int shapeCount;
    id *shapes;
    double pageSpread;
    CPCluster *cluster;
    unsigned int groupInfoCount;
    struct { unsigned int x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } *groupInfoArray;
    BOOL disposed;
}

+ (BOOL)makeCompoundGraphicsInZonesOf:(id)arg1;

- (BOOL)groupOverlappingGraphics;
- (BOOL)findClusterLevel;
- (BOOL)makeCompoundGraphicsFromShapeGroups;
- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)coalesceShapeGroups;
- (BOOL)makeCompoundGraphics;
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;
- (void)dispose;
- (void)finalize;
- (void)dealloc;

@end
