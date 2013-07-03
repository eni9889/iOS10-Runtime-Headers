/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPRegion;

@interface CPRegion : CPChunk  {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}


- (void)setNextRegion:(id)arg1;
- (id)nextRegion;
- (BOOL)isZone;
- (void)setIsCompoundShape:(BOOL)arg1;
- (BOOL)isCompoundShape;
- (BOOL)isBodyZone;
- (BOOL)isTableCellRegion;
- (void)setIsTextRegion:(BOOL)arg1;
- (BOOL)isTextRegion;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (BOOL)isIndivisible;
- (void)accept:(id)arg1;
- (void)setOrder:(int)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (BOOL)isRotated;
- (int)order;

@end
