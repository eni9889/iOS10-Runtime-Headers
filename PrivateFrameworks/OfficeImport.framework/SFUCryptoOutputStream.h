/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUCryptor, <SFUOutputStream>;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
    <SFUOutputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    BOOL mIsClosed;
    BOOL mComputeCrc32;
    unsigned int mCrc32;
}

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;

- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3;
- (id)closeLocalStream;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (BOOL)canSeek;
- (id)inputStream;
- (unsigned int)crc32;
- (long long)offset;
- (void)close;
- (void)dealloc;

@end
