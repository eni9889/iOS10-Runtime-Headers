/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLogColorizer : NSObject  {
    BOOL _active;
    BOOL _managedBySettings;
    BOOL _preferDarkColors;
    struct AXLogColorTheme { 
        int errorColor; 
        int warningColor; 
        int infoColor; 
        int debugColor; 
    } _colorTheme;
}

@property struct AXLogColorTheme { int x1; int x2; int x3; int x4; } colorTheme;
@property(getter=isActive) BOOL active;
@property BOOL preferDarkColors;
@property(getter=isManagedBySettings) BOOL managedBySettings;

+ (id)colorizeStringIfEnabled:(id)arg1 withColor:(int)arg2;
+ (struct AXLogColorTheme { int x1; int x2; int x3; int x4; })defaultDarkColorsTheme;
+ (struct AXLogColorTheme { int x1; int x2; int x3; int x4; })defaultLightColorsTheme;
+ (id)coloredString:(id)arg1 withColor:(int)arg2;
+ (char *)ansiColorSeqForAXLogColor:(int)arg1;
+ (id)defaultColorizer;

- (id)cyanString:(id)arg1;
- (id)magentaString:(id)arg1;
- (id)blueString:(id)arg1;
- (id)redString:(id)arg1;
- (id)greyString:(id)arg1;
- (id)whiteOrBlackString:(id)arg1;
- (struct AXLogColorTheme { int x1; int x2; int x3; int x4; })colorTheme;
- (BOOL)preferDarkColors;
- (BOOL)isManagedBySettings;
- (void)setPreferDarkColors:(BOOL)arg1;
- (void)setColorTheme:(struct AXLogColorTheme { int x1; int x2; int x3; int x4; })arg1;
- (void)_updateSettingsFromUserPrefs;
- (void)setManagedBySettings:(BOOL)arg1;
- (id)_initAndManageWithSettings:(BOOL)arg1;
- (id)yellowString:(id)arg1;
- (id)greenString:(id)arg1;
- (id)infoString:(id)arg1;
- (id)debugString:(id)arg1;
- (id)warningString:(id)arg1;
- (id)errorString:(id)arg1;
- (BOOL)isActive;
- (id)init;
- (id)description;
- (void)setActive:(BOOL)arg1;

@end
