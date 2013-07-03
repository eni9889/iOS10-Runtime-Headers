/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {
    WebHTMLRepresentationPrivate *_private;
}

+ (id)unsupportedTextMIMETypes;
+ (id)supportedImageMIMETypes;
+ (id)supportedMIMETypes;
+ (id)supportedNonImageMIMETypes;

- (id)title;
- (BOOL)canSaveAsWebArchive;
- (id)documentSource;
- (BOOL)canProvideDocumentSource;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned int*)arg3 resultIsInCellAbove:(BOOL*)arg4;
- (BOOL)_isDisplayingWebArchive;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (id)DOMDocument;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)controlsInForm:(id)arg1;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;
- (id)formForElement:(id)arg1;
- (id)currentForm;
- (BOOL)elementIsPassword:(id)arg1;
- (BOOL)elementDoesAutoComplete:(id)arg1;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (BOOL)formElementLooksLikeCreditCardNumberField:(id)arg1;
- (BOOL)formElementLooksLikeSecurityCodeField:(id)arg1;

@end
