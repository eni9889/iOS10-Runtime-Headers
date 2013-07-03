/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSMutableDictionary, NSMutableSet;

@interface MSASPendingChanges : NSObject  {
    NSMutableSet *_pendingAlbumGUIDsWithKeyValueChanges;
    NSMutableSet *_pendingAlbumChanges;
    NSMutableSet *_pendingAlbumGUIDsWithSharingInfoChanges;
    NSMutableDictionary *_pendingAlbumGUIDToAssetCollections;
}

@property(retain) NSMutableSet * pendingAlbumGUIDsWithKeyValueChanges;
@property(retain) NSMutableSet * pendingAlbumChanges;
@property(retain) NSMutableSet * pendingAlbumGUIDsWithSharingInfoChanges;
@property(retain) NSMutableDictionary * pendingAlbumGUIDToAssetCollections;


- (void)setPendingAlbumGUIDToAssetCollections:(id)arg1;
- (id)pendingAlbumGUIDToAssetCollections;
- (void)setPendingAlbumGUIDsWithSharingInfoChanges:(id)arg1;
- (id)pendingAlbumGUIDsWithSharingInfoChanges;
- (void)setPendingAlbumChanges:(id)arg1;
- (id)pendingAlbumChanges;
- (void)setPendingAlbumGUIDsWithKeyValueChanges:(id)arg1;
- (id)pendingAlbumGUIDsWithKeyValueChanges;
- (BOOL)hasPendingChanges;
- (void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1;
- (void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2;
- (void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2;
- (void)removePendingChangesForAlbumGUID:(id)arg1;
- (void)addPendingChangesForAlbumGUID:(id)arg1;
- (void)removePendingKeyValueChangesForAlbumGUID:(id)arg1;
- (id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3;
- (void).cxx_destruct;

@end
