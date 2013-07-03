/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFriendsDataSource : GKBasicCollectionViewDataSource  {
    int _kind;
}

@property int kind;


- (BOOL)shouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)sectionTitle;
- (void)configureCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)kind;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setKind:(int)arg1;

@end
