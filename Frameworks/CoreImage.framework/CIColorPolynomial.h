/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter  {
    CIImage *inputImage;
    CIVector *inputRedCoefficients;
    CIVector *inputGreenCoefficients;
    CIVector *inputBlueCoefficients;
    CIVector *inputAlphaCoefficients;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputRedCoefficients;
@property(retain) CIVector * inputGreenCoefficients;
@property(retain) CIVector * inputBlueCoefficients;
@property(retain) CIVector * inputAlphaCoefficients;

+ (id)customAttributes;

- (id)inputAlphaCoefficients;
- (id)inputBlueCoefficients;
- (id)inputGreenCoefficients;
- (id)inputRedCoefficients;
- (void)setInputRedCoefficients:(id)arg1;
- (void)setInputGreenCoefficients:(id)arg1;
- (void)setInputBlueCoefficients:(id)arg1;
- (void)setInputAlphaCoefficients:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
