/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactToggleBlockCallerAction : ABContactAction <UIActionSheetDelegate> {
}

@property(readonly) BOOL isBlocked;


- (id)allNumbersAndEmails;
- (void)performActionWithSender:(id)arg1;
- (BOOL)isBlocked;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)unblock;
- (void)block;

@end
