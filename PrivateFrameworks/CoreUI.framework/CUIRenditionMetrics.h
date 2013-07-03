/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionMetrics : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    struct CGSize { 
        float width; 
        float height; 
    } _edgeBottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    } _edgeTopRightMargin;
    struct CGSize { 
        float width; 
        float height; 
    } _alignmentBottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    } _alignmentTopRightMargin;
    float _scale;
    struct crmFlags { 
        unsigned int scalesVertically : 1; 
        unsigned int scalesHorizontally : 1; 
        unsigned int reserved : 14; 
    } _crmFlags;
}


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insetRectWithMetrics:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })edgeRect;
- (BOOL)scalesHorizontally;
- (BOOL)scalesVertically;
- (struct CGSize { float x1; float x2; })alignmentTopRightMargin;
- (struct CGSize { float x1; float x2; })alignmentBottomLeftMargin;
- (struct CGSize { float x1; float x2; })edgeTopRightMargin;
- (struct CGSize { float x1; float x2; })edgeBottomLeftMargin;
- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1 edgeBottomLeft:(struct CGSize { float x1; float x2; })arg2 edgeTopRight:(struct CGSize { float x1; float x2; })arg3 alignmentBottomLeft:(struct CGSize { float x1; float x2; })arg4 alignmentTopRight:(struct CGSize { float x1; float x2; })arg5 scalesVertically:(BOOL)arg6 scalesHorizontally:(BOOL)arg7 scale:(float)arg8;
- (struct CGSize { float x1; float x2; })imageSize;
- (float)scale;

@end
