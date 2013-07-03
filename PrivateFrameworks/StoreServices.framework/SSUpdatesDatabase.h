/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSUpdatesDatabase : NSObject  {
    SSSQLiteDatabase *_database;
}

@property(readonly) BOOL requiresMigration;


- (BOOL)requiresMigration;
- (void)readAsyncUsingSessionBlock:(id)arg1;
- (void)_dispatchBlockAsync:(id)arg1;
- (id)_initReadOnly:(BOOL)arg1;
- (void)modifyAsyncUsingTransactionBlock:(id)arg1;
- (void)modifyUsingTransactionBlock:(id)arg1;
- (void)readUsingSessionBlock:(id)arg1;
- (id)initReadOnly;
- (id)init;
- (void)dealloc;

@end
