/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    TSUColor *mForegroundColor;
    TSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;

- (BOOL)isEqualToShading:(id)arg1;
- (void)setShading:(id)arg1;
- (void)setForeground:(id)arg1;
- (id)foreground;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackground:(id)arg1;
- (id)background;

@end
