/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSLocaleController : PSListController  {
    PSSpecifier *_checkedSpecifier;
    BOOL _firstAppearance;
}


- (void)localeChangedAction;
- (id)locale:(id)arg1;
- (void)subcategorySelected:(id)arg1 specifier:(id)arg2;
- (void)addLanguage:(id)arg1 toSupportedLanguages:(id)arg2;
- (void)updateChecked:(id)arg1;
- (void)setLocale:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
