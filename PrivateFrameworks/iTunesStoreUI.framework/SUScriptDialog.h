/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString;

@interface SUScriptDialog : SUScriptObject  {
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    NSNumber *_destructiveButtonIndex;
    id _textFields;
    NSString *_title;
}

@property(retain) NSString * body;
@property(retain) id buttons;
@property(retain) NSNumber * cancelButtonIndex;
@property(retain) NSNumber * destructiveButtonIndex;
@property(retain) id textFields;
@property(retain) NSString * title;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)showSheetInPopOver:(id)arg1;
- (void)showFromDOMElement:(id)arg1;
- (void)showSheet;
- (void)_logSheetWarnings;
- (id)_nativeDialog;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setTextFields:(id)arg1;
- (void)setButtons:(id)arg1;
- (id)textFields;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)attributeKeys;
- (id)body;
- (void)setBody:(id)arg1;
- (void)dealloc;
- (void)setDestructiveButtonIndex:(id)arg1;
- (id)destructiveButtonIndex;
- (id)buttons;
- (void)dismiss;
- (void)show;
- (void)setCancelButtonIndex:(id)arg1;
- (id)cancelButtonIndex;

@end
