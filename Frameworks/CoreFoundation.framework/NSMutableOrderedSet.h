/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableOrderedSet : NSOrderedSet  {
}

+ (id)orderedSetWithCapacity:(unsigned int)arg1;

- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;
- (void)unionOrderedSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned int)arg2;
- (void)intersectOrderedSet:(id)arg1;
- (void)rollObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 by:(int)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectsPassingTest:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inArray:(id)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (void)sortRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (void)removeObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inOrderedSet:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inArray:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 atIndex:(unsigned int)arg3;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 atIndex:(unsigned int)arg3;
- (void)insertObjects:(const id*)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)_mutate;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)removeObject:(id)arg1;
- (void)setObject:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjects:(const id*)arg2 count:(unsigned int)arg3;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)sortUsingComparator:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)setArray:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeLastObject;
- (void)sortUsingDescriptors:(id)arg1;
- (void)filterUsingPredicate:(id)arg1;
- (void)pl_removeObjectsInArray:(id)arg1;
- (void)pl_addObjectsFromArray:(id)arg1;

@end
