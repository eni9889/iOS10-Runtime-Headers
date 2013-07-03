/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABTCC : NSObject  {
    BOOL _calledExternalChangeCallbacks;
    int _simulateType;
    BOOL _simulateAccessPrompt;
    BOOL _simulateAccessPromptGranted;
    unsigned int _simulateAccessPromptDelay;
}

+ (id)sharedInstance;

- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 withDelay:(unsigned int)arg2;
- (void)simulate:(int)arg1;
- (void)accessRequestWithCompletion:(id)arg1;
- (unsigned char)isAccessRestricted;
- (int)accessPreflight;
- (id)_simulateQueue;
- (void)callExternalChangeCallbacks:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
