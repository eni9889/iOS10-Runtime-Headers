/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, NSArray, NSString, NSMutableArray;

@interface ABCardGroup : NSObject <NSCopying> {
    NSMutableArray *_items;
    NSMutableArray *_actions;
    NSArray *_actionItems;
    BOOL _useSplitActions;
    BOOL _addSpacerFromPreviousGroup;
    CNContact *_contact;
    NSString *_title;
}

@property(retain) CNContact * contact;
@property(readonly) NSString * title;
@property(readonly) NSArray * actionItems;
@property(readonly) NSArray * displayItems;
@property(readonly) NSArray * editingItems;
@property(readonly) NSArray * actions;
@property BOOL useSplitActions;
@property BOOL addSpacerFromPreviousGroup;

+ (id)groupForContact:(id)arg1;

- (void)setAddSpacerFromPreviousGroup:(BOOL)arg1;
- (void)setUseSplitActions:(BOOL)arg1;
- (void)setContact:(id)arg1;
- (id)contact;
- (void)removeActionWithTitle:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)actionItems;
- (id)editingItems;
- (BOOL)useSplitActions;
- (BOOL)addSpacerFromPreviousGroup;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
- (id)_loadActionItems;
- (id)initWithContact:(id)arg1;
- (id)displayItems;
- (id)title;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)actions;

@end
