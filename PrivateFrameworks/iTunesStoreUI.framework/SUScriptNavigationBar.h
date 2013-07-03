/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScriptNavigationItem>, SUScriptButton, NSArray, NSString, SUScriptNavigationItem;

@interface SUScriptNavigationBar : SUScriptObject  {
}

@property(readonly) SUScriptNavigationItem * backNavigationItem;
@property int barStyle;
@property(readonly) NSArray * navigationItems;
@property(copy) id translucent;
@property(readonly) SUScriptNavigationItem * topNavigationItem;
@property(readonly) int barStyleBlack;
@property(readonly) int barStyleDefault;
@property(retain) SUScriptButton * leftButton;
@property(retain) <SUScriptNavigationItem> * leftItem;
@property(retain) NSString * prompt;
@property(retain) SUScriptButton * rightButton;
@property(retain) <SUScriptNavigationItem> * rightItem;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)setLeftButton:(id)arg1;
- (int)barStyleDefault;
- (int)barStyleBlack;
- (id)translucent;
- (id)topNavigationItem;
- (void)setTopNavigationItem:(id)arg1;
- (void)setRightItem:(id)arg1;
- (void)setLeftItem:(id)arg1;
- (void)setBackNavigationItem:(id)arg1;
- (id)backNavigationItem;
- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;
- (id)_copyTopNavigationItem;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
- (id)rightItem;
- (id)leftItem;
- (id)_topNavigationItem;
- (void)tearDownUserInterface;
- (id)_nativeNavigationBar;
- (id)initWithNativeNavigationBar:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setRightButton:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftButton:(id)arg1 animated:(BOOL)arg2;
- (id)leftButton;
- (void)setRightButton:(id)arg1;
- (id)rightButton;
- (id)attributeKeys;
- (id)init;
- (void)setNavigationItems:(id)arg1;
- (int)barStyle;
- (void)setTranslucent:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (id)navigationItems;
- (void)setPrompt:(id)arg1;
- (id)prompt;

@end
