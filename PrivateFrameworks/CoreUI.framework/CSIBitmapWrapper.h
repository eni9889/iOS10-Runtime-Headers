/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSData;

@interface CSIBitmapWrapper : NSObject  {
    struct CGContext { } *_bitmap;
    NSData *_pixelData;
}


- (id)compressedData;
- (struct CGContext { }*)bitmapContext;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;
- (BOOL)getCompressedData:(id*)arg1 usedEncoding:(int*)arg2;
- (id)pixelData;
- (void)finalize;
- (void)dealloc;

@end
