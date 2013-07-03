/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    long _SecCMSError;
    struct SecCmsMessageStr { } *_message;
    struct SecCmsDigestContextStr { } *_digest;
    NSArray *_signers;
    struct SecCmsSignedDataStr { } *_signedData;
    struct SecCmsEnvelopedDataStr { } *_envelopedData;
    BOOL _isEncrypted;
}

@property(readonly) long lastSecCMSError;
@property(readonly) NSArray * signers;


- (BOOL)isContentSigned;
- (BOOL)isContentEncrypted;
- (id)signers;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id*)arg2;
- (long)lastSecCMSError;
- (id)initWithPartData:(id)arg1 error:(id*)arg2;
- (id)signedData;
- (void)done;
- (id)data;
- (void)dealloc;
- (int)appendData:(id)arg1;

@end
