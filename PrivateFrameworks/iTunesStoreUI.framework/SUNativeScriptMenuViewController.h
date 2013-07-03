/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptFunction, NSArray;

@interface SUNativeScriptMenuViewController : SUMenuViewController  {
    SUScriptFunction *_action;
    NSArray *_menuItems;
}

@property(retain) SUScriptFunction * action;
@property(retain) NSArray * menuItems;


- (BOOL)isMenuItemEnabledAtIndex:(int)arg1;
- (id)titleOfMenuItemAtIndex:(int)arg1;
- (void)performActionForMenuItemAtIndex:(int)arg1;
- (int)numberOfMenuItems;
- (id)copyScriptViewController;
- (void)setMenuItems:(id)arg1;
- (void)dealloc;
- (id)menuItems;
- (void)setAction:(id)arg1;
- (id)action;

@end
