/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <RadiosPreferencesDelegate>;

@interface RadiosPreferences : NSObject  {
    struct __SCPreferences { } *_prefs;
    int _applySkipCount;
    <RadiosPreferencesDelegate> *_delegate;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    BOOL notifyForExternalChangeOnly;
}

@property BOOL airplaneMode;
@property <RadiosPreferencesDelegate> * delegate;
@property BOOL notifyForExternalChangeOnly;


- (void)setNotifyForExternalChangeOnly:(BOOL)arg1;
- (void)setCallback:(int (*)())arg1 withContext:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (BOOL)airplaneMode;
- (void)refresh;
- (BOOL)notifyForExternalChangeOnly;
- (void)initializeSCPrefs:(id)arg1;
- (void)notifyTarget:(unsigned int)arg1;
- (id)init;
- (void)synchronize;
- (void)setValue:(void*)arg1 forKey:(id)arg2;
- (void*)getValueForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setAirplaneMode:(BOOL)arg1;

@end
