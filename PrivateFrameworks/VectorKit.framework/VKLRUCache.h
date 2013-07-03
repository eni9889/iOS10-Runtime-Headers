/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKLRUCacheDelegate>;

@interface VKLRUCache : NSObject <NSFastEnumeration> {
    unsigned int _reservedCapacity;
    unsigned int _maximumCapacity;
    unsigned int _count;
    void *_table;
    id _head;
    id _tail;
    <VKLRUCacheDelegate> *_delegate;
}

@property(readonly) unsigned int reservedCapacity;
@property(readonly) unsigned int maximumCapacity;
@property(readonly) unsigned int count;
@property <VKLRUCacheDelegate> * delegate;


- (unsigned int)maximumCapacity;
- (unsigned int)reservedCapacity;
- (void)removeObjectsMatchingPredicate:(id)arg1;
- (id)objectWithoutPromotingForKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)contentsDescription;
- (void)consistencyCheck;
- (void)insertNodeAtHead:(id)arg1;
- (void)evictIfNecessary;
- (void)dropTail;
- (void)setReservedCapacity:(unsigned int)arg1 maximumCapacity:(unsigned int)arg2;
- (id)initWithReservedCapacity:(unsigned int)arg1 maximumCapacity:(unsigned int)arg2;
- (void)removeNode:(id)arg1;
- (void)purge;
- (id)init;
- (void)setObject:(id)arg1 forKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)setDelegate:(id)arg1;
- (id)objectForKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)delegate;

@end
