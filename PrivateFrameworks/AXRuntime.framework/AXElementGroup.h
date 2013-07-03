/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@class NSHashTable, NSArray, AXElementGroup, <AXElementGroupGenerator>;

@interface AXElementGroup : NSArray <AXGroupable> {
    NSArray *_elementStore;
    BOOL _rootGroup;
    <AXElementGroupGenerator> *_generator;
    int _groupTraits;
    NSHashTable *_groupObservers;
    AXElementGroup *_parentGroup;
}

@property AXElementGroup * parentGroup;
@property(getter=isRootGroup) BOOL rootGroup;
@property int groupTraits;
@property(readonly) BOOL canBeGroupedWithOtherGroupables;
@property(readonly) BOOL canBeReplacedByChildren;
@property(readonly) BOOL allowsChangingExistingGroupingOfContents;
@property(readonly) unsigned int numberOfElements;
@property <AXElementGroupGenerator> * generator;
@property(retain) NSHashTable * groupObservers;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;

+ (id)groupWithGenerator:(id)arg1;
+ (id)groupWithElements:(id)arg1;

- (BOOL)isRootGroup;
- (id)_debugBriefDescription;
- (void)unregisterGroupObserver:(id)arg1;
- (void)registerGroupObserver:(id)arg1;
- (id)keyboardContainer;
- (id)keyboardRow;
- (id)keyboardContainerRows;
- (id)firstLeafDescendant;
- (id)firstDescendantMatchingItem:(id)arg1;
- (id)firstChildMatchingItem:(id)arg1;
- (id)groupByRemovingGroupable:(id)arg1;
- (id)groupByAppendingGroupable:(id)arg1;
- (id)groupByPrependingGroupable:(id)arg1;
- (id)_debugFullDescriptionWithIndent:(id)arg1;
- (id)_debugDescriptionForTraits;
- (id)debugFullDescription;
- (id)groupObservers;
- (unsigned int)numberOfElements;
- (id)ancestorPassingTest:(id)arg1;
- (id)childrenPassingTest:(id)arg1;
- (id)_siblingOfChild:(id)arg1 inDirection:(BOOL)arg2 didWrap:(BOOL*)arg3;
- (void)_generateGroupsIfNeeded;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1;
- (id)generator;
- (void)_transferStateToGroup:(id)arg1;
- (void)unregisterAllGroupObservers;
- (void)setGenerator:(id)arg1;
- (void)setGroupObservers:(id)arg1;
- (void)_commonInitWithElements:(id)arg1 generator:(id)arg2;
- (id)initWithGenerator:(id)arg1;
- (id)initWithElements:(id)arg1;
- (void)setRootGroup:(BOOL)arg1;
- (id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2;
- (id)previousSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2;
- (id)nextSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2;
- (id)descendantsPassingTest:(id)arg1;
- (id)firstChildPassingTest:(id)arg1;
- (BOOL)isKeyboardRow;
- (void)setParentGroup:(id)arg1;
- (id)highestAncestorGroup;
- (BOOL)canBeGroupedWithOtherGroupables;
- (id)firstDescendantPassingTest:(id)arg1;
- (id)parentGroup;
- (BOOL)isKeyboardContainer;
- (void)setGroupTraits:(int)arg1;
- (int)groupTraits;
- (BOOL)canBeReplacedByChildren;
- (BOOL)allowsChangingExistingGroupingOfContents;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)lastChild;
- (id)firstChild;
- (id)debugDescription;
- (id)descriptionWithLocale:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isGroup;

@end
