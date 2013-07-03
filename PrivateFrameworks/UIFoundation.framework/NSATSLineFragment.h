/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject  {
    void *_line;
    NSATSTypesetter *_typesetter;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _glyphRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _characterRange;
    float _minPosition;
    float _maxPosition;
    long _elasticCharIndex;
    float _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    float _hyphenGlyphWidth;
    struct { 
        unsigned int _directionState : 2; 
        unsigned int _drawsOutside : 1; 
        unsigned int _isLineArray : 1; 
        unsigned int _reserved : 28; 
    } _flags;
}


- (long)_charIndexToBreakLineByWordWrappingAtIndex:(long)arg1 lineFragmentWidth:(float)arg2 hyphenate:(BOOL*)arg3;
- (int)resolvedLineBreakMode:(BOOL)arg1;
- (void)_flushCachedObjects;
- (id)_copyRenderingContextWithGlyphOrigin:(float)arg1;
- (void)saveWithGlyphOrigin:(float)arg1;
- (void)saveMorphedGlyphs:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)hasElasticRange;
- (float)lineWidthForType:(int)arg1;
- (void)justifyWithFactor:(float)arg1;
- (void)getTypographicLineHeight:(float*)arg1 baselineOffset:(float*)arg2 leading:(float*)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })characterRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRange;
- (void)layoutForStartingGlyphAtIndex:(unsigned int)arg1 characterIndex:(unsigned int)arg2 minPosition:(float)arg3 maxPosition:(float)arg4 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (id)initWithTypesetter:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_invalidate;

@end
