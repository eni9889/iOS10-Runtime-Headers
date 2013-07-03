/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMapTable, VKObjectPool;

@interface VKShieldManager : NSObject <GEOResourceManifestTileGroupObserver> {
    NSMapTable *_regionalAtlases;
    NSMapTable *_regionalIndexes;
    NSMapTable *_defaultAtlases;
    NSMapTable *_defaultIndexes;
    VKObjectPool *_genericArtworks;
}

+ (id)sharedManager;

- (id)imageForShieldType:(int)arg1 shieldText:(id)arg2 contentScale:(float)arg3 size:(int)arg4 idiom:(int)arg5;
- (id)artworkForShieldType:(int)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 size:(int)arg4 idiom:(int)arg5;
- (id)_defaultAtlasForSize:(int)arg1 scale:(float)arg2 idiom:(int)arg3;
- (id)_defaultIndexForSize:(int)arg1 scale:(float)arg2 idiom:(int)arg3;
- (id)_atlasForName:(id)arg1;
- (id)_indexForName:(id)arg1;
- (id)artworkForShieldType:(int)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 resourceNames:(id)arg4 style:(id)arg5 size:(int)arg6 idiom:(int)arg7 numberOfLines:(unsigned int)arg8;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)purge;
- (id)init;
- (void)dealloc;
- (void)_didReceiveMemoryWarning:(id)arg1;

@end
