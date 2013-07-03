/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCopying, NSCoding> {
}

@property(readonly) BOOL isDownloadable;
@property(readonly) BOOL isDownloadableStoreOffer;
@property(readonly) BOOL isPurchasableStoreOffer;
@property(readonly) int preferredStoreOfferVariant;
@property(readonly) MPMediaLibrary * mediaLibrary;
@property(readonly) unsigned long long persistentID;
@property(readonly) MPMediaItem * representativeItem;

+ (BOOL)canFilterByProperty:(id)arg1;

- (BOOL)isPurchasableStoreOffer;
- (BOOL)isDownloadableStoreOffer;
- (id)completionOfferForVariant:(int)arg1;
- (id)buyOffer;
- (BOOL)isDownloadable;
- (id)buyOfferForVariant:(int)arg1;
- (int)preferredStoreOfferVariant;
- (void)invalidateCachedProperties;
- (id)valuesForProperties:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (id)mediaLibrary;
- (id)representativeItem;
- (unsigned long long)persistentID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
