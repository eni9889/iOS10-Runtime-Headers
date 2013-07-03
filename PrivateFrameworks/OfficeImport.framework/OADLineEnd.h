/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLineEnd : OADProperties <NSCopying> {
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned int mIsTypeOverridden : 1;
    unsigned int mIsWidthOverridden : 1;
    unsigned int mIsLengthOverridden : 1;
}

+ (id)defaultProperties;

- (BOOL)isLengthOverridden;
- (BOOL)isTypeOverridden;
- (id)initWithDefaults;
- (id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
- (BOOL)isWidthOverridden;
- (void)setWidth:(int)arg1;
- (int)width;
- (void)setType:(int)arg1;
- (int)length;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setLength:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;

@end
