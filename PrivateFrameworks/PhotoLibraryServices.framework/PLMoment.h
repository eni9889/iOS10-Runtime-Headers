/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLManagedAsset, PLMomentLibrary, NSArray, NSOrderedSet, NSString, PLMomentList, NSData, NSDate;

@interface PLMoment : PLManagedObject <PLAssetContainer> {
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

@property(retain) NSString * uuid;
@property(retain) NSDate * endDate;
@property(retain) NSDate * representativeDate;
@property(retain) NSDate * startDate;
@property(retain) NSString * title;
@property int cachedCount;
@property int cachedPhotosCount;
@property int cachedVideosCount;
@property(retain) NSOrderedSet * assets;
@property(retain) PLMomentList * yearMomentList;
@property(retain) PLMomentList * megaMomentList;
@property(retain) PLMomentLibrary * momentLibrary;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) NSData * approximateLocationData;
@property(retain) NSData * reverseLocationData;
@property BOOL reverseLocationDataIsValid;
@property short generationType;
@property BOOL isRegisteredForChanges;
@property BOOL didRegisteredWithUserInterfaceContext;
@property(readonly) NSString * localizedTitle;
@property(readonly) unsigned int approximateCount;
@property(readonly) unsigned int assetsCount;
@property(readonly) unsigned int photosCount;
@property(readonly) unsigned int videosCount;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL canShowComments;
@property(readonly) NSArray * localizedLocationNames;

+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)insertNewMomentFromCluster:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (void)removeAssets:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)removeAssetsObject:(id)arg1;
- (void)addAssetsObject:(id)arg1;
- (void)replaceObjectInAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned int)arg2;
- (BOOL)isMeaningful;
- (BOOL)_validateMomentListRelationship:(id*)arg1;
- (void)updateMomentFromCluster:(id)arg1;
- (id)approximateLocation;
- (void)setIsRegisteredForChanges:(BOOL)arg1;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (BOOL)didRegisteredWithUserInterfaceContext;
- (void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1;
- (BOOL)isRegisteredForChanges;
- (void)registerForChanges;
- (void)unregisterForChanges;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
- (id)localizedLocationNames;
- (BOOL)canShowComments;
- (unsigned int)videosCount;
- (unsigned int)assetsCount;
- (unsigned int)approximateCount;
- (BOOL)canPerformEditOperation:(int)arg1;
- (void)delete;
- (unsigned int)photosCount;
- (BOOL)validateForUpdate:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (void)awakeFromInsert;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)localizedTitle;

@end
