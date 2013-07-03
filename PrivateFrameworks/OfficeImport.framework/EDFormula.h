/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFormula : NSObject <EDFormulaBuilding> {
    struct __CFData { } *mPackedData;
}

+ (id)messageForWarning:(int)arg1;
+ (id)formula;

- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(unsigned int*)arg2;
- (bool)isSharedFormula;
- (void)updateCleanedWithEvaluationStack:(bool)arg1;
- (bool)isCleanedWithEvaluationStack;
- (void)updateContainsRelativeReferences:(bool)arg1;
- (bool)isContainsRelativeReferences;
- (void)setWarningParameter:(id)arg1;
- (id)warningParameter;
- (id)warning;
- (void)setOriginalFormulaString:(id)arg1;
- (bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;
- (id)initWithFormula:(id)arg1;
- (id)saveArgs:(unsigned int)arg1 andDelete:(BOOL)arg2;
- (bool)removeTokenAtIndex:(unsigned int)arg1;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;
- (struct EDToken { unsigned short x1; unsigned int x2; }*)tokenAtIndex:(unsigned int)arg1;
- (int)warningType;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertToIntersect:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1;
- (BOOL)insertExternalName:(unsigned int)arg1 withLink:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (BOOL)convertRefs:(unsigned int)arg1 toTypes:(int*)arg2;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (bool)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (struct ChVector<XlPtg *> { struct XlPtg {} **x1; struct XlPtg {} **x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)xlPtgs;
- (bool)isBaseFormula;
- (bool)copyTokenFromXlPtg:(struct XlPtg { char *x1; int x2; int x3; unsigned int x4; unsigned short x5; }*)arg1;
- (void)populateXlPtg:(struct XlPtg { char *x1; int x2; int x3; unsigned int x4; unsigned short x5; }*)arg1 index:(unsigned int)arg2;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;
- (id)originalFormulaString;
- (void)setCleaned:(bool)arg1;
- (bool)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;
- (void)removeAllTokens;
- (bool)isCleaned;
- (bool)isSupportedFormula;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int*)arg2;
- (void)setWarning:(int)arg1;
- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int*)arg3;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (bool)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;
- (unsigned int)tokenCount;
- (id)init;
- (void)dealloc;

@end
