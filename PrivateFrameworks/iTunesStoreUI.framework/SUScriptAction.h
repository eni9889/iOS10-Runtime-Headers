/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {
    NSString *_actionType;
}

@property(copy) NSString * actionType;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)initWithActionType:(id)arg1;
- (void)performAction;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setActionType:(id)arg1;
- (id)actionType;
- (id)attributeKeys;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
