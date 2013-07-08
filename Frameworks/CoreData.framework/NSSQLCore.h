/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLModel, NSSQLRow, NSMutableDictionary, NSURL, NSOperationQueue, NSSQLAdapter, NSSQLConnection, NSManagedObjectContext, NSMutableSet, NSSet, NSSQLRowCache, NSString, NSSQLEntity, NSMutableArray, NSSaveChangesRequest;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {
    NSSQLModel *_model;
    NSSQLAdapter *_adapter;
    NSSQLConnection *_connection;
    NSMutableArray *_channels;
    NSManagedObjectContext *_currentContext;
    NSSQLEntity *_lastEntity;
    NSSQLRowCache *_rowCache;
    NSMutableDictionary *_uniqueTable;
    NSMutableArray *_toManyCache;
    struct __CFSet { } *_deleteTable;
    NSSet *_lockedObjects;
    struct __CFDictionary { } *_dbOperationsByGlobalID;
    NSSaveChangesRequest *_currentSaveRequest;
    int _lazyFaultDebugLevel;
    NSMutableDictionary *_batchFaultBuffer;
    NSMutableDictionary *_batchToManyFaultBuffer;
    struct _NSScalarObjectID { Class x1; } *_currentGlobalID;
    NSSQLRow *_currentRow;
    id _observer;
    NSMutableSet *_missingObjectGIDs;
    NSMutableDictionary *_storeMetadata;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableSet *_externalDataReferencesToDelete;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    int _transactionInMemorySequence;
    int _debug;
    struct _sqlCoreFlags { 
        unsigned int preparingForSave : 1; 
        unsigned int beganTransaction : 1; 
        unsigned int ignoreEntityCaching : 1; 
        unsigned int storeMetadataClean : 1; 
        unsigned int useToManyCaching : 1; 
        unsigned int useSyntaxColoredLogging : 1; 
        unsigned int checkedExternalReferences : 1; 
        unsigned int fileProtectionType : 3; 
        unsigned int _RESERVED : 22; 
    } _sqlCoreFlags;
}

@property(readonly) NSURL * presentedItemURL;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * primaryPresentedItemURL;

