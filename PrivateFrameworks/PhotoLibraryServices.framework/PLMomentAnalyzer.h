/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CLLocation, NSDateFormatter, GEOPlace, PLMomentAnalyzerWorkThread, NSMutableSet, PLXPCTransaction, PLPhotoLibrary, NSArray, NSObject<OS_dispatch_queue>, NSDictionary, NSString, NSMutableArray;

@interface PLMomentAnalyzer : NSObject  {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLMomentAnalyzerWorkThread *_geoWorkThread;
    unsigned int _mode;
    double _analysisStartTime;
    BOOL _delayedSavePending;
    unsigned int _objectUpdatesSinceSave;
    PLXPCTransaction *_keepAliveTransaction;
    NSMutableArray *_pendingGEORequests;
    NSMutableSet *_activeGEORequests;
    NSMutableSet *_processingMomentUuids;
    NSMutableSet *_megaMomentListIdsToProcess;
    NSMutableSet *_yearMomentListIdsToProcess;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_differentDaySameMonthStartDateFormatter;
    NSDateFormatter *_differentDaySameMonthEndDateFormatter;
    NSDateFormatter *_differentMonthStartDateFormatter;
    NSDateFormatter *_differentMonthEndDateFormatter;
    NSDateFormatter *_differentYearStartDateFormatter;
    NSDateFormatter *_differentYearEndDateFormatter;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    PLPhotoLibrary *_photoLibrary;
    BOOL _analyzingAllMoments;
    BOOL _passSuccess;
    void *_addressBook;
    unsigned int _errorState;
    int _errorBackoffLevel;
    int _triesAtCurrentBackoffLevel;
    BOOL _networkObservingReachability;
    BOOL _needToUpdateInvalidMomentsWhenPossible;
    NSDictionary *_homeAddressDictionary;
    CLLocation *_homeLocation;
    GEOPlace *_homePlace;
    NSString *_languageAndLocale;
    NSArray *_defaultDominantGeoOrdering;
    NSArray *_defaultSignificantLocationGeoOrdering;
    double _lastNetworkForcedAbortTime;
    double _timeToWaitBeforeNextRequest;
    NSMutableSet *_subLocalityBlacklist;
}

@property(readonly) PLPhotoLibrary * _photoLibrary;
@property(readonly) void* _addressBook;
@property(readonly) CLLocation * _homeLocation;

+ (id)sharedInstance;

- (void*)_addressBook;
- (void)updateInfoForYearMomentListWithMomentListId:(id)arg1;
- (void)updateInfoForMegaMomentListWithMomentListId:(id)arg1;
- (void)updateInfoForMomentWithMomentId:(id)arg1;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (unsigned int)_dominantOrderTypeForPlaceType:(int)arg1;
- (BOOL)_isPlaceTypeTooBroadForDefaultNaming:(int)arg1;
- (BOOL)_needToAugmentNameForPlaceType:(int)arg1;
- (BOOL)_canUsePlaceNameInNamingWithPlaceType:(int)arg1;
- (void)_reverseGeocodeMoment:(id)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)updateInfoForYearMomentLists:(id)arg1;
- (void)updateInfoForMegaMomentLists:(id)arg1;
- (void)updateInfoForMoments:(id)arg1;
- (id)_homeLocation;
- (BOOL)_canProcessMoments;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (unsigned int)_significantPlaceCountInMap:(id)arg1;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2;
- (unsigned int)_defaultIndexForGeoOrder:(unsigned int)arg1;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned int)arg2 totalPlaceCount:(unsigned int)arg3 otherPlaceCount:(unsigned int*)arg4;
- (id)_bestNameInfoAtLocality:(BOOL)arg1 forGEOStructuredAddress:(id)arg2 tooBroadForDefaultNaming:(BOOL*)arg3;
- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (id)_firstPlaceValueAfterOrderIndex:(unsigned int)arg1 withGEOPlace:(id)arg2 placeOrderType:(unsigned int*)arg3;
- (unsigned int)_indexForGeoOrder:(unsigned int)arg1 inPriorityArray:(id)arg2;
- (unsigned int)_geoOrderInPriorityArray:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_placeValueForOrderType:(unsigned int)arg1 withGEOPlace:(id)arg2 isHome:(BOOL)arg3;
- (unsigned int)_defaultGeoOrderAtIndex:(unsigned int)arg1;
- (id)_nameByRemovingThoroughfareFromPlaceName:(id)arg1 structuredAddress:(id)arg2;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectContainingMapPoints:(struct { double x1; double x2; }*)arg1 mapPointCount:(unsigned int)arg2;
- (void)_addGEOLocationForCoordinate:(struct { double x1; double x2; })arg1 toLocations:(id)arg2;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (unsigned int)_processYearMomentList:(id)arg1;
- (void)_updateSignificantLocationsInCompoundNameInfo:(id)arg1 withRevGeoLocations:(id)arg2;
- (unsigned int)_processMegaMomentList:(id)arg1;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (void)_waitForReachability;
- (void)_processNextAnalysisTransaction;
- (void)_analysisComplete;
- (void)_processYearMomentLists;
- (void)_processMegaMomentLists;
- (void)_processPendingGEORequests;
- (void)_startObservingReachabilityChanges;
- (void)_updateInfoForAllMomentsInvalidOnly:(BOOL)arg1;
- (void)_stopObservingReachabilityChanges;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_updateKeepAlive;
- (void)_saveNow;
- (void)_removeKeepAlive;
- (unsigned int)_errorTypeForError:(id)arg1;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(BOOL)arg2 errorType:(unsigned int)arg3;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(BOOL)arg3;
- (BOOL)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (id)defaultTitleForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_extraNameInfoWithDayInfoForStartDate:(id)arg1 endDate:(id)arg2 dayCount:(int)arg3 otherPlaceCount:(unsigned int)arg4;
- (BOOL)_needToAddDayInformationToDominantOrderType:(unsigned int)arg1;
- (void)_updateDominantInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoLocations:(id)arg3 orderUsed:(unsigned int*)arg4 otherPlaceCount:(unsigned int*)arg5;
- (int)_dayCountFromAssets:(id)arg1;
- (id)_revGeoLocationsFromAssets:(id)arg1;
- (BOOL)_wantToProcessMomentWithUuid:(id)arg1;
- (void)_resetErrorState;
- (BOOL)_isNetworkReachable;
- (void)_processNextTransaction;
- (void)_updateErrorStateWithSuccess:(BOOL)arg1 errorType:(unsigned int)arg2;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(BOOL)arg2;
- (void)_setErrorState:(unsigned int)arg1;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(BOOL)arg1;
- (id)_addressDictionaryForABRecord:(void*)arg1 identifier:(int)arg2;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_updateHomeLocation;
- (void)_saveGlobalMetadata;
- (id)_currentHomeAddressDictionary;
- (id)_dictionaryFromLocation:(id)arg1;
- (void)_runBlockOnWorkQueue:(id)arg1;
- (void)_loadSubLocalityBlacklist;
- (BOOL)_updateLanguageIfNeeded;
- (BOOL)_updateHomeAddressIfNeeded;
- (id)_locationFromDictionary:(id)arg1;
- (id)_metadataPath;
- (void)_finalizeInitOnWorkQueue;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (void)updateInfoForAllMoments;
- (id)_photoLibrary;
- (void)_addressBookChanged;
- (id)init;
- (void)dealloc;

@end
