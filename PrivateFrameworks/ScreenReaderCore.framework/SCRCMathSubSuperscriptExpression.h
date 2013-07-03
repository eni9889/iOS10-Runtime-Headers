/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCMathExpression;

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression  {
    SCRCMathExpression *_base;
    SCRCMathExpression *_subscript;
    SCRCMathExpression *_superscript;
}

@property(retain) SCRCMathExpression * base;
@property(retain) SCRCMathExpression * subscript;
@property(retain) SCRCMathExpression * superscript;


- (id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id*)arg3;
- (id)superscript;
- (id)subscript;
- (void)setSuperscript:(id)arg1;
- (void)setSubscript:(id)arg1;
- (BOOL)isNumber;
- (BOOL)isBaseSubSuperscript;
- (BOOL)isRangeSubSuperscript;
- (id)mathMLString;
- (unsigned int)fractionLevel;
- (id)latexMathModeDescription;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (void)setBase:(id)arg1;
- (id)base;
- (id)initWithDictionary:(id)arg1;

@end
