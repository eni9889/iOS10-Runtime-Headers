/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, NSNumber, NSMutableDictionary;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
    int _allowedRetryCount;
    BOOL _allowsExpiredBags;
    int _bagType;
    NSMutableDictionary *_httpHeaders;
    BOOL _ignoresCaches;
    NSNumber *_userIdentifier;
    BOOL _usesCachedBagsOnly;
}

@property int allowedRetryCount;
@property int bagType;
@property(readonly) NSString * cacheKey;
@property BOOL ignoresCaches;
@property(retain) NSNumber * userIdentifier;
@property(copy) NSDictionary * allHTTPHeaders;
@property BOOL allowsExpiredBags;
@property BOOL usesCachedBagsOnly;

+ (id)contextWithBagType:(int)arg1;

- (BOOL)allowsExpiredBags;
- (id)allHTTPHeaders;
- (BOOL)ignoresCaches;
- (BOOL)usesCachedBagsOnly;
- (void)setUsesCachedBagsOnly:(BOOL)arg1;
- (void)setAllowsExpiredBags:(BOOL)arg1;
- (void)setAllHTTPHeaders:(id)arg1;
- (int)bagType;
- (id)userIdentifier;
- (int)allowedRetryCount;
- (void)setIgnoresCaches:(BOOL)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setBagType:(int)arg1;
- (void)setAllowedRetryCount:(int)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)cacheKey;

@end
