/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintingMessageView, NSArray;

@interface UIPrintStatusJobsViewController : UITableViewController  {
    NSArray *_jobs;
    BOOL _autoPush;
    UIPrintingMessageView *_noJobsView;
}


- (id)init;
- (void)dealloc;
- (void)handleJobListDidChange;
- (void)pushSingleJobAnimated:(BOOL)arg1;
- (void)updateJobInfo:(id)arg1;
- (void)updateForJobCountChange;
- (void)updateTableViewCell:(id)arg1 withJob:(id)arg2;
- (id)visibleJobs;
- (void)pushJob:(id)arg1 animated:(BOOL)arg2;
- (void)willReappear;
- (void)loadView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
