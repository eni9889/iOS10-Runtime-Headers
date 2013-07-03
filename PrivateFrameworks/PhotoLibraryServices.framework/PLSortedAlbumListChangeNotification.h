/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLSortedAlbumList, PLAssetContainerListChangeNotification;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification  {
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;
- (BOOL)countDidChange;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (BOOL)shouldReload;
- (id)albumList;
- (id)init;
- (id)object;
- (void)dealloc;
- (id)description;

@end
