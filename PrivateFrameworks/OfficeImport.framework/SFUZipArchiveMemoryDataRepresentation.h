/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    NSData *mData;
}


- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
