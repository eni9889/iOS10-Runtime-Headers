/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUBufferedInputStream>;

@interface SFUZipRecordInputStream : NSObject  {
    <SFUBufferedInputStream> *mInput;
    const char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}


- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;

@end
