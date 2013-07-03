/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIConvolution9Vertical : CIFilter  {
    CIImage *inputImage;
    CIVector *inputWeights;
    NSNumber *inputBias;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputWeights;
@property(retain) NSNumber * inputBias;

+ (id)customAttributes;

- (id)inputBias;
- (id)inputWeights;
- (void)setInputBias:(id)arg1;
- (void)setInputWeights:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
