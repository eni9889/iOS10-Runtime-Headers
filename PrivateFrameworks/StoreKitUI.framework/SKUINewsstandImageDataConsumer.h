/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, UIColor, NSString;

@interface SKUINewsstandImageDataConsumer : SKUIImageDataConsumer <NSCopying> {
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    NSString *_imageString;
    struct CGSize { 
        float width; 
        float height; 
    } _iconSize;
    int _bindingEdge;
    int _bindingType;
}

@property(readonly) struct CGSize { float x1; float x2; } iconSize;
@property(retain) UIColor * backgroundColor;
@property int bindingEdge;
@property int bindingType;
@property(retain) SKUIColorScheme * colorScheme;

+ (id)purchasedConsumer;
+ (id)updatesConsumer;
+ (id)newsstandRoomConsumer;
+ (id)wishlistConsumer;
+ (id)mixedChartsConsumer;
+ (id)chartsConsumer;
+ (id)lockupConsumerWithSize:(int)arg1;
+ (id)roomConsumer;
+ (id)productPageConsumer;
+ (id)swooshConsumer;
+ (id)newsstandSwooshConsumer;
+ (id)giftThemeConsumer;
+ (id)giftResultConsumer;
+ (id)giftComposeConsumer;
+ (id)cardConsumer;
+ (id)smartBannerConsumer;

- (void)setBindingType:(int)arg1;
- (int)bindingType;
- (void)setBindingEdge:(int)arg1;
- (int)bindingEdge;
- (id)_borderImage;
- (id)imageForSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })iconSize;
- (id)imageForColor:(id)arg1;
- (id)imageForImage:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
