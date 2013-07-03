/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSArray, NSData, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject  {
    NSData *_wallpaperFileHash;
    NSArray *_allWallpaperURLs;
    PLPhotoLibrary *photoLibrary;
}

@property(readonly) NSArray * allWallpaperURLs;
@property(retain) PLPhotoLibrary * photoLibrary;
@property(readonly) PLManagedObjectContext * managedObjectContext;

+ (void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1;
+ (id)posterImageURL;

- (void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2;
- (id)allExistingWallpaperAssets;
- (void)importAll;
- (void)deleteAll;
- (id)wallpaperFileHash;
- (id)allWallpaperURLs;
- (void)updateAsNeeded;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;
- (id)managedObjectContext;
- (id)init;
- (void)dealloc;

@end
