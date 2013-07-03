/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNullFileHandle : NSFileHandle  {
}


- (void)writeData:(id)arg1;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)setReadabilityHandler:(id)arg1;
- (id)readabilityHandler;
- (void)setWriteabilityHandler:(id)arg1;
- (id)writeabilityHandler;
- (int)fileDescriptor;
- (void)closeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (id)readDataOfLength:(unsigned int)arg1;
- (id)readDataToEndOfFile;
- (id)availableData;
- (unsigned long long)offsetInFile;

@end
