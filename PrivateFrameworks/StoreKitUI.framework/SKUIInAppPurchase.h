/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSMutableDictionary;

@interface SKUIInAppPurchase : NSObject <SKUICacheCoding> {
    NSString *_formattedPrice;
    NSString *_name;
}

@property(readonly) NSString * formattedPrice;
@property(readonly) NSString * name;
@property(readonly) NSMutableDictionary * cacheRepresentation;


- (id)initWithInAppPurchaseDictionary:(id)arg1;
- (id)formattedPrice;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)name;
- (void).cxx_destruct;

@end
