/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSData;

@interface VGLBytesTexture : VGLTexture  {
    NSData *_data;
    int _internalFormat;
    int _width;
    int _height;
    unsigned int _pixelFormat;
    unsigned int _pixelType;
}


- (id)initWithData:(id)arg1 internalFormat:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 pixelFormat:(unsigned int)arg4 pixelType:(unsigned int)arg5;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;
- (void)dealloc;

@end
