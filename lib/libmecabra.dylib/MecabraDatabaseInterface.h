/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libmecabra.dylib
 */

@class NSMutableDictionary;

@interface MecabraDatabaseInterface : NSObject <MecabraDatabaseAccessProtocol> {
    NSMutableDictionary *_databaseControllers;
}

@property(retain) NSMutableDictionary * databaseControllers;


- (void)setDatabaseControllers:(id)arg1;
- (id)coreDataControllerForType:(id)arg1 URL:(id)arg2;
- (id)databaseControllers;
- (id)readPropertyForType:(id)arg1 URL:(id)arg2 propertyKey:(id)arg3;
- (void)setDatabaseNumberProperty:(id)arg1 forKey:(id)arg2 type:(id)arg3 URL:(id)arg4;
- (void)setDatabaseStringProperty:(id)arg1 forKey:(id)arg2 type:(id)arg3 URL:(id)arg4;
- (void)saveForType:(id)arg1 URL:(id)arg2;
- (void)setNumberValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 type:(id)arg4 URL:(id)arg5;
- (void)setStringValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 type:(id)arg4 URL:(id)arg5;
- (void)deleteAllMatchingEntries:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (void)deleteEntry:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (void)addEntry:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (id)addEntryWithReturnedObjects:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (id)readEntriesForType:(id)arg1 URL:(id)arg2 entry:(id)arg3;
- (void)addEntry:(id)arg1 type:(id)arg2 URL:(id)arg3 reply:(id)arg4;
- (void)readPropertyForType:(id)arg1 URL:(id)arg2 propertyKey:(id)arg3 reply:(id)arg4;
- (void)readEntriesForType:(id)arg1 URL:(id)arg2 entry:(id)arg3 reply:(id)arg4;

@end
