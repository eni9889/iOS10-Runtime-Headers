/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFAnnotation, NSMutableString;

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
    NSMutableString *_characters;
    BOOL _parseError;
    UIPDFAnnotation *_annotation;
}

@property(retain) UIPDFAnnotation * annotation;
@property(readonly) BOOL parseError;


- (BOOL)parseError;
- (id)init;
- (void)dealloc;
- (void)setAnnotation:(id)arg1;
- (id)annotation;
- (void)parserDidStartDocument:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

@end
