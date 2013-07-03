/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject  {
    struct __CFDictionary { } *_dictionary;
    unsigned int _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned int)arg1;

- (id)objectForKeyWithoutAffectingLRU:(id)arg1;
- (id)allValuesInLRUOrder;
- (id)allKeysInLRUOrder;
- (unsigned int)linkedListCount;
- (id)initWithMaximumCapacity:(unsigned int)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_addNodeToFront:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (id)allKeys;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)dealloc;
- (id)description;

@end
