/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument;

@interface WDCharacterProperties : NSObject  {
    WDDocument *mDocument;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; int x8; int x9; int x10; id x11; id x12; id x13; id x14; int x15; int x16; int x17; short x18; short x19; id x20; id x21; float x22; unsigned short x23; unsigned short x24; unsigned short x25; unsigned short x26; unsigned short x27; unsigned short x28; unsigned short x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; unsigned char x36; unsigned char x37; int x38; unsigned char x39; unsigned char x40; BOOL x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned short x50; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; unsigned int x111 : 1; unsigned int x112 : 1; unsigned int x113 : 1; unsigned int x114 : 1; unsigned int x115 : 1; unsigned int x116 : 1; unsigned int x117 : 1; unsigned int x118 : 1; unsigned int x119 : 1; unsigned int x120 : 1; unsigned int x121 : 1; } *mOriginalProperties;
    struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; int x8; int x9; int x10; id x11; id x12; id x13; id x14; int x15; int x16; int x17; short x18; short x19; id x20; id x21; float x22; unsigned short x23; unsigned short x24; unsigned short x25; unsigned short x26; unsigned short x27; unsigned short x28; unsigned short x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; unsigned char x36; unsigned char x37; int x38; unsigned char x39; unsigned char x40; BOOL x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned short x50; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; unsigned int x111 : 1; unsigned int x112 : 1; unsigned int x113 : 1; unsigned int x114 : 1; unsigned int x115 : 1; unsigned int x116 : 1; unsigned int x117 : 1; unsigned int x118 : 1; unsigned int x119 : 1; unsigned int x120 : 1; unsigned int x121 : 1; } *mTrackedProperties;
}

+ (int)languageFromString:(id)arg1;
+ (BOOL)languageIsArabicOrHebrew:(int)arg1;
+ (BOOL)languageIsCJK:(int)arg1;
+ (BOOL)languageIsChinese:(int)arg1;
+ (SEL)fontOverriddenSelectorForLanguageType:(int)arg1;
+ (SEL)fontSelectorForLanguageType:(int)arg1;

