/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKEffectPropertyTexGen, NSString, NSMutableArray;

@interface GLKEffectPropertyTexture : GLKEffectProperty  {
    unsigned char _enabled;
    unsigned int _name;
    unsigned int _target;
    int _envMode;
    unsigned char _matrixEnabled;
    NSString *_filePath;
    int _textureIndex;
    char *_unit2dNameString;
    char *_unitCubeNameString;
    int _unit2dLoc;
    int _unitCubeLoc;
    NSMutableArray *_texGenArray;
    GLKEffectPropertyTexGen *_texGenS;
    GLKEffectPropertyTexGen *_texGenT;
    GLKEffectPropertyTexGen *_texGenR;
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    } _allFshMasks;
}

@property unsigned char enabled;
@property unsigned int name;
@property unsigned int target;
@property int envMode;
@property(readonly) GLKEffectPropertyTexGen * texGenS;
@property(readonly) GLKEffectPropertyTexGen * texGenT;
@property(readonly) GLKEffectPropertyTexGen * texGenR;
@property(readonly) NSMutableArray * texGenArray;
@property int textureIndex;
@property(readonly) NSString * filePath;
@property unsigned char matrixEnabled;
@property int unit2dLoc;
@property int unitCubeLoc;
@property char * unit2dNameString;
@property char * unitCubeNameString;
@property(readonly) unsigned char normalizedNormalsMask;
@property(readonly) unsigned char vPositionEyeMask;
@property(readonly) unsigned char vNormalEyeMask;
@property(readonly) unsigned char useTexCoordAttribMask;
@property(readonly) struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } allFshMasks;

+ (void)clearAllTexturingMasks:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg1 fshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg2;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (id)texGenArray;
- (void)setUnitCubeLoc:(int)arg1;
- (int)unitCubeLoc;
- (void)setUnit2dLoc:(int)arg1;
- (int)unit2dLoc;
- (char *)unitCubeNameString;
- (char *)unit2dNameString;
- (int)envMode;
- (unsigned char)matrixEnabled;
- (void)setMatrixEnabled:(unsigned char)arg1;
- (void)setEnvMode:(int)arg1;
- (id)texGenR;
- (id)texGenT;
- (id)texGenS;
- (void)setUnitCubeNameString:(char *)arg1;
- (void)setUnit2dNameString:(char *)arg1;
- (int)textureIndex;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })allFshMasks;
- (void)setShaderBindings;
- (void)initializeMasks;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)setTextureIndex:(int)arg1;
- (unsigned char)vPositionEyeMask;
- (unsigned char)vNormalEyeMask;
- (unsigned char)normalizedNormalsMask;
- (unsigned char)useTexCoordAttribMask;
- (void)dirtyAllUniforms;
- (void)setEnabled:(unsigned char)arg1;
- (unsigned char)enabled;
- (id)init;
- (void)setTarget:(unsigned int)arg1;
- (unsigned int)name;
- (void)bind;
- (void)dealloc;
- (id)description;
- (id)filePath;
- (unsigned int)target;
- (void)setName:(unsigned int)arg1;

@end
