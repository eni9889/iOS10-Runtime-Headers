/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSEntityMapping, NSError;

@interface _NSMappingModelBuilder : NSObject  {
    NSManagedObjectModel *_sourceModel;
    NSManagedObjectModel *_destinationModel;
    NSEntityMapping *_currentEntityMapping;
    NSError *_error;
}

+ (void)setMigrationDebugLevel:(int)arg1;
+ (int)migrationDebugLevel;

- (id)newInferredMappingModel:(id*)arg1;
- (BOOL)_canTransformSourceAttributeType:(unsigned int)arg1 toDestinationAttributeType:(unsigned int)arg2;
- (id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2;
- (id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2;
- (BOOL)inferPropertyMappingsForEntityMapping:(id)arg1;
- (id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2;
- (void)_resetCaches;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (void)dealloc;

@end
