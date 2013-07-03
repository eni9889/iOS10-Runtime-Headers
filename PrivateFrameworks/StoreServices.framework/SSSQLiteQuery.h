/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject  {
    SSSQLiteDatabase *_database;
    SSSQLiteQueryDescriptor *_descriptor;
}

@property(readonly) SSSQLiteDatabase * database;
@property(readonly) SSSQLiteQueryDescriptor * queryDescriptor;
@property(readonly) int countOfEntities;


- (int)countOfEntities;
- (id)queryDescriptor;
- (void)enumerateMemoryEntitiesUsingBlock:(id)arg1;
- (BOOL)createTemporaryTableWithName:(id)arg1 properties:(const id*)arg2 count:(unsigned int)arg3;
- (id)copyEntityIdentifiers;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned int)arg2;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(id)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (id)copySelectSQLWithProperties:(const id*)arg1 count:(unsigned int)arg2;
- (void)bindToSelectStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (void)enumeratePersistentIDsAndProperties:(const id*)arg1 count:(unsigned int)arg2 usingBlock:(id)arg3;
- (BOOL)deleteAllEntities;
- (id)database;
- (void)dealloc;

@end
