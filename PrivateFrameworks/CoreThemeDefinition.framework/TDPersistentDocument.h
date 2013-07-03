/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSURL, NSString, NSManagedObjectContext, NSManagedObjectModel;

@interface TDPersistentDocument : NSObject  {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    id _store;
    NSURL *_fileURL;
    NSString *_fileType;
    NSURL *_temporaryFileURL;
}

@property(copy) NSURL * fileURL;
@property(copy) NSString * fileType;
@property(copy) NSURL * temporaryFileURL;

+ (id)_fileModificationDateForURL:(id)arg1;

- (id)temporaryFileURL;
- (void)setTemporaryFileURL:(id)arg1;
- (void)saveDocument:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)initWithType:(id)arg1 error:(id*)arg2;
- (void)setManagedObjectContext:(id)arg1;
- (id)_persistentStoreCoordinator;
- (id)managedObjectModel;
- (id)managedObjectContext;
- (id)displayName;
- (id)undoManager;
- (void)setFileURL:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)fileURL;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (void)setFileType:(id)arg1;
- (id)fileType;

@end
