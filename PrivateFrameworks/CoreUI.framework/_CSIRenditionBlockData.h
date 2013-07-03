/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CSIRenditionBlockData : NSObject  {
    int _pixelFormat;
    char *_data;
    unsigned int _nrows;
    unsigned long _rowbytes;
}


- (void)expandCSIBitmapData:(struct _csibitmap { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; }*)arg1 fromSlice:(struct _slice { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 makeReadOnly:(BOOL)arg3;
- (unsigned long)rowbytes;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2 pixelFormat:(int)arg3;
- (void)_makeReadOnly;
- (void)_freeImageBytes;
- (void)_allocateImageBytes;
- (const char *)bytes;
- (void)dealloc;

@end
