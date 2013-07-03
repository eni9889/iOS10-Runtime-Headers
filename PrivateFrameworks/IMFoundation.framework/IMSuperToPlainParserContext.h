/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSMutableString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext  {
    NSMutableString *_plainString;
    BOOL _extractLinks;
}

@property(readonly) NSString * plainString;


- (id)plainString;
- (id)initWithAttributedString:(id)arg1 extractLinks:(BOOL)arg2;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 characters:(id)arg4;
- (id)resultsForLogging;
- (id)name;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;

@end
