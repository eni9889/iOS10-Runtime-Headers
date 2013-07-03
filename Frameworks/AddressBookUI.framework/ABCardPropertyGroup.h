/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, NSArray;

@interface ABCardPropertyGroup : ABCardGroup  {
    NSArray *_propertyItems;
    NSArray *_displayItems;
    NSArray *_editingItems;
    NSArray *_deletedItems;
    BOOL _showActionsWhenEmpty;
    BOOL _isAdded;
    NSString *_property;
    NSArray *_contacts;
}

@property(readonly) NSString * property;
@property(readonly) NSArray * propertyItems;
@property(copy) NSArray * contacts;
@property BOOL showActionsWhenEmpty;
@property(getter=isMultiValue,readonly) BOOL multiValue;
@property(getter=isFixedValue,readonly) BOOL fixedValue;
@property(getter=isMultiLine,readonly) BOOL multiLine;
@property(readonly) BOOL allowsAdding;
@property BOOL isAdded;
@property(retain) NSArray * editingItems;

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;

- (void)saveChanges;
- (void)setContacts:(id)arg1;
- (void)removeEditingItem:(id)arg1;
- (BOOL)addEditingItem;
- (BOOL)isMultiLine;
- (BOOL)allowsAdding;
- (id)_nextAvailableServiceInServices:(id)arg1;
- (id)propertyItems;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3;
- (BOOL)_shoulShowGroupWhenEditing:(BOOL)arg1;
- (BOOL)isAdded;
- (BOOL)showActionsWhenEmpty;
- (id)_mergeItems:(id)arg1 forEditing:(bool)arg2;
- (void)saveChangesForItems:(id)arg1;
- (void)setEditingItems:(id)arg1;
- (id)emptyLabeledValue;
- (void)setIsAdded:(BOOL)arg1;
- (BOOL)canAddEditingItem;
- (id)nextAvailableLabel;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableSocialService;
- (BOOL)isFixedValue;
- (BOOL)isMultiValue;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;
- (void)setShowActionsWhenEmpty:(BOOL)arg1;
- (id)_loadPropertyItems;
- (id)editingItems;
- (id)displayItems;
- (id)contacts;
- (BOOL)isRequired;
- (id)property;
- (void)dealloc;
- (id)description;
- (void)reloadData;

@end
