/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSString, NSMutableIndexSet, NSMutableSet, NSMutableDictionary;

@interface PLFileSystemAssetImporter : NSObject  {
    PLPhotoLibrary *_photoLibrary;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    BOOL _hasProcessedAnyAssets;
    NSMutableSet *_existingUUIDs;
    NSMutableDictionary *_existingUUIDsByPath;
    NSMutableDictionary *_existingOIDsByUUID;
    unsigned int _thumbnailBatchFetchSize;
}

@property(retain) NSMutableSet * existingUUIDs;
@property(retain) NSMutableDictionary * existingUUIDsByPath;
@property(retain) NSMutableDictionary * existingOIDsByUUID;
@property unsigned int thumbnailBatchFetchSize;


- (id)existingOIDsByUUID;
- (id)existingUUIDsByPath;
- (id)existingUUIDs;
- (void)addAvailableThumbnailIndex:(unsigned int)arg1;
- (id)addAssetWithURLs:(id)arg1;
- (unsigned int)thumbnailBatchFetchSize;
- (unsigned int)nextThumbnailIndex;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (BOOL)setupVideoAsset:(id)arg1 withURL:(id)arg2;
- (BOOL)setupPhotoAsset:(id)arg1 withURL:(id)arg2;
- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2;
- (id)assetURLisInDatabase:(id)arg1;
- (void)setThumbnailBatchFetchSize:(unsigned int)arg1;
- (id)addAssetWithURLs:(id)arg1 forceInsert:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (void)setExistingOIDsByUUID:(id)arg1;
- (void)setExistingUUIDsByPath:(id)arg1;
- (void)setExistingUUIDs:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)dealloc;

@end
