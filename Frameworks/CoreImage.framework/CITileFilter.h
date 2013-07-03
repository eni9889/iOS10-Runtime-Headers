/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CITileFilter : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputAngle;
@property(retain) NSNumber * inputWidth;

+ (id)customAttributes;

- (id)inputWidth;
- (void)setInputWidth:(id)arg1;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)_kernel_source;
- (id)_kernel_name;
- (void)setInputAngle:(id)arg1;
- (id)inputAngle;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (void)setDefaults;

@end
