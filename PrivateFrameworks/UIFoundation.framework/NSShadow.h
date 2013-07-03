/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSShadow : NSObject <NSCopying, NSCoding> {
    unsigned int _shadowFlags;
    id _shadowColor;
    float _shadowBlurRadius;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
}

@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowBlurRadius;
@property(retain) id shadowColor;

+ (id)shadow;
+ (id)defaultShadowColor;
+ (void)initialize;

- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (id)initWithShadow:(id)arg1;
- (float)shadowBlurRadius;
- (void)setShadowBlurRadius:(float)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
