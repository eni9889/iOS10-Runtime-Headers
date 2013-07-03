/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADSolidFill : OADFill  {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)whiteFill;
+ (id)blackFill;
+ (id)defaultProperties;

- (void)setStyleColor:(id)arg1;
- (id)initWithDefaults;
- (BOOL)isColorOverridden;
- (id)color;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setColor:(id)arg1;

@end
