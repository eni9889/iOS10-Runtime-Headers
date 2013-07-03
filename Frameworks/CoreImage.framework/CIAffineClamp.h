/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSValue;

@interface CIAffineClamp : CIFilter  {
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property(retain) CIImage * inputImage;
@property(retain) NSValue * inputTransform;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputTransform;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (void)setInputTransform:(id)arg1;
- (id)outputImage;
- (void)setDefaults;

@end
