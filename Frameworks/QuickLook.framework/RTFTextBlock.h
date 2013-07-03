/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface RTFTextBlock : NSObject <NSCopying> {
    void *_propVals;
    unsigned int _propMask;
    unsigned int _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void *_blockPrimary;
    void *_blockSecondary;
}


- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (id)backgroundColor;
- (id)_attributeDescription;
- (void)setVerticalAlignment:(unsigned int)arg1;
- (void)setWidth:(float)arg1 type:(unsigned int)arg2 forLayer:(int)arg3;
- (unsigned int)contentWidthValueType;
- (float)contentWidth;
- (void)setContentWidth:(float)arg1 type:(unsigned int)arg2;
- (id)borderColorForEdge:(unsigned int)arg1;
- (unsigned int)verticalAlignment;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned int)arg2;
- (void)setWidth:(float)arg1 type:(unsigned int)arg2 forLayer:(int)arg3 edge:(unsigned int)arg4;
- (void)setValue:(float)arg1 type:(unsigned int)arg2 forDimension:(unsigned int)arg3;
- (unsigned int)_valueTypeForParameter:(unsigned int)arg1;
- (float)_valueForParameter:(unsigned int)arg1;
- (void)_setValue:(float)arg1 type:(unsigned int)arg2 forParameter:(unsigned int)arg3;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (void)_createFloatStorage;
- (void)_destroyFloatStorage;
- (unsigned int)valueTypeForDimension:(unsigned int)arg1;
- (unsigned int)widthValueTypeForLayer:(int)arg1 edge:(unsigned int)arg2;
- (float)valueForDimension:(unsigned int)arg1;
- (float)widthForLayer:(int)arg1 edge:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
