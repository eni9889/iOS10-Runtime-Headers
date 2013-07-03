/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKJavascriptHostDelegate>, GKJavascriptEnvironment, GKJavascriptAccount, WebScriptObject, GKJavascriptGame;

@interface GKJavascriptHost : NSObject  {
    <GKJavascriptHostDelegate> *_weakDelegate;
    GKJavascriptEnvironment *_environment;
    GKJavascriptAccount *_account;
    GKJavascriptGame *_game;
    WebScriptObject *_navBar;
}

@property <GKJavascriptHostDelegate> * delegate;
@property(readonly) int protocolVersion;
@property(retain) GKJavascriptEnvironment * environment;
@property(retain) GKJavascriptAccount * account;
@property(retain) GKJavascriptGame * game;
@property(retain) WebScriptObject * navBar;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;

- (id)navBar;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 secondaryButton:(id)arg4;
- (void)setNavBar:(id)arg1;
- (id)initWithPlayer:(id)arg1 authToken:(id)arg2 game:(id)arg3;
- (void)promptWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 secondaryButton:(id)arg4 options:(id)arg5;
- (void)showKeyboard:(BOOL)arg1;
- (void)reauthenticate:(id)arg1;
- (void)saveFile:(id)arg1 suggestedFilename:(id)arg2 mimeType:(id)arg3;
- (void)setGame:(id)arg1;
- (id)game;
- (int)protocolVersion;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)attributeKeys;
- (id)environment;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setEnvironment:(id)arg1;

@end