- (BOOL)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2;
- (void)copyPropertiesInto:(id)arg1;
- (BOOL)isBracketTwoLinesInOneOverridden;
- (int)bracketTwoLinesInOne;
- (BOOL)isTwoLinesInOneOverridden;
- (BOOL)twoLinesInOne;
- (BOOL)isCompressHorizontalInVerticalOverridden;
- (BOOL)compressHorizontalInVertical;
- (BOOL)isHorizontalInVerticalOverridden;
- (BOOL)horizontalInVertical;
- (BOOL)isOffsetToPictureDataOverridden;
- (void)setOffsetToPictureData:(int)arg1;
- (int)offsetToPictureData;
- (BOOL)isObjectIDForOle2Overridden;
- (void)setObjectIDForOle2:(int)arg1;
- (int)objectIDForOle2;
- (BOOL)isOle2Overridden;
- (void)setOle2:(BOOL)arg1;
- (BOOL)ole2;
- (BOOL)isEmbeddedObjectOverridden;
- (void)setEmbeddedObject:(BOOL)arg1;
- (BOOL)embeddedObject;
- (BOOL)formattingChangedDifferentFrom:(id)arg1;
- (BOOL)editDifferentFrom:(id)arg1;
- (BOOL)deletionDifferentFrom:(id)arg1;
- (BOOL)isEditDateOverridden;
- (BOOL)isDeletionDateOverridden;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (BOOL)isEditedOverridden;
- (int)edited;
- (BOOL)isShadow2010Overridden;
- (void)setShadow2010:(id)arg1;
- (id)shadow2010;
- (BOOL)isReflectionOverridden;
- (void)setReflection:(id)arg1;
- (id)reflection;
- (BOOL)isShadow2010OpacityOverridden;
- (void)setShadow2010Opacity:(float)arg1;
- (float)shadow2010Opacity;
- (BOOL)isFontOverriddenForLanguageType:(int)arg1;
- (id)fontForLanguageType:(int)arg1;
- (void)removeEmptyFormattingChanges:(id)arg1;
- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (BOOL)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2;
- (BOOL)editDifferentFrom:(id)arg1 mode:(int)arg2;
- (BOOL)deletionDifferentFrom:(id)arg1 mode:(int)arg2;
- (BOOL)isSpecialCharacter;
- (BOOL)isSpecialCharacterOverridden;
- (BOOL)isColorAuto;
- (BOOL)isColorAutoOverridden;
- (int)emphasisMark;
- (BOOL)isEmphasisMarkOverridden;
- (BOOL)isLowerCase;
- (BOOL)isLowerCaseOverridden;
- (BOOL)isHighlightColorOverridden;
- (BOOL)isHighlight;
- (BOOL)isHighlightOverridden;
- (int)ligature;
- (BOOL)isLigatureOverridden;
- (BOOL)isShadowOverridden;
- (int)imprint;
- (BOOL)isImprintOverridden;
- (int)embossed;
- (BOOL)isEmbossedOverridden;
- (BOOL)isOutlineOverridden;
- (unsigned short)fontSizeForBiText;
- (BOOL)isFontSizeForBiTextOverridden;
- (int)languageForBiText;
- (BOOL)isLanguageForBiTextOverridden;
- (int)languageForFarEast;
- (BOOL)isLanguageForFarEastOverridden;
- (int)languageForDefaultText;
- (BOOL)isLanguageForDefaultTextOverridden;
- (BOOL)isKerningOverridden;
- (BOOL)isPositionOverridden;
- (BOOL)isSpacingOverridden;
- (void)setLigature:(int)arg1;
- (id)underlineColor;
- (BOOL)isUnderlineColorOverridden;
- (int)reverseBooleanProperty:(int)arg1;
- (unsigned short)symbolCharacter;
- (BOOL)isSymbolCharacterOverridden;
- (BOOL)isSymbolFontOverridden;
- (id)farEastFont;
- (BOOL)isFarEastFontOverridden;
- (id)extendedFont;
- (BOOL)isExtendedFontOverridden;
- (BOOL)isBorderOverridden;
- (BOOL)isAnythingOverriddenIn:(struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; int x8; int x9; int x10; id x11; id x12; id x13; id x14; int x15; int x16; int x17; short x18; short x19; id x20; id x21; float x22; unsigned short x23; unsigned short x24; unsigned short x25; unsigned short x26; unsigned short x27; unsigned short x28; unsigned short x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; unsigned char x36; unsigned char x37; int x38; unsigned char x39; unsigned char x40; BOOL x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned short x50; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; unsigned int x111 : 1; unsigned int x112 : 1; unsigned int x113 : 1; unsigned int x114 : 1; unsigned int x115 : 1; unsigned int x116 : 1; unsigned int x117 : 1; unsigned int x118 : 1; unsigned int x119 : 1; unsigned int x120 : 1; unsigned int x121 : 1; }*)arg1;
- (void)clearBaseStyle;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (int)formattingChanged;
- (BOOL)isFormattingChangedOverridden;
- (int)charPositionOfPictureBulletInBookmark;
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
- (BOOL)isListCharacterPictureBullet;
- (BOOL)isListCharacterPictureBulletOverridden;
- (BOOL)isAnythingOverridden;
- (int)resolveMode;
- (void)setFontSizeForBiText:(unsigned short)arg1;
- (void)setLanguageForBiText:(int)arg1;
- (void)setLanguageForFarEast:(int)arg1;
- (void)setCharPositionOfPictureBulletInBookmark:(int)arg1;
- (void)setListCharacterPictureBullet:(BOOL)arg1;
- (void)setSpecialCharacter:(BOOL)arg1;
- (void)setFormattingChanged:(int)arg1;
- (void)setEdited:(int)arg1;
- (void)setLanguageForDefaultText:(int)arg1;
- (void)setColorAuto:(BOOL)arg1;
- (void)setEmphasisMark:(int)arg1;
- (void)setLowerCase:(BOOL)arg1;
- (void)setSmallCaps:(int)arg1;
- (void)setDoubleStrikeThrough:(int)arg1;
- (void)setStrikeThrough:(int)arg1;
- (void)setSymbolCharacter:(unsigned short)arg1;
- (void)setBracketTwoLinesInOne:(int)arg1;
- (void)setTwoLinesInOne:(BOOL)arg1;
- (void)setCompressHorizontalInVertical:(BOOL)arg1;
- (void)setHorizontalInVertical:(BOOL)arg1;
- (void)setUnderlineColor:(id)arg1;
- (void)setImprint:(int)arg1;
- (void)setEmbossed:(int)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (id)editDate;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (void)setEditDate:(id)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (id)deletionDate;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setFarEastFont:(id)arg1;
- (void)setExtendedFont:(id)arg1;
- (id)mutableShading;
- (id)mutableBorder;
- (void)setResolveMode:(int)arg1;
- (void)setRightToLeft:(int)arg1;
- (void)setSymbolFont:(id)arg1;
- (void)setCaps:(int)arg1;
- (void)setSpacing:(short)arg1;
- (void)setHighlight:(BOOL)arg1;
- (void)setUnderline:(int)arg1;
- (short)spacing;
- (BOOL)isColorOverridden;
- (int)caps;
- (BOOL)isCapsOverridden;
- (int)smallCaps;
- (BOOL)isSmallCapsOverridden;
- (int)underline;
- (BOOL)isUnderlineOverridden;
- (BOOL)isFontOverridden;
- (BOOL)isVerticalAlignOverridden;
- (BOOL)isFontSizeOverridden;
- (int)doubleStrikeThrough;
- (BOOL)isDoubleStrikeThroughOverridden;
- (int)strikeThrough;
- (BOOL)isStrikeThroughOverridden;
- (BOOL)isItalicOverridden;
- (BOOL)isBoldOverridden;
- (id)shading;
- (BOOL)isShadingOverridden;
- (int)rightToLeft;
- (BOOL)isRightToLeftOverridden;
- (id)baseStyle;
- (BOOL)isBaseStyleOverridden;
- (BOOL)isHiddenOverridden;
- (BOOL)isDeletedOverridden;
- (void)setHighlightColor:(int)arg1;
- (void)setDeleted:(int)arg1;
- (int)deleted;
- (int)highlightColor;
- (void)setBold:(int)arg1;
- (void)setItalic:(int)arg1;
- (int)italic;
- (int)bold;
- (void)setBaseStyle:(id)arg1;
- (void)setShadow:(int)arg1;
- (void)setHidden:(int)arg1;
- (void)setVerticalAlign:(int)arg1;
- (int)verticalAlign;
- (void)setOutline:(int)arg1;
- (int)outline;
- (id)border;
- (id)document;
- (unsigned short)fontSize;
- (id)font;
- (int)hidden;
- (void)setPosition:(short)arg1;
- (id)color;
- (int)shadow;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)kerning;
- (void)setKerning:(unsigned short)arg1;
- (id)initWithDocument:(id)arg1;
- (id)symbolFont;
- (void)setFontSize:(unsigned short)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (short)position;

@end
