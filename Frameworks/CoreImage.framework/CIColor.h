/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColor : NSObject <NSCoding, NSCopying> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithString:(id)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithSRGBRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)colorWithSRGBRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (struct CGColor { }*)CGColor;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (float)alpha;
- (float)blue;
- (float)green;
- (float)red;
- (id)stringRepresentation;
- (struct CGColorSpace { }*)colorSpace;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGColor { }*)cgColor;
- (unsigned long)numberOfComponents;
- (const float*)components;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;

@end
