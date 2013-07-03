/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUTableDataSource, NSArray;

@interface SUDownloadsTableViewController : SUTableViewController <SUDownloadsChildViewController> {
}

@property(retain) SUTableDataSource * dataSource;
@property(retain) NSArray * scriptButtons;


- (id)_downloadsViewController;
- (id)visibleDownloadCellForDownload:(id)arg1;
- (void)reloadDownloadCellForDownload:(id)arg1;
- (void)setScriptButtons:(id)arg1;
- (id)scriptButtons;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (BOOL)deleteRowAtIndexPath:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;

@end
