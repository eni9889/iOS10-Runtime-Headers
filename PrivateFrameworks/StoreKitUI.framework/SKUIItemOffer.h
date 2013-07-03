/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSMutableDictionary;

@interface SKUIItemOffer : NSObject <SKUICacheCoding> {
    NSString *_actionParameters;
    NSString *_buttonText;
    NSString *_confirmationText;
    long long _fileSize;
    NSString *_fileSizeText;
    float _price;
}

@property(readonly) NSString * actionParameters;
@property(readonly) NSString * buttonText;
@property(readonly) NSString * confirmationText;
@property(readonly) long long fileSize;
@property(readonly) NSString * fileSizeText;
@property(readonly) float price;
@property(readonly) NSMutableDictionary * cacheRepresentation;


- (id)fileSizeText;
- (id)confirmationText;
- (id)buttonText;
- (id)actionParameters;
- (id)initWithRedownloadToken:(id)arg1;
- (id)initWithOfferDictionary:(id)arg1;
- (void)_setFileSizeWithFlavors:(id)arg1;
- (void)_setFileSizeWithAssets:(id)arg1;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (float)price;
- (id)initWithLookupDictionary:(id)arg1;
- (void).cxx_destruct;
- (long long)fileSize;

@end
