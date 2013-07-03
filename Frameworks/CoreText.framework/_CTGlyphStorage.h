/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface _CTGlyphStorage : NSObject  {
    long _count;
    const unsigned short *_glyphs;
    const struct CGSize { float x1; float x2; } *_advances;
    const unsigned int *_props;
    const int *_stringIndices;
}


- (void)sync;
- (void)moveGlyphsFromRange:(struct { int x1; int x2; })arg1 toIndex:(long)arg2;
- (void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2;
- (void)insertGlyphsAtRange:(struct { int x1; int x2; })arg1;
- (void)setAdvance:(struct CGSize { float x1; float x2; })arg1 atIndex:(long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2;
- (void*)refCon;
- (id)copyWithRange:(struct { int x1; int x2; })arg1;
- (id)initWithCount:(long)arg1;
- (void)puntStringIndicesInRange:(struct { int x1; int x2; })arg1 by:(long)arg2;
- (void)initGlyphStackWithCapacity:(long)arg1;
- (void)pushGlyphAtIndex:(long)arg1;
- (void)popGlyphAtIndex:(long)arg1;
- (void)disposeGlyphStack;
- (long)attachmentCountAtIndex:(long)arg1;
- (void)setStringIndex:(long)arg1 atIndex:(long)arg2;
- (void)setAttachmentCount:(long)arg1 atIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long)arg2;
- (BOOL)isEqual:(id)arg1;

@end
