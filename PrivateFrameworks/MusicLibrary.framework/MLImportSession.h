/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary, NSDictionary, MLMediaLibraryServiceStatementAccumulator, ML3DatabaseConnection, ML3SortMap;

@interface MLImportSession : NSObject  {
    ML3DatabaseConnection *_readerConnection;
    MLMediaLibraryServiceStatementAccumulator *_accumulator;
    ML3SortMap *_sortMap;
    struct unordered_map<long long, CollectionPIDSet, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, CollectionPIDSet> > > { 
        struct __hash_table<std::__1::pair<long long, CollectionPIDSet>, std::__1::__unordered_map_hasher<long long, CollectionPIDSet, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, CollectionPIDSet, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::pair<long long, CollectionPIDSet> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> { 
                    struct __hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, CollectionPIDSet, std::__1::hash<long long>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, CollectionPIDSet, std::__1::equal_to<long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } collectionPIDSetForTrackPID;
    struct { 
        unsigned int addCount; 
        unsigned int updateCount; 
        unsigned int deleteCount; 
        double importStartTime; 
    } _stats;
    int _sourceType;
    BOOL _rebuildIndexes;
    ML3MusicLibrary *_library;
    ML3DatabaseConnection *_connection;
    NSDictionary *_cachedNameOrders;
}

@property(retain) ML3MusicLibrary * library;
@property(retain) ML3DatabaseConnection * connection;
@property(retain) NSDictionary * cachedNameOrders;
@property BOOL rebuildIndexes;


- (void)setRebuildIndexes:(BOOL)arg1;
- (BOOL)rebuildIndexes;
- (void)setCachedNameOrders:(id)arg1;
- (id)cachedNameOrders;
- (void)_populateNameOrderWithNameOrderForPIDMap:(struct unordered_map<long long, ML3NameOrder, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, ML3NameOrder> > > { struct __hash_table<std::__1::pair<long long, ML3NameOrder>, std::__1::__unordered_map_hasher<long long, ML3NameOrder, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, ML3NameOrder, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::pair<long long, ML3NameOrder> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > > { struct __hash_node<std::__1::pair<long long, ML3NameOrder>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> { struct __hash_node<std::__1::pair<long long, ML3NameOrder>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, ML3NameOrder, std::__1::hash<long long>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, ML3NameOrder, std::__1::equal_to<long long>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1 tableName:(id)arg2 nameSQL:(id)arg3;
- (BOOL)_shouldRebuildIndices;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; })collectionPIDSetForTrackPID:(long long)arg1;
- (id)_insertIntoGenreSQL;
- (id)_insertIntoComposerSQL;
- (id)_insertIntoAlbumSQL;
- (id)_insertIntoAlbumArtistSQL;
- (id)_insertIntoItemArtistSQL;
- (id)_generateInsertionSQLWithInsertPart:(id)arg1 numberOfValues:(unsigned int)arg2;
- (BOOL)updateCollections;
- (long long)_albumPIDWithSortableNames:(id)arg1 albumArtistPID:(long long)arg2 existingAlbumStatesForGroupingIdentifiers:(id)arg3 groupingKeysForGroupingNames:(id)arg4 withConnection:(id)arg5 withTrack:(id)arg6;
- (id)_existingAlbumStatesForGroupingIdentifiers:(id)arg1;
- (long long)_locationKindPIDForTrack:(id)arg1;
- (long long)_genrePIDWithSortableNames:(id)arg1 existingGenrePIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (long long)_composerPIDWithSortableNames:(id)arg1 existingComposerPIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (id)_albumGroupingIdentifierWithAlbumArtistPersistentID:(long long)arg1 groupingKeysForGroupingNames:(id)arg2 withTrack:(id)arg3;
- (long long)_albumArtistPIDWithSortableNames:(id)arg1 existingAlbumArtistPIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (long long)_artistPIDWithSortableNames:(id)arg1 existingArtistPIDsForGroupingKeys:(id)arg2 withConnection:(id)arg3 withTrack:(id)arg4;
- (id)_existingCollectionPIDsForTable:(id)arg1 groupingNames:(id)arg2 groupingKeysForGroupingNames:(id)arg3 withConnection:(id)arg4;
- (id)_genreGroupingNameFromDataSource:(id)arg1;
- (id)_composerGroupingNameFromDataSource:(id)arg1;
- (id)_albumArtistGroupingNameFromDataSource:(id)arg1;
- (id)_artistGroupingNameFromDataSource:(id)arg1;
- (BOOL)prepareSortDataForTrack:(id)arg1;
- (long long)persistentIdentifierForItem:(id)arg1 existing:(BOOL*)arg2;
- (BOOL)_updateTrackData:(id)arg1 isUpdate:(BOOL)arg2;
- (int)importLogLevel;
- (BOOL)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2;
- (BOOL)updateTrack:(id)arg1;
- (BOOL)addTrack:(id)arg1;
- (id)initWithLibrary:(id)arg1 onConnection:(id)arg2;
- (id)library;
- (void)setLibrary:(id)arg1;
- (BOOL)removeTrack:(id)arg1;
- (BOOL)begin;
- (void)setConnection:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)finish;
- (id)connection;

@end
