/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer  {
    unsigned char _lastEncoded;
    unsigned long _required;
    BOOL _forTextPart;
    BOOL _badlyEncoded;
}

@property BOOL forTextPart;


- (BOOL)forTextPart;
- (void)setForTextPart:(BOOL)arg1;
- (void)done;
- (int)appendData:(id)arg1;

@end
