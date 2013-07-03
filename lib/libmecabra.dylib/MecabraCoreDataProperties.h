/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libmecabra.dylib
 */

@class NSMutableDictionary, NSString;

@interface MecabraCoreDataProperties : NSObject  {
    NSMutableDictionary *_descriptionDictionary;
    NSString *_identifier;
    NSString *_type;
}

@property(readonly) NSString * type;
@property(readonly) NSString * ubiquityContainerIdentifier;
@property(retain) NSMutableDictionary * descriptionDictionary;
@property(retain) NSString * identifier;

+ (id)defaultDescriptionPath;
+ (void)setDefaultDescriptionPath:(id)arg1;
+ (id)ubiquityContainerURL;
+ (id)sharedInstanceForType:(id)arg1;

- (void)setDescriptionDictionary:(id)arg1;
- (id)ubiquitousTransactionURLForIdentifier:(id)arg1;
- (id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1;
- (id)uniqueKeys;
- (id)ubiquitousURLWithSuffix:(id)arg1;
- (id)descriptionDictionary;
- (id)ubiquityContainerIdentifier;
- (id)entityDescriptionURL;
- (BOOL)databaseSyncs;
- (id)entityModelName;
- (void)forceNoSync;
- (id)requiredKeys;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)type;
- (id)valueForKey:(id)arg1;

@end
