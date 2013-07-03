/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityKnowledgeVector, NSString, NSDictionary, PFUbiquityLocation, NSMutableDictionary;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding> {
    NSString *_storeName;
    NSString *_authorPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityKnowledgeVector *_pKV;
    PFUbiquityKnowledgeVector *_kv;
    NSMutableDictionary *_peerRanges;
}

@property(readonly) NSString * storeName;
@property(readonly) NSString * authorPeerID;
@property(readonly) NSString * modelVersionHash;
@property(readonly) PFUbiquityLocation * rootLocation;
@property(readonly) PFUbiquityKnowledgeVector * previousKnowledgeVector;
@property(readonly) PFUbiquityKnowledgeVector * knowledgeVector;
@property(readonly) NSDictionary * peerRanges;


- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1;
- (id)createPeerRangeDictionary:(id)arg1;
- (void)addDictionaryForPeerRange:(id)arg1;
- (id)createNewLocalRangeWithRangeStart:(unsigned int)arg1 andRangeEnd:(unsigned int)arg2 forEntityNamed:(id)arg3;
- (id)previousKnowledgeVector;
- (id)authorPeerID;
- (BOOL)gatherMetadataWithStore:(id)arg1 andError:(id*)arg2;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)peerRanges;
- (id)modelVersionHash;
- (void)setKnowledgeVector:(id)arg1;
- (id)knowledgeVector;
- (void)_migrateToModelVersionHash:(id)arg1;
- (id)rootLocation;
- (id)storeName;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
