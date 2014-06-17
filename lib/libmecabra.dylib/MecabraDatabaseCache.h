/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libmecabra.dylib
 */

@class NSArray, NSMutableDictionary, MecabraDatabaseCacheIdentifierController;

@interface MecabraDatabaseCache : NSObject  {
    NSMutableDictionary *_entryToIdentifierMapping;
    MecabraDatabaseCacheIdentifierController *_identifierController;
    NSMutableDictionary *_identifierToEntryMapping;
    NSArray *_uniqueKeys;
    unsigned long long _currentSeed;
}

@property(readonly) NSArray * allIdentifiers;
@property(retain) NSArray * uniqueKeys;
@property(retain) NSMutableDictionary * entryToIdentifierMapping;
@property(retain) MecabraDatabaseCacheIdentifierController * identifierController;
@property(retain) NSMutableDictionary * identifierToEntryMapping;
@property unsigned long long currentSeed;


- (void)setUniqueKeys:(id)arg1;
- (void)updateSeedNumber:(unsigned long long)arg1;
- (unsigned long long)nextSeed;
- (void)deleteEntry:(id)arg1;
- (void)updateEntry:(id)arg1;
- (id)entryForIdentifier:(unsigned long long)arg1;
- (unsigned long long)identifierForEntry:(id)arg1;
- (id)allIdentifiers;
- (void)setCurrentSeed:(unsigned long long)arg1;
- (unsigned long long)currentSeed;
- (id)identifierController;
- (id)entryToIdentifierMapping;
- (id)partialEntryForEntry:(id)arg1;
- (id)uniqueKeys;
- (id)identifierToEntryMapping;
- (void)setIdentifierToEntryMapping:(id)arg1;
- (void)setIdentifierController:(id)arg1;
- (void)setEntryToIdentifierMapping:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)reset;

@end