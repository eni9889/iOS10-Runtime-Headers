/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSRecursiveLock, NSMutableArray;

@interface AVQueue : NSObject  {
    NSRecursiveLock *_mutex;
    NSMutableArray *_items;
    void *_reserved;
    int _isBeingModifiedCount;
}

+ (id)queueWithArray:(id)arg1 error:(id*)arg2;
+ (id)avQueue;

- (BOOL)isBeingModified;
- (void)removeItemsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)insertItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3;
- (id)itemAfterItem:(id)arg1;
- (unsigned int)indexOfItem:(id)arg1;
- (BOOL)removeItemAtIndex:(unsigned int)arg1;
- (void)itemWillBeRemoved:(id)arg1 atIndex:(int)arg2;
- (void)itemWasAdded:(id)arg1 atIndex:(int)arg2;
- (BOOL)insertItem:(id)arg1 atIndex:(unsigned int)arg2 error:(id*)arg3;
- (unsigned int)itemCount;
- (BOOL)appendItem:(id)arg1 error:(id*)arg2;
- (id)itemAtIndex:(unsigned int)arg1;
- (BOOL)appendItemsFromArray:(id)arg1 error:(id*)arg2;
- (int)_instantiateItem;
- (id)initWithError:(id*)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithArray:(id)arg1 error:(id*)arg2;
- (void)removeAllItems;
- (BOOL)removeItem:(id)arg1;

@end
