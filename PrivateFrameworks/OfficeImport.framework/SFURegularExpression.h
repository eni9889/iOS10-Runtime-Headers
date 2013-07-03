/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {
    NSString *_expressionString;
    void *_reserved;
}

+ (id)regularExpressionWithString:(id)arg1;
+ (void)initialize;

- (struct _NSRange { unsigned int x1; unsigned int x2; })matchedRangeForString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 subexpressionRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 count:(unsigned int)arg4;
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })matchedRangeForCString:(const char *)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 subexpressionRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 count:(unsigned int)arg4;
- (unsigned long)numberOfSubexpressions;
- (id)expressionString;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExpressionString:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
