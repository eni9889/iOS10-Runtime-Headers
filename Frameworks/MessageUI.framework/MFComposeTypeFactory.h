/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTypeFactory : NSObject  {
}

+ (id)subjectFromSubject:(id)arg1 withComposeType:(int)arg2;
+ (id)headersFromDelegate:(id)arg1;
+ (void)_setupForNewMessageWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForForwardWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForReplyAllWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForReplyWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_quoteFromModel:(id)arg1 delegate:(id)arg2;
+ (void)_addSignature:(BOOL)arg1 withDelegate:(id)arg2;
+ (void)_prependPreamble:(id)arg1 toBodyField:(id)arg2;
+ (void)_prependQuotedMarkup:(id)arg1 shouldIndent:(BOOL)arg2 toBodyField:(id)arg3;
+ (void)_setContent:(id)arg1 includeAttachments:(BOOL)arg2 shouldQuote:(BOOL)arg3 prependBlankLine:(BOOL)arg4 delegate:(id)arg5;
+ (id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(BOOL)arg2 prependBlankLine:(BOOL)arg3 delegate:(id)arg4;
+ (id)headersFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (id)messageFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (void)addAttachment:(id)arg1 prepend:(BOOL)arg2 withCompositionModel:(id)arg3 delegate:(id)arg4;
+ (void)setupWithContent:(id)arg1 delegate:(id)arg2;
+ (void)setupWithCompositionModel:(id)arg1 delegate:(id)arg2;
+ (unsigned int)imageScaleFromUserDefaults;
+ (id)addInlineAttachmentForInclusion:(id)arg1 onlyIfNecessary:(BOOL)arg2 delegate:(id)arg3;


@end
