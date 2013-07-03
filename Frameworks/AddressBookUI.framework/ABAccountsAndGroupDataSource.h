/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, ABModel, NSDictionary, ACAccountStore;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource> {
    NSArray *_accountIdentifiers;
    NSArray *_accountDisplayNames;
    NSDictionary *_groupsByAccountIdentifier;
    ACAccountStore *_accountStore;
    BOOL _hidesSearchableSources;
    BOOL _hidesGlobalGroupWrapper;
    BOOL _dirty;
    ABModel *_model;
}

@property(retain) ABModel * model;
@property BOOL hidesSearchableSources;
@property BOOL hidesGlobalGroupWrapper;
@property(getter=isDirty) BOOL dirty;
@property(retain) ACAccountStore * accountStore;


- (void)setHidesGlobalGroupWrapper:(BOOL)arg1;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (void)cancelScheduledRefresh;
- (void)scheduleRefresh;
- (int)numberOfGroupsForAccountIdentifier:(id)arg1;
- (id)indexPathForGroupWrapper:(id)arg1;
- (id)defaultGroupWrapper;
- (id)accountDisplayNameAtIndex:(int)arg1;
- (int)numberOfGroupsInAccountAtIndex:(int)arg1;
- (void)reloadDataIncludingAccountStore:(BOOL)arg1 usingArchivedState:(BOOL)arg2;
- (BOOL)hidesGlobalGroupWrapper;
- (BOOL)hidesSearchableSources;
- (id)newContactsFilterFromSelectedGroupWrappers;
- (id)groupWrapperForIndexPath:(id)arg1;
- (void)setModel:(id)arg1;
- (id)model;
- (void)setDirty:(BOOL)arg1;
- (id)accountStore;
- (BOOL)isDirty;
- (void)setAccountStore:(id)arg1;
- (void)dealloc;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadData;

@end
