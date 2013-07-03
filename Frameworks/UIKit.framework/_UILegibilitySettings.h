/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor;

@interface _UILegibilitySettings : _UISettings  {
    int _style;
    NSString *_shadowCompositingFilterName;
    UIColor *_shadowColor;
    float _shadowStrength;
    float _outerGlowSize;
    float _outerGlowAlpha;
}

@property int style;
@property(copy) NSString * shadowCompositingFilterName;
@property(retain) UIColor * shadowColor;
@property float shadowStrength;
@property float outerGlowSize;
@property float outerGlowAlpha;

+ (id)sharedInstanceForStyle:(int)arg1;

- (void)setStyle:(int)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (int)style;
- (void)dealloc;
- (void)setOuterGlowAlpha:(float)arg1;
- (float)outerGlowAlpha;
- (void)setOuterGlowSize:(float)arg1;
- (float)outerGlowSize;
- (void)setShadowStrength:(float)arg1;
- (float)shadowStrength;
- (void)setShadowCompositingFilterName:(id)arg1;
- (id)shadowCompositingFilterName;

@end
