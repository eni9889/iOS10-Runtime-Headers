/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPStoreOfferContentRating, NSArray, MPMediaQuery, NSDictionary, MPMediaItemCollection;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection  {
    NSDictionary *_storeLookupPropertyValues;
    NSArray *_unmergedStoreMediaItems;
    MPMediaQuery *_localItemsQuery;
    MPMediaItemCollection *_localCollection;
    BOOL _hasHiddenRestrictedContent;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_collectionContentRating;
}

@property(readonly) NSArray * items;
@property(readonly) NSArray * itemsByRemovingStoreOffers;
@property(readonly) NSArray * itemsByRemovingLocalItems;
@property(readonly) BOOL isCollectionOfferPresentable;

+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2;
+ (id)childItemIDsForLookupCollectionPropertyValues:(id)arg1;
+ (int)offerPassTypeForLookupCollectionPropertyValues:(id)arg1;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1;
+ (id)defaultPropertyValues;

- (BOOL)isCollectionOfferPresentable;
- (BOOL)isCheaperToPurchaseIndividualItems;
- (BOOL)_hasRestrictedContent;
- (id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(int)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4;
- (BOOL)_checkIsUsableOffer;
- (void)_loadLocalCollection;
- (BOOL)hasPurchasableStoreOfferItemsForVariant:(int)arg1;
- (BOOL)hasDownloadableStoreOfferItemsForVariant:(int)arg1;
- (id)itemsByRemovingStoreOffers;
- (BOOL)isDownloadable;
- (id)_lookupOfferDictionaries;
- (BOOL)_offeredItemAlreadyExists;
- (id)buyOfferForVariant:(int)arg1;
- (id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(int)arg2;
- (int)preferredStoreOfferVariant;
- (id)itemsByRemovingLocalItems;
- (id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(int)arg2;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
