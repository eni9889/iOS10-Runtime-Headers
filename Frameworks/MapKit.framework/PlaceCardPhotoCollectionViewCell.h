/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, PlaceCardPhotoCollectionView, <_PlaceCardPhotoCollectionViewCellDelegate>, MKMapItem;

@interface PlaceCardPhotoCollectionViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    PlaceCardPhotoCollectionView *_photoGrid;
    MKMapItem *_mapItem;
    <_PlaceCardPhotoCollectionViewCellDelegate> *_delegate;
}

@property(retain) MKMapItem * mapItem;
@property(readonly) NSArray * photos;
@property <_PlaceCardPhotoCollectionViewCellDelegate> * delegate;

+ (id)reuseIdentifier;
+ (bool)requiresConstraintBasedLayout;

- (void)reloadPhotos;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (id)photos;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end