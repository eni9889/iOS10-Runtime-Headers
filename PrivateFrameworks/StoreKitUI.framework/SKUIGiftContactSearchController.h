/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSNumber, MFContactsSearchManager, UITableView, MFContactsSearchResultsModel, UIView, <SKUIGiftContactSearchDelegate>, NSArray;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {
    void *_addressBook;
    <SKUIGiftContactSearchDelegate> *_delegate;
    NSArray *_results;
    MFContactsSearchResultsModel *_resultsModel;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

@property <SKUIGiftContactSearchDelegate> * delegate;
@property(readonly) int numberOfResults;
@property(readonly) UIView * searchResultsView;


- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(int)arg1;
- (void)_finishSearchWithResults:(id)arg1;
- (void)_setResults:(id)arg1;
- (void)resetSearch;
- (void)searchForText:(id)arg1;
- (id)searchResultsView;
- (BOOL)cancelSearch;
- (int)numberOfResults;
- (id)initWithAddressBook:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
