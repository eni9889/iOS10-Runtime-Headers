/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface QLBasePreviewParts : QLPreviewParts  {
}

+ (int (*)())urlCallbackForUTI:(id)arg1;
+ (BOOL)isBundleURL:(id)arg1;
+ (int (*)())dataCallbackForUTI:(id)arg1 andSize:(unsigned int)arg2;
+ (BOOL)canConvertDocumentType:(id)arg1;

- (void)computePreview;

@end
