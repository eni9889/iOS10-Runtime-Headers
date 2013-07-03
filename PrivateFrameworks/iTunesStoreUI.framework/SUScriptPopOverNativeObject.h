/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIBarButtonItem, SUDOMElement;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject  {
    BOOL _redisplayAfterRotation;
    UIBarButtonItem *_sourceButtonItem;
    SUDOMElement *_sourceDOMElement;
}

@property(retain) UIBarButtonItem * sourceButtonItem;
@property(retain) SUDOMElement * sourceDOMElement;


- (id)sourceButtonItem;
- (BOOL)_isAffectedByWindowNotification:(id)arg1;
- (id)sourceDOMElement;
- (void)setupNativeObject;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)destroyNativeObject;
- (void)setSourceDOMElement:(id)arg1;
- (void)setSourceButtonItem:(id)arg1;
- (void)dealloc;

@end
