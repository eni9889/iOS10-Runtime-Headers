/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController  {
    int _giftCategory;
    SKUIItem *_item;
}

@property(readonly) int giftCategoryApps;
@property(readonly) int giftCategoryBooks;
@property(readonly) int giftCategoryMedia;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (int)giftCategoryMedia;
- (int)giftCategoryBooks;
- (int)giftCategoryApps;
- (void)setProductGiftItem:(id)arg1;
- (void)setCreditGiftStyle:(int)arg1;
- (id)newNativeViewController;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;

@end
