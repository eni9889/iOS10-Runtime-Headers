/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPersistentCache, NSString, NSObject<OS_dispatch_queue>, SSSQLiteDatabase;

@interface SSDatabaseCache : NSObject  {
    unsigned int _maximumInlineBlobSize;
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSPersistentCache *_persistentCache;
    SSSQLiteDatabase *_database;
    Class _cacheEntryClass;
}

@property unsigned int maximumInlineBlobSize;


- (void)setMaximumInlineBlobSize:(unsigned int)arg1;
- (id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2;
- (id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5;
- (int)clearRetiredData;
- (void)clearCacheForLookupKey:(id)arg1;
- (unsigned int)maximumInlineBlobSize;
- (id)cacheEntryForLookupKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4;
- (BOOL)_setupDatabase;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;
- (id)statistics;
- (void)dealloc;
- (id)description;
- (void)clear;

@end
