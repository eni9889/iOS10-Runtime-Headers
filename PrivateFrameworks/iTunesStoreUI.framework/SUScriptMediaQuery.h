/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, MPMediaQuery, NSArray;

@interface SUScriptMediaQuery : SUScriptObject  {
    NSArray *_collections;
    NSArray *_filterPredicates;
    NSArray *_items;
    BOOL _watchingLibrary;
}

@property(readonly) MPMediaQuery * nativeQuery;
@property(readonly) NSArray * collections;
@property(copy) id filterPredicates;
@property(copy) NSString * groupingType;
@property(readonly) NSArray * items;
@property(readonly) NSString * comparisonTypeContains;
@property(readonly) NSString * comparisonTypeEquals;
@property(readonly) NSString * groupingTypeAlbum;
@property(readonly) NSString * groupingTypeAlbumArtist;
@property(readonly) NSString * groupingTypeArtist;
@property(readonly) NSString * groupingTypeComposer;
@property(readonly) NSString * groupingTypeGenre;
@property(readonly) NSString * groupingTypePlaylist;
@property(readonly) NSString * groupingTypePodcastTitle;
@property(readonly) NSString * groupingTypeTitle;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)groupingTypeTitle;
- (id)groupingTypePodcastTitle;
- (id)groupingTypePlaylist;
- (id)groupingTypeGenre;
- (id)groupingTypeComposer;
- (id)groupingTypeArtist;
- (id)groupingTypeAlbumArtist;
- (id)groupingTypeAlbum;
- (id)comparisonTypeEquals;
- (id)comparisonTypeContains;
- (id)nativeQuery;
- (id)makeFilterPredicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (void)_beginWatchingLibraryIfNecessary;
- (void)_libraryChangedNotification:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)removeFilterPredicate:(id)arg1;
- (id)collections;
- (void)addFilterPredicate:(id)arg1;
- (void)setGroupingType:(id)arg1;
- (void)setFilterPredicates:(id)arg1;
- (id)canFilterByProperty:(id)arg1;
- (id)groupingType;
- (id)filterPredicates;
- (void)_resetCaches;
- (id)items;
- (id)attributeKeys;
- (void)dealloc;

@end