+ (void)setSQLGenerationV1Default:(BOOL)arg1;
+ (void)setColoredLoggingDefault:(BOOL)arg1;
+ (void)setDebugDefault:(int)arg1;
+ (BOOL)sanityCheckFileAtURL:(id)arg1 error:(id*)arg2;
+ (BOOL)coloredLoggingDefault;
+ (int)debugDefault;
+ (BOOL)SQLGenerationV1Default;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (Class)migrationManagerClass;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (id)currentContext;
- (id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2;
- (id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2;
- (void)recomputePrimaryKeyMaxForEntities:(id)arg1;
- (void)_purgeRowCache;
- (id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2;
- (id)externalDataReferencesToSave;
- (id)safeguardLocationForFileWithUUID:(id)arg1;
- (id)externalLocationForFileWithUUID:(id)arg1;
- (id)_entityForObject:(id)arg1;
- (BOOL)handlesFetchRequest:(id)arg1;
- (BOOL)ownsObject:(id)arg1;
- (BOOL)ownsGlobalID:(id)arg1;
- (id)entityNameOrderingArrayForEntities:(id)arg1;
- (id)_predicateForSelectingObjectForOperation:(id)arg1;
- (id)_addDatabaseContextStateToException:(id)arg1;
- (void)invalidateObjectsWithGlobalIDs:(id)arg1;
- (id)_processRawRows:(struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; int x11; struct FetchResultsRowListHeader_st {} **x12; void **x13; void *x14; void *x15; void *x16; }*)arg1 forFetchPlan:(id)arg2 selectedBy:(SEL)arg3 withArgument:(id)arg4;
- (id)availableChannel;
- (id)createChannel;
- (id)missingObjectGlobalIDs;
- (void)unregisterChannel:(id)arg1;
- (id)newAdapterForModel:(id)arg1;
- (void)_useModel:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5;
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)newSortDescriptorForOrderedRelationship:(id)arg1;
- (id)newFaultingPredicateForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(BOOL)arg2 swapEKPK:(BOOL)arg3;
- (id)_loadAndSetMetadataReadOnly;
- (id)_loadAndSetMetadata;
- (void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(BOOL)arg4;
- (id)_collectSkewedComponents:(id*)arg1;
- (id)_dissectCorrelationTableCreationSQL:(id)arg1;
- (void)_checkAndRepairCorrelationTables:(BOOL)arg1 storeVersionNumber:(id)arg2;
- (void)commitTransaction_NotificationFree;
- (void)beginTransaction_NotificationFree;
- (id)refreshObjects:(id)arg1;
- (id)saveChanges:(id)arg1;
- (id)countForFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)rollbackChanges;
- (void)deleteExternalDataReferences:(id)arg1;
- (void)commitChanges:(id)arg1;
- (id)writeExternalDataReferences;
- (void)performChanges;
- (void)recordChangesInContext:(id)arg1;
- (void)prepareForSave:(id)arg1;
- (id)permanentObjectIDForObjectInTransaction:(id)arg1;
- (id)_newRowsForFetchPlan:(id)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3;
- (id)newRowsForFetchPlan:(id)arg1;
- (void)_cleanUpAfterSave;
- (void)forgetSnapshotForGlobalID:(id)arg1;
- (void)recordSnapshot:(id)arg1 forObjectID:(id)arg2;
- (void)_performChangesWithAdapterOps:(id)arg1;
- (id)orderAdapterOperations;
- (void)createAdapterOperationsForDatabaseOperation:(id)arg1;
- (BOOL)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3;
- (id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2;
- (struct __CFArray { }*)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2;
- (void)recordUpdateForObject:(id)arg1;
- (void)recordValuesForInsertedObject:(id)arg1;
- (void)recordDeleteForObject:(id)arg1;
- (void)_assertValidStateWithSelector:(SEL)arg1;
- (void)recordPrimaryKey:(long long)arg1 forInsertedObject:(id)arg2 withSQLEntity:(id)arg3;
- (void)generatePrimaryKeysForEntity:(id)arg1;
- (void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4;
- (void)_addManyToManysToDatabaseOp:(id)arg1;
- (void)_addDeletesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addInsertsToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addUpdatesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 orderedManyToMany:(id)arg3;
- (void)recordToManyInsertsForObject:(id)arg1 withOperation:(id)arg2;
- (void)recordToManyUpdatesForObject:(id)arg1 withOperation:(id)arg2;
- (void)_populateRowForOp:(id)arg1 withObject:(id)arg2;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalSnapshot:(id)arg3 value:(id)arg4 added:(id)arg5 deleted:(id)arg6 sourceRowPK:(long long)arg7 properties:(id)arg8 sourceObject:(id)arg9 newIndexes:(unsigned int**)arg10 reorderedIndexes:(char **)arg11;
- (void)recordToMany:(id)arg1 forSourceObjectID:(id)arg2 relationshipName:(id)arg3 orderKeys:(id)arg4;
- (void)recordDatabaseOperation:(id)arg1;
- (id)entityForObject:(id)arg1;
- (id)externalDataReferencesToDelete;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3;
- (unsigned int)_knownEntityKeyForObject:(id)arg1;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)databaseOperationForObject:(id)arg1;
- (unsigned int)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4;
- (void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned int**)arg4 reorderedIndexes:(char **)arg5;
- (unsigned int)_knownEntityKeyForObjectID:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (id)_databaseContextState;
- (void)forgetSnapshotsForGlobalIDs:(id)arg1;
- (void)_prefetchWithFetchRequest:(id)arg1 withObjectIDs:(id)arg2 inContext:(id)arg3;
- (id)_obtainOpenChannel;
- (id)_prepareResultsFromResultSet:(struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; int x11; struct FetchResultsRowListHeader_st {} **x12; void **x13; void *x14; void *x15; void *x16; }*)arg1 usingFetchPlan:(id)arg2 withMatchingRows:(id*)arg3;
- (id)_prepareDictionaryResultsFromResultSet:(struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; int x11; struct FetchResultsRowListHeader_st {} **x12; void **x13; void *x14; void *x15; void *x16; }*)arg1 usingFetchPlan:(id)arg2;
- (int)fileProtectionLevel;
- (id)externalDataLinksDirectory;
- (id)_availableChannel;
- (void)registerChannel:(id)arg1;
- (id)_availableChannelFromRegisteredChannels;
- (id)localSnapshotForGlobalID:(id)arg1;
- (id)databaseOperationForGlobalID:(id)arg1;
- (void)rollbackTransaction_core;
- (void)commitTransaction_core;
- (void)_commitTransaction:(id)arg1;
- (void)_cleanUpAfterTransaction;
- (void)beginTransaction_core;
- (void)_beginTransaction:(id)arg1;
- (id)newFetchedPKsForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (id)fetchRowForObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (id)rowForObjectID:(id)arg1 after:(double)arg2;
- (id)rowCache;
- (void)_ensureDatabaseMatchesModel;
- (id)_newAdapterForModel:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (void)resetExternalDataReferencesDirectories;
- (id)channels;
- (void)_disconnect;
- (void)_performPostSaveTasks;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)beginTransaction;
- (id)model;
- (void)setCurrentContext:(id)arg1;
- (id)adapter;
- (id)entityForFetchRequest:(id)arg1;
- (id)rowForObjectID:(id)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (id)_externalDataLinksDirectory;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (Class)_objectIDClass;
- (BOOL)loadMetadata:(id*)arg1;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (id)databaseUUID;
- (void)_setMetadata:(id)arg1;
- (const id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)entityForEntityDescription:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (BOOL)load:(id*)arg1;
- (void)setMetadata:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)externalDataReferencesDirectory;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)metadata;
- (void)dealloc;
- (id)identifier;
- (id)presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (id)presentedItemURL;
- (id)connection;
- (id)type;
- (void)setURL:(id)arg1;

@end