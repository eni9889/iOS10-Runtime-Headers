/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIStateRestoring>, NSString, MFMailComposeViewController;

@interface UIMailActivity : UIActivity <UIStateRestoring> {
    BOOL _keyboardVisible;
    BOOL _sourceIsManaged;
    BOOL _hasAnyAccount;
    BOOL _hasFilteredAccount;
    NSString *_autosaveIdentifier;
    MFMailComposeViewController *_mailComposeViewController;
}

@property BOOL keyboardVisible;
@property BOOL sourceIsManaged;
@property(retain) NSString * autosaveIdentifier;
@property BOOL hasAnyAccount;
@property BOOL hasFilteredAccount;
@property(retain) MFMailComposeViewController * mailComposeViewController;
@property(readonly) <UIStateRestoring> * restorationParent;
@property(readonly) Class objectRestorationClass;

+ (int)activityCategory;

- (void)setSubject:(id)arg1;
- (id)init;
- (BOOL)sourceIsManaged;
- (void)dealloc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_saveDraft:(id)arg1;
- (void)setMailComposeViewController:(id)arg1;
- (BOOL)_restoreDraft;
- (id)autosaveIdentifier;
- (BOOL)keyboardVisible;
- (BOOL)hasFilteredAccount;
- (BOOL)hasAnyAccount;
- (void)setHasFilteredAccount:(BOOL)arg1;
- (void)setHasAnyAccount:(BOOL)arg1;
- (id)mailComposeViewController;
- (id)_stateRestorationDraftIsAvailable;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (id)_mailDraftRestorationURL;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)autosaveWithHandler:(id)arg1;
- (void)_setSubject:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (id)activityViewController;
- (void)_cleanup;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityType;
- (id)activityTitle;
- (id)_activityImage;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

@end
