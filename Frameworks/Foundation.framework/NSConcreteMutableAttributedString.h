/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableRLEArray, NSMutableString;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString  {
    NSMutableString *mutableString;
    NSMutableRLEArray *mutableAttributes;
    struct { 
        unsigned int attributeFixingDisabled : 8; 
        unsigned int  : 24; 
    } fields;
}

+ (Class)_mutableStringClass;

- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)init;
- (unsigned int)length;
- (id)initWithString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)string;
- (void)finalize;
- (void)dealloc;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (id)_runArrayHoldingAttributes;
- (id)initWithAttributedString:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;

@end
