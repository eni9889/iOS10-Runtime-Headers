/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, UITableView, NSString, ABStyleProvider, NSMutableArray, ABPropertyGroup;

@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate> {
    id _delegate;
    id _editedItem;
    NSString *_savedLabel;
    NSString *_selectedLabel;
    NSIndexPath *_selectedPath;
    UITableView *_tableView;
    NSMutableArray *_additionalLabels;
    struct __CFArray { } *_sortedCustomItemLabelInfos;
    struct __CFArray { } *_sortedDefaultItemLabelInfos;
    void *_sortedCustomItemLabelInfosMemory;
    void *_sortedDefaultItemLabelInfosMemory;
    ABPropertyGroup *_propertyGroup;
    int _property;
    int _itemIndex;
    void *_addressBook;
    BOOL _addLabelDisabled;
    BOOL _didCreateNewLabel;
    ABStyleProvider *_styleProvider;
}

@property(readonly) UITableView * tableView;
@property(getter=isAddLabelDisabled) BOOL addLabelDisabled;
@property(retain) ABStyleProvider * styleProvider;
@property void* addressBook;
@property BOOL didCreateNewLabel;

+ (id)defaultLabelForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3;
+ (id)defaultLabelsForPropertyGroup:(id)arg1 index:(int)arg2 addressBook:(void*)arg3 outBestLabelIndex:(int*)arg4 forceIncludeLabels:(id)arg5;
+ (id)defaultLabelsForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3 outBestLabelIndex:(int*)arg4 forceIncludeLabels:(id)arg5;
+ (id)_defaultLabelsForProperty:(int)arg1 person:(id)arg2 propertyGroup:(id)arg3 index:(int)arg4 addressBook:(void*)arg5 outBestLabelIndex:(int*)arg6 forceIncludeLabels:(id)arg7;
+ (id)defaultLabelsForProperty:(int)arg1 policy:(void*)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForProperty:(int)arg1 person:(id)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForPropertyGroup:(id)arg1 person:(id)arg2;
+ (id)builtInLabelsForProperty:(int)arg1;

- (BOOL)didCreateNewLabel;
- (void)setAddLabelDisabled:(BOOL)arg1;
- (BOOL)isAddLabelDisabled;
- (BOOL)shouldPopItem;
- (void)toggleEditing;
- (BOOL)canEdit;
- (id)savedLabel;
- (void)setSavedLabel:(id)arg1;
- (void)setAdditionalLabels:(id)arg1;
- (void)setPropertyGroup:(id)arg1 itemIndex:(int)arg2;
- (BOOL)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (void)_setSelectedLabel:(id)arg1 atPath:(id)arg2;
- (void)createNewCustomLabel;
- (void)_didEndPickingAndConfirmed:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setDidCreateNewLabel:(BOOL)arg1;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (void)reloadItemLabels;
- (void)setSelectedLabel:(id)arg1;
- (id)selectedLabel;
- (BOOL)allowsCustomLabels;
- (void)_matchSelectedPathWithSelectedLabel;
- (void)_setSelectedPath:(id)arg1;
- (void)_setSelectedLabel:(id)arg1;
- (void)resetLabelCaches;
- (void)buildUI;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (BOOL)isEditing;
- (void)setBackgroundColor:(id)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)tableView;
- (void)displayScrollerIndicators;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;

@end
