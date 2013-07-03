/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIInnerGlowOrShadowFilter : CIFilter  {
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputRadius;
    CIColor *inputColor;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputOffset;
@property(retain) NSNumber * inputRange;
@property(retain) NSNumber * inputRadius;
@property(retain) CIColor * inputColor;

+ (id)customAttributes;

- (id)inputRange;
- (id)inputOffset;
- (void)setInputRange:(id)arg1;
- (void)setInputOffset:(id)arg1;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)inputColor;
- (void)setInputColor:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
