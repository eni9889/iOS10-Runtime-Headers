/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class RUILoader, UIAlertView, NSMutableArray, AASetupAssistantService, AAAutoAccountVerifier, <AAUIAccountCreationDelegate>, UINavigationController;

@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate> {
    BOOL _isModal;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    <AAUIAccountCreationDelegate> *_delegate;
    UINavigationController *_parentNavController;
    UINavigationController *_createAccountNavController;
    UIAlertView *_tcConfirmationAlert;
    UIAlertView *_failedToCreateAccountAlert;
    BOOL _over13;
    AASetupAssistantService *_aaService;
    AAAutoAccountVerifier *_verifier;
}


- (unsigned int)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)loadURLRequest:(id)arg1;
- (id)initWithNavController:(id)arg1 isModal:(BOOL)arg2;
- (void)_userAgreedToTCs:(BOOL)arg1;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)_cleanupCreateAppleID:(id)arg1;
- (void)_createAppleAccount;
- (void)_displayConnectionErrorAndDismiss;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cleanupLoader;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end
