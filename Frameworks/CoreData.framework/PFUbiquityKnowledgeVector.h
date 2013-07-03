/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
    unsigned int _hash;
}

@property(readonly) unsigned int hash;
@property(readonly) unsigned int length;

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;

- (BOOL)canMergeWithKnowledgeVector:(id)arg1;
- (void)decrementToMinimumWithKnowledgeVector:(id)arg1;
- (BOOL)isDescendantOfKnowledgeVector:(id)arg1;
- (BOOL)hasPeerIDInCommonWith:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2;
- (id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned int)arg3;
- (void)_updateHash;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)createKnowledgeVectorString;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)createStoreKnowledgeVectorDictionary;
- (BOOL)conflictsWithKnowledgeVector:(id)arg1;
- (id)allPeerIDs;
- (BOOL)isAncestorOfKnowledgeVector:(id)arg1;
- (BOOL)isZeroVector;
- (void)updateWithKnowledgeVector:(id)arg1;
- (id)transactionNumberForPeerID:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (id)init;
- (unsigned int)length;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
