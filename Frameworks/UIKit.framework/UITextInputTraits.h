/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
    int autocapitalizationType;
    int autocorrectionType;
    int spellCheckingType;
    unsigned int keyboardType : 8;
    unsigned int keyboardAppearance : 8;
    int returnKeyType;
    BOOL enablesReturnKeyAutomatically;
    BOOL secureTextEntry;
    struct __CFCharacterSet { } *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    unsigned int insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    BOOL isSingleLineDocument;
    BOOL contentsIsSingleValue;
    BOOL acceptsEmoji;
    BOOL returnKeyGoesToNextResponder;
    BOOL acceptsFloatingKeyboard;
    BOOL acceptsSplitKeyboard;
    BOOL displaySecureTextUsingPlainText;
    BOOL learnsCorrections;
    int emptyContentReturnKeyType;
    int shortcutConversionType;
    BOOL suppressReturnKeyStyling;
    BOOL forceEnableDictation;
    BOOL useInterfaceLanguageForLocalization;
    BOOL deferBecomingResponder;
    BOOL enablesReturnKeyOnNonWhiteSpaceContent;
}

@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(retain) UIColor * insertionPointColor;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIColor * selectionHighlightColor;
@property(retain) UIImage * selectionDragDotImage;
@property unsigned int insertionPointWidth;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property BOOL isSingleLineDocument;
@property BOOL contentsIsSingleValue;
@property BOOL acceptsEmoji;
@property int emptyContentReturnKeyType;
@property BOOL returnKeyGoesToNextResponder;
@property BOOL acceptsFloatingKeyboard;
@property BOOL acceptsSplitKeyboard;
@property BOOL displaySecureTextUsingPlainText;
@property BOOL learnsCorrections;
@property int shortcutConversionType;
@property BOOL suppressReturnKeyStyling;
@property BOOL forceEnableDictation;
@property BOOL useInterfaceLanguageForLocalization;
@property BOOL deferBecomingResponder;
@property BOOL enablesReturnKeyOnNonWhiteSpaceContent;

+ (id)defaultTextInputTraits;
+ (id)traitsByAdoptingTraits:(id)arg1;
+ (BOOL)keyboardTypeRequiresASCIICapable:(int)arg1;

- (void)setContentsIsSingleValue:(BOOL)arg1;
- (int)autocapitalizationType;
- (int)keyboardType;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_setColorsToMatchTintColor:(id)arg1;
- (BOOL)publicTraitsMatchTraits:(id)arg1;
- (void)setToSecureValues;
- (void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)arg1;
- (BOOL)enablesReturnKeyOnNonWhiteSpaceContent;
- (void)setDeferBecomingResponder:(BOOL)arg1;
- (BOOL)deferBecomingResponder;
- (void)setUseInterfaceLanguageForLocalization:(BOOL)arg1;
- (BOOL)useInterfaceLanguageForLocalization;
- (void)setForceEnableDictation:(BOOL)arg1;
- (BOOL)forceEnableDictation;
- (void)setSuppressReturnKeyStyling:(BOOL)arg1;
- (BOOL)suppressReturnKeyStyling;
- (void)setShortcutConversionType:(int)arg1;
- (int)shortcutConversionType;
- (void)setDisplaySecureTextUsingPlainText:(BOOL)arg1;
- (void)setAcceptsSplitKeyboard:(BOOL)arg1;
- (void)setAcceptsFloatingKeyboard:(BOOL)arg1;
- (void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
- (BOOL)returnKeyGoesToNextResponder;
- (void)setEmptyContentReturnKeyType:(int)arg1;
- (int)emptyContentReturnKeyType;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (BOOL)acceptsEmoji;
- (BOOL)contentsIsSingleValue;
- (void)setIsSingleLineDocument:(BOOL)arg1;
- (BOOL)isSingleLineDocument;
- (void)setTextSuggestionDelegate:(id)arg1;
- (id)textSuggestionDelegate;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (int)textLoupeVisibility;
- (void)setInsertionPointWidth:(unsigned int)arg1;
- (unsigned int)insertionPointWidth;
- (void)setSelectionDragDotImage:(id)arg1;
- (id)selectionDragDotImage;
- (void)setSelectionHighlightColor:(id)arg1;
- (id)selectionHighlightColor;
- (void)setSelectionBarColor:(id)arg1;
- (id)selectionBarColor;
- (void)setInsertionPointColor:(id)arg1;
- (id)insertionPointColor;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setLearnsCorrections:(BOOL)arg1;
- (BOOL)learnsCorrections;
- (BOOL)acceptsFloatingKeyboard;
- (BOOL)acceptsSplitKeyboard;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (BOOL)enablesReturnKeyAutomatically;
- (void)setReturnKeyType:(int)arg1;
- (int)returnKeyType;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setSpellCheckingType:(int)arg1;
- (int)spellCheckingType;
- (void)setAutocorrectionType:(int)arg1;
- (int)autocorrectionType;
- (void)setAutocapitalizationType:(int)arg1;
- (BOOL)displaySecureTextUsingPlainText;
- (BOOL)isSecureTextEntry;
- (void)setSecureTextEntry:(BOOL)arg1;
- (int)keyboardAppearance;
- (int)textSelectionBehavior;
- (void)takeTraitsFrom:(id)arg1;
- (void)setToDefaultValues;
- (id)dictionaryRepresentation;

@end
