/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSArray, NSTimer, NSString, NSLock, NSObject<SLPlaceDataSource>, UISearchDisplayController;

@interface SLSheetPlaceSearchController : NSObject <UITableViewDataSource, SLPlaceDataSourceDelegate> {
    NSTimer *_delayTimer;
    BOOL _isSearching;
    NSString *_searchString;
    int _retryCount;
    NSLock *_retryLock;
    NSObject<SLPlaceDataSource> *_placeDataSource;
    UISearchDisplayController *_searchDisplayController;
    NSArray *_searchResults;
}

@property(retain) NSObject<SLPlaceDataSource> * placeDataSource;
@property(retain) UISearchDisplayController * searchDisplayController;
@property(retain) NSArray * searchResults;


- (void)setSearchResults:(id)arg1;
- (void)performDelayedFetch:(id)arg1;
- (void)setPlaceDataSource:(id)arg1;
- (void)searchWithSearchString:(id)arg1;
- (void)cancelSearch;
- (id)searchResults;
- (id)initWithPlaceDataSource:(id)arg1 searchDisplayController:(id)arg2;
- (id)placeDataSource;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void).cxx_destruct;
- (void)setSearchDisplayController:(id)arg1;
- (id)searchDisplayController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
