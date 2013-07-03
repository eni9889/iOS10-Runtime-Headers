/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipient, UITextField, UIButton, NSCountedSet, MFModernComposeRecipientAtom, MFComposeTextField, MFCorecipientsIndicatorAtom, NSArray, UIView, UITapGestureRecognizer, NSString, NSMutableDictionary, NSMutableArray, NSTimer;

@interface MFComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, UIGestureRecognizerDelegate, MFComposeRecipientAtomDelegate, MFDragSource, MFDragDestination, MFCorecipientsIndicatorAtomDelegate> {
    MFComposeTextField *_textField;
    NSArray *_textFieldConstraints;
    NSMutableArray *_recipients;
    NSMutableDictionary *_atoms;
    NSCountedSet *_uncommentedAddresses;
    struct __CFDictionary { } *_atomPresentationOptionsByRecipient;
    unsigned int _defaultAtomPresentationOptions;
    MFModernComposeRecipientAtom *_selectedAtom;
    MFComposeRecipient *_placeholderRecipient;
    int _dragSourceOriginalIndex;
    MFCorecipientsIndicatorAtom *_corecipientsIndicatorAtom;
    UIButton *_addButton;
    BOOL _editable;
    BOOL _picking;
    BOOL _focused;
    NSArray *_properties;
    int _maxRecipients;
    BOOL _parentIsClosing;
    BOOL _deselectOnNextKeyboardInput;
    BOOL _clearSelectionUIAfterFirstResponder;
    NSTimer *_delayTimer;
    double _inputDelay;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _needsReflow;
    BOOL _needsLayoutConstraintUpdate;
    BOOL _didIgnoreFirstResponderResign;
    BOOL _allowsDragAndDrop;
    BOOL _separatorHidden;
    int _hideLastAtomComma;
}

@property(copy) NSArray * addresses;
@property BOOL editable;
@property int maxRecipients;
@property double inputDelay;
@property(readonly) NSString * text;
@property(readonly) UITextField * textField;
@property(readonly) NSArray * recipients;
@property(readonly) UIView * addButton;
@property(readonly) float offsetForRowWithTextField;
@property(readonly) int numberOfRowsOfTextInField;
@property BOOL didIgnoreFirstResponderResign;
@property BOOL allowsDragAndDrop;
@property BOOL focused;
@property unsigned int defaultAtomPresentationOptions;
@property(readonly) MFCorecipientsIndicatorAtom * corecipientsIndicator;
@property(getter=isSeparatorHidden) BOOL separatorHidden;
@property int hideLastAtomComma;
@property(retain) MFComposeRecipient * placeholderRecipient;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (BOOL)isSeparatorHidden;
- (unsigned int)defaultAtomPresentationOptions;
- (BOOL)focused;
- (double)inputDelay;
- (void)setMaxRecipients:(int)arg1;
- (int)maxRecipients;
- (void)_setNeedsLayoutConstraintUpdate;
- (void)mf_recipientTextField:(id)arg1 didAddRecipientAddress:(id)arg2;
- (void)mf_dismissSearchResults:(id)arg1;
- (BOOL)mf_chooseSelectedSearchResultForTextField:(id)arg1;
- (BOOL)mf_presentSearchResultsForTextField:(id)arg1;
- (void)mf_selectPreviousSearchResultForTextField:(id)arg1;
- (void)mf_selectNextSearchResultForTextField:(id)arg1;
- (BOOL)mf_textFieldShowingSearchResults:(id)arg1;
- (void)didTapShowCorecipientsForIndicatorAtom:(id)arg1 recipients:(id)arg2;
- (id)supportedDropTypes:(id)arg1;
- (int)numberOfRowsOfTextInField;
- (void)_deleteSelectedAtom;
- (void)_delayTimerFired:(id)arg1;
- (void)setDidIgnoreFirstResponderResign:(BOOL)arg1;
- (BOOL)_shouldShowCorecipientsIndicatorAtom;
- (float)_topRowTextWidth;
- (void)_updateLayoutConstraintsAndGetNumberOfRows:(out unsigned int*)arg1 textFieldWillBeLastRow:(out BOOL*)arg2;
- (unsigned int)_addressAtomPresentationOptionsForRecipient:(id)arg1;
- (int)hideLastAtomComma;
- (BOOL)_addable;
- (int)_recipientIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_deselectAtom;
- (void)setPlaceholderRecipient:(id)arg1;
- (BOOL)allowsDragAndDrop;
- (void)clearAllAddressAtomPresentationOptions;
- (id)placeholderRecipient;
- (void)_addRecord:(void*)arg1 identifier:(int)arg2;
- (void)_reflowAnimated:(BOOL)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned int)arg2 animate:(BOOL)arg3;
- (void)_removeUncommentedAddress:(id)arg1;
- (void)_removeAddressAtomPresentationOptionsForRecipient:(id)arg1;
- (void)_addUncommentedAddress:(id)arg1;
- (void)_removeAllRecipients;
- (void)_cancelDelayTimer;
- (void)setHideLastAtomComma:(int)arg1;
- (void)addButtonClicked:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (id)dragInitiatedAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)allowsDrag;
- (void)animatePlaceholderForDragFailure:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })dropRect;
- (void)dragStartedWithItem:(id)arg1;
- (id)viewForDraggedItem:(id)arg1 atScale:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDraggedItem:(id)arg1;
- (void)dragEntered:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dragExited:(id)arg1;
- (void)dragUpdated:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)viewForDrop;
- (void)dragCompletedForItem:(id)arg1 success:(BOOL)arg2;
- (void)dropItem:(id)arg1;
- (id)viewForDragSource;
- (void)setSeparatorHidden:(BOOL)arg1;
- (void)setAddressAtomPresentationOptions:(unsigned int)arg1 forRecipient:(id)arg2;
- (void)setDefaultAtomPresentationOptions:(unsigned int)arg1;
- (id)corecipientsIndicator;
- (id)addButton;
- (void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)setFocused:(BOOL)arg1;
- (BOOL)finishEnteringRecipient;
- (BOOL)containsAddress:(id)arg1;
- (void)addAddress:(id)arg1;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)showCorecipientIndicator:(BOOL)arg1 withCorecipients:(id)arg2 animated:(BOOL)arg3;
- (id)uncommentedAddresses;
- (void)setAllowsDragAndDrop:(BOOL)arg1;
- (void)setInputDelay:(double)arg1;
- (BOOL)didIgnoreFirstResponderResign;
- (float)offsetForRowWithTextField;
- (float)textFieldOffsetForNumberOfRowsToScroll:(unsigned int)arg1 numberOfRowsAboveField:(int)arg2;
- (void)_setNeedsReflow;
- (void)refreshPreferredContentSize;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)setAddresses:(id)arg1;
- (void)reflow;
- (void)setProperty:(int)arg1;
- (void)setProperties:(id)arg1;
- (id)recipients;
- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)text;
- (void)dealloc;
- (void)_tapGestureRecognized:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (id)textField;
- (BOOL)editable;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)textChanged:(id)arg1;
- (BOOL)hasContent;
- (void)setEditable:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)clearText;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)addresses;

@end
