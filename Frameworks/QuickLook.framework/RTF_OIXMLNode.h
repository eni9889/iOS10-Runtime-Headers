/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString;

@interface RTF_OIXMLNode : NSObject <NSCopying> {
    unsigned int _kind;
    NSString *_name;
    id _value;
}

+ (id)textWithStringValue:(id)arg1;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString { }*)arg3;
+ (id)elementWithName:(id)arg1;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(struct __CFString { }*)arg5;

- (id)closingTagString;
- (id)openingTagString;
- (id)initWithKind:(unsigned int)arg1 name:(id)arg2 stringValue:(id)arg3;
- (id)contentString;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1;
- (id)XMLString;
- (id)initWithKind:(unsigned int)arg1;
- (id)stringValue;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)kind;
- (void)setStringValue:(id)arg1;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (void)setName:(id)arg1;

@end
