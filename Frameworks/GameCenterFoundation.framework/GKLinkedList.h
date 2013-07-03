/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKListNode;

@interface GKLinkedList : NSObject  {
    GKListNode *_headNode;
    GKListNode *_tailNode;
}

@property GKListNode * headNode;
@property GKListNode * tailNode;


- (BOOL)isConsistent;
- (BOOL)hasCycle;
- (void)setTailNode:(id)arg1;
- (void)setHeadNode:(id)arg1;
- (id)headNode;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (void)removeAllNodes;
- (void)removeNode:(id)arg1;
- (id)tailNode;
- (id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2;
- (void)insertNodeAtBeginning:(id)arg1;
- (id)nodeForInsertionWithValue:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
