/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode  {
    OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (id)createMutableXMLString;
- (void)setCharacterEncoding:(id)arg1;
- (id)initWithRootElement:(id)arg1;
- (id)closingTagString;
- (id)openingTagString;
- (id)rootElement;
- (id)contentString;
- (id)XMLString;
- (void)setRootElement:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(id)arg1;

@end
