/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIView, UITableView;

@interface TPLegacyAudioDeviceView : UIView <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_deviceTableView;
    UIView *_topBGView;
    UIView *_bottomBGView;
    UIView *_buttonView;
    UIView *_tableView;
    UIView *_subbedView;
    id _delegate;
    BOOL _subbedOutTable;
}


- (void)suboutTable;
- (void)_setupButtons;
- (void)_setupSurroundingTableViews;
- (id)_tableFooterImage;
- (id)_tableHeaderImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForTable;
- (void)_takedownTable;
- (id)_muteButtonForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForNumButtons:(int)arg1;
- (void)_takedownButtons;
- (id)_muteImage;
- (void)muteButtonPressed:(id)arg1;
- (void)setActiveRow:(int)arg1;
- (void)selectRow:(int)arg1;
- (void)_setupTable;
- (void)showTable;
- (id)_selectedImage;
- (id)_unselectedImage;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)buttonPressed:(id)arg1;
- (id)_activeImage;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadData;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
