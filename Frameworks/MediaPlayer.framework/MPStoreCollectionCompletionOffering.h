/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPMediaQuery, MPStoreOfferMediaItemCollection;

@interface MPStoreCollectionCompletionOffering : NSObject  {
    MPMediaQuery *_localItemsQuery;
    int _preferredStoreOfferVariant;
    MPStoreOfferMediaItemCollection *_offeredCollection;
    MPStoreOfferMediaItemCollection *_mergedCollection;
}

@property(readonly) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection;
@property(readonly) NSArray * localItems;
@property(readonly) int preferredStoreOfferVariant;
@property(readonly) MPStoreOfferMediaItemCollection * offeredCollection;
@property(readonly) MPStoreOfferMediaItemCollection * mergedCollection;


- (id)offeredCollection;
- (id)localItems;
- (int)preferredStoreOfferVariant;
- (id)itemsWithCompletionsCollection;
- (id)mergedCollection;
- (id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(int)arg3;
- (void).cxx_destruct;

@end
