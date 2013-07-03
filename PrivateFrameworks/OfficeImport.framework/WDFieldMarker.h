/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties;

@interface WDFieldMarker : WDRun  {
    WDCharacterProperties *mProperties;
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    unsigned int mZombieEmbed : 1;
    unsigned int mResultDirty : 1;
    unsigned int mResultEdited : 1;
    unsigned int mLocked : 1;
    unsigned int mPrivateResult : 1;
    unsigned int mNested : 1;
    unsigned int mHasSeparator : 1;
}


- (void)setHasSeparator:(BOOL)arg1;
- (BOOL)hasSeparator;
- (void)setNested:(BOOL)arg1;
- (BOOL)nested;
- (void)setPrivateResult:(BOOL)arg1;
- (BOOL)privateResult;
- (BOOL)locked;
- (void)setResultEdited:(BOOL)arg1;
- (BOOL)resultEdited;
- (void)setResultDirty:(BOOL)arg1;
- (BOOL)resultDirty;
- (void)setZombieEmbed:(BOOL)arg1;
- (BOOL)zombieEmbed;
- (int)fieldPosition;
- (void)clearProperties;
- (void)setFieldType:(unsigned char)arg1;
- (void)setFieldMarkerType:(int)arg1;
- (void)setFieldPosition:(int)arg1;
- (int)runType;
- (int)fieldMarkerType;
- (unsigned char)fieldType;
- (id)initWithParagraph:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)dealloc;
- (id)properties;

@end
