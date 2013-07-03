/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIKeyboardImplGeometryDelegate>, UIKeyboardAutocorrectionController, UIKeyboardTaskQueue, NSMutableArray, TIKeyboardState, NSString, NSTimer, UIEvent, UIDelayedAction, <UIKeyInput>, UIAlertView, UIResponder<UITextInput>, <UIKeyboardRecording><UIApplicationEventRecording>, UIResponder<UIKeyInput>, TIKeyboardLayout, <UIKeyboardCandidateList>, NSMutableDictionary, TIKeyboardCandidateResultSet, TIKeyboardInputManagerStub, UITextInputTraits, _UIActionWhenIdle, UIAutocorrectInlinePrompt, UITextInputArrowKeyHistory, UIResponder<UITextInputPrivate>, UIKeyboardLayout, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, TIKeyboardTouchEvent, <UIKeyboardTypology>, <UIKeyboardInput>, UIResponder, TIKeyboardInputManagerState, UIView;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate> {
    <UIKeyInput> *m_delegate;
    UIKeyboardTaskQueue *m_taskQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id m_externalTask;

    TIKeyboardState *m_keyboardState;
    TIKeyboardInputManagerState *m_inputManagerState;
    UIView *m_languageIndicator;
    NSString *m_previousInputString;
    TIKeyboardInputManagerStub *m_inputManager;
    UIKeyboardAutocorrectionController *m_autocorrectionController;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIDelayedAction *m_autocorrectPromptAction;
    TIKeyboardCandidateResultSet *m_candidateResultSet;
    <UIKeyboardCandidateList> *m_candidateList;
    UIView *m_markedTextOverlay;
    <UIKeyboardImplGeometryDelegate> *m_geometryDelegate;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    UIKeyboardLayout *m_layout;
    NSMutableDictionary *m_keyedLayouts;
    NSString *m_inputModeLastChosen;
    struct { 
        NSTimer *timer; 
        UIEvent *eventToRepeat; 
        BOOL firstRepeat; 
    } m_hardwareRepeat;
    NSTimer *m_autoDeleteTimer;
    BOOL m_autoDeleteJustFired;
    unsigned int m_autoDeleteCount;
    double m_autoDeleteLastDelete;
    double m_autoDeleteInterval;
    unsigned long m_autoDeleteShiftCharacter;
    UIDelayedAction *m_longPressAction;
    int m_orientation;
    int m_originalOrientation;
    struct CGPoint { 
        float x; 
        float y; 
    } m_inputPoint;
    int m_changeCount;
    double m_changeTime;
    id m_changedDelegate;
    struct __CFRunLoopObserver { } *m_observer;
    unsigned int m_textInputChangingCount;
    BOOL m_textInputChangingText;
    BOOL m_textInputChangingDirection;
    BOOL m_textInputChangesIgnored;
    BOOL m_insideKeyInputDelegateCall;
    UITextInputTraits *m_defaultTraits;
    UITextInputTraits *m_traits;
    int m_returnKeyState;
    int m_currentDirection;
    int m_contextWordDepth;
    BOOL m_autoDeleteOK;
    BOOL m_autocapitalizationPreference;
    BOOL m_autocorrectPromptTimerFired;
    BOOL m_autocorrectionPreference;
    BOOL m_autoshift;
    BOOL m_caretShowingNow;
    BOOL m_changeNotificationDisabled;
    BOOL m_correctionLearningAllowed;
    BOOL m_delegateIsSMSTextView;
    BOOL m_delegateRequiresKeyEvents;
    BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_hardwareKeyboardAttached;
    BOOL m_inDealloc;
    BOOL m_initializationDone;
    BOOL m_performanceLoggingEnabled;
    BOOL m_selecting;
    BOOL m_shift;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_settingShift;
    BOOL m_suggestionsShownForCurrentDeletion;
    BOOL m_originalShouldSkipCandidateSelection;
    BOOL m_updatingPreferences;
    BOOL m_changingGeometryWithSameOrientation;
    BOOL m_suppressGeometryChangeNotifications;
    BOOL m_acceptingCandidate;
    BOOL m_userChangedSelection;
    BOOL m_shouldChargeKeys;
    BOOL m_longPress;
    BOOL m_replacingWord;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_delegateAdoptsTextInput;
    BOOL m_delegateAdoptsTextInputPrivate;
    BOOL m_delegateAdoptsKeyboardInput;
    BOOL m_clientVariantSupportEnabled;
    BOOL m_clientVariantSupportEnabledEver;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    BOOL m_preRotateShift;
    BOOL m_preRotateShiftLocked;
    BOOL m_showInputModeIndicator;
    BOOL m_suppressUpdateCandidateView;
    BOOL m_shouldUpdateCacheOnInputModesChange;
    BOOL m_shouldSetInputModeInNextRun;
    BOOL m_rivenCenterFilled;
    float m_splitProgress;
    NSString *m_currentUsedInputMode;
    NSString *m_lastUsedInputMode;
    BOOL m_needsCandidates;
    BOOL m_shouldSkipCandidateGeneration;
    BOOL m_updateLayoutOnShowKeyboard;
    BOOL m_receivedCandidatesInCurrentInputMode;
    int _currentAlertReason;
    BOOL m_scrolling;
    unsigned int m_previousSpaceKeyBehavior;
    BOOL m_showsCandidateBar;
    BOOL m_showsCandidateInline;
    BOOL committingCandidate;
    BOOL geometryIsChanging;
    BOOL m_hardwareKeyboardIsSeen;
    BOOL m_softwareKeyboardShownByTouch;
    TIKeyboardTouchEvent *m_touchEventWaitingForKeyInputEvent;
    _UIActionWhenIdle *m_delayedCandidateRequest;
    _UIActionWhenIdle *m_deferredReleaseInputManagerAction;
    <UIKeyboardTypology> *typologyRecorder;
    UIAlertView *keyboardAlertView;
}

@property(retain) id changedDelegate;
@property BOOL showInputModeIndicator;
@property BOOL shouldSetInputModeInNextRun;
@property BOOL showsCandidateBar;
@property BOOL receivedCandidatesInCurrentInputMode;
@property BOOL showsCandidateInline;
@property BOOL geometryIsChanging;
@property BOOL shouldSkipCandidateSelection;
@property(readonly) UIKeyboardTaskQueue * taskQueue;
@property(readonly) BOOL centerFilled;
@property BOOL rivenSplitLock;
@property(readonly) unsigned int minimumTouchesForTranslation;
@property(readonly) BOOL splitTransitionInProgress;
@property(retain) <UIKeyboardRecording><UIApplicationEventRecording> * recorder;
@property(retain) <UIKeyboardTypology> * typologyRecorder;
@property(getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;
@property(retain) UIResponder<UIKeyInput> * delegate;
@property <UIKeyboardImplGeometryDelegate> * geometryDelegate;
@property(readonly) UIResponder<UITextInput> * inputDelegate;
@property(readonly) UIResponder<UITextInputPrivate> * privateInputDelegate;
@property(readonly) <UIKeyboardInput> * legacyInputDelegate;
@property(retain) TIKeyboardLayout * layoutForKeyHitTest;
@property(readonly) UIResponder * delegateAsResponder;
@property(retain) UITextInputArrowKeyHistory * arrowKeyHistory;
@property(retain) TIKeyboardInputManagerStub * inputManager;
@property(retain) TIKeyboardInputManagerState * inputManagerState;
@property(copy) id externalTask;
@property(readonly) UIKeyboardAutocorrectionController * autocorrectionController;
@property(retain) TIKeyboardTouchEvent * touchEventWaitingForKeyInputEvent;
@property(retain) _UIActionWhenIdle * delayedCandidateRequest;
@property(retain) _UIActionWhenIdle * deferredReleaseInputManagerAction;
@property(retain) id changedDelegate;
@property(retain) NSString * lastUsedInputMode;
@property(retain) NSString * currentUsedInputMode;
@property(readonly) BOOL shouldShowCandidateBar;
@property(retain) UIAlertView * keyboardAlertView;
@property BOOL committingCandidate;
@property BOOL hardwareKeyboardIsSeen;
@property BOOL softwareKeyboardShownByTouch;

+ (void)_clearHardwareKeyboardMinimizationPreference;
+ (void)setParentTestForProfiling:(id)arg1;
+ (int)interfaceOrientationForSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGPoint { float x1; float x2; })persistentDictationWindowOffset;
+ (void)setPersistentDictationWindowOffset:(struct CGPoint { float x1; float x2; })arg1;
+ (void)setPersistentDictationTargetZone:(int)arg1;
+ (int)persistentDictationTargetZone;
+ (void)setPersistentOffset:(struct CGPoint { float x1; float x2; })arg1;
+ (void)setPersistentSplitProgress:(float)arg1;
+ (BOOL)rivenTranslationPreference;
+ (BOOL)rivenInstalled;
+ (float)additionalInstanceHeightLoading;
+ (id)normalizedInputModesFromPreference;
+ (void)hardwareKeyboardAvailabilityChanged;
+ (unsigned int)convertToTextInputAutocapitalizationType:(int)arg1;
+ (struct CGPoint { float x1; float x2; })persistentOffset;
+ (BOOL)rivenPreference;
+ (void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(BOOL)arg2;
+ (float)persistentSplitProgress;
+ (BOOL)supportsSplit;
+ (void)suppressSetPersistentOffset:(BOOL)arg1;
+ (unsigned int)translateToTextInputKeyboardType:(int)arg1;
+ (void)markElapsed:(id)arg1;
+ (float)splitProgress;
+ (void)markPerformance:(id)arg1;
+ (BOOL)isSplit;
+ (float)additionalInstanceHeight;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize { float x1; float x2; })_defaultSizeForInterfaceOrientation:(int)arg1;
+ (id)orientationKeyForOrientation:(int)arg1;
+ (id)keyboardScreen;
+ (Class)layoutClassForInputMode:(id)arg1 keyboardType:(int)arg2;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize { float x1; float x2; })sizeForInterfaceOrientation:(int)arg1;
+ (void)releaseSharedInstance;
+ (id)activeInstance;
+ (void)applicationWillSuspend:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (id)sharedInstance;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)enable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)detach;
- (void)insertText:(id)arg1;
- (void)deleteFromInput;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)userSelectedCurrentCandidate;
- (id)layoutState;
- (id)inputManagerState;
- (void)setCandidates:(id)arg1;
- (id)markedText;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)interfaceOrientation;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)keyboardRecordingEnabled;
- (void)_releaseInputManager;
- (void)_resetInputLocation;
- (BOOL)_needsCandidates;
- (int)_positionInCandidateList:(id)arg1;
- (BOOL)_hasCandidates;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(BOOL)arg1;
- (id)_getLocalizedInputMode;
- (void)setTextInputChangesIgnored:(BOOL)arg1;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (BOOL)keyboardDrawsOpaque;
- (void)clearExcessKeyboardMemory;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)launchTypologyApplication;
- (id)_getCurrentKeyplaneName;
- (id)_getCurrentKeyboardName;
- (BOOL)typologyEnabled;
- (BOOL)isAutoDeleteActive;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (int)textInputChangingCount;
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;
- (void)updateFromTextInputTraits;
- (BOOL)hasAutoRepeat;
- (void)_setShiftLockedEnabled:(BOOL)arg1;
- (void)_setInputManager:(id)arg1;
- (void)timeElapsed:(unsigned int)arg1 message:(id)arg2;
- (void)timeMark:(unsigned int)arg1;
- (void)timeMark:(unsigned int)arg1 message:(id)arg2;
- (BOOL)geometryIsChanging;
- (void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1;
- (BOOL)receivedCandidatesInCurrentInputMode;
- (void)setShouldSetInputModeInNextRun:(BOOL)arg1;
- (BOOL)shouldSetInputModeInNextRun;
- (void)setShowInputModeIndicator:(BOOL)arg1;
- (void)setGeometryDelegate:(id)arg1;
- (id)geometryDelegate;
- (BOOL)caretVisible;
- (void)startCaretBlinkIfNeeded;
- (void)showKeyboardIfNeeded;
- (void)dismissKeyboard;
- (BOOL)isLongPress;
- (void)touchLongPressTimer;
- (void)startAutoDeleteTimer;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (BOOL)stringIsExemptFromChecker:(id)arg1;
- (id)autocorrectionRecordForWord:(id)arg1;
- (void)updateAutocorrectPromptDisplay:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)handleDelayedActionUpdateAutocorrectPrompt;
- (BOOL)returnKeyEnabled;
- (id)returnKeyDisplayName;
- (id)autocorrectPrompt;
- (void)setShowsCandidateInline:(BOOL)arg1;
- (void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (BOOL)displaysCandidates;
- (void)replaceText:(id)arg1;
- (void)addInputObject:(id)arg1;
- (void)acceptCurrentCandidateIfSelected;
- (void)removeAutocorrection;
- (void)updateLayoutAndSetShift;
- (void)addInputString:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)handleClear;
- (void)handleDelete;
- (void)keyDeactivated;
- (void)keyActivated;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (void)forceShiftUpdate;
- (BOOL)shiftLockedEnabled;
- (BOOL)isShiftLocked;
- (BOOL)isAutoShifted;
- (BOOL)isShifted;
- (void)setShiftLockedForced:(BOOL)arg1;
- (void)toggleShift;
- (void)recomputeActiveInputModes;
- (id)inputManager;
- (void)performHitTestForTouchEvent:(id)arg1 keyCodeHandler:(id)arg2 executionContext:(id)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 delayed:(BOOL)arg2;
- (void)generateAutocorrectionWithExecutionContext:(id)arg1;
- (id)currentInputContextFromInputDelegateWithWordRange:(id)arg1;
- (id)markedTextOverlay;
- (void)unmarkText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inputString:(id)arg3;
- (void)handleObserverCallback;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (BOOL)changeNotificationDisabled;
- (void)setDefaultTextInputTraits:(id)arg1;
- (BOOL)autocorrectSpellingEnabled;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)prepareLayoutForInterfaceOrientation:(int)arg1;
- (id)inputModeLastChosen;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)setInputModeToNextInPreferredList;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (id)hardwareKeyboardsSeenPreference;
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)arg1;
- (id)inputModeFirstPreference;
- (void)saveInputModesPreference:(id)arg1;
- (BOOL)keyboardsExpandedPreference;
- (BOOL)swipeToTabPreference;
- (void)cancelSplitTransition;
- (BOOL)hideAccessoryViewsDuringSplit;
- (unsigned int)minimumTouchesForTranslation;
- (BOOL)rivenSplitLock;
- (void)defaultsDidChange;
- (void)setLayoutForKeyHitTest:(id)arg1;
- (id)layoutForKeyHitTest;
- (void)setCandidateList:(id)arg1 updateCandidateView:(BOOL)arg2;
- (BOOL)needsKeyHitTestResults;
- (BOOL)canHandleKeyHitTest;
- (void)clearSelection;
- (BOOL)caretBlinks;
- (BOOL)hardwareKeyboardIsSeen;
- (void)handleStringInput:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3;
- (void)completeHandleKeyEvent:(id)arg1;
- (BOOL)isValidKeyInput:(id)arg1;
- (BOOL)handleKeyCommand:(id)arg1 repeatOkay:(BOOL*)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3;
- (void)firstHardwareAutoRepeat:(id)arg1;
- (void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2;
- (void)setSoftwareKeyboardShownByTouch:(BOOL)arg1;
- (void)toggleSoftwareKeyboard;
- (BOOL)softwareKeyboardShownByTouch;
- (void)setHardwareKeyboardIsSeen:(BOOL)arg1;
- (void)updateKeyboardEventsLagging:(id)arg1;
- (void)handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned int)arg2 inInputString:(id)arg3 executionContext:(id)arg4;
- (id)externalTask;
- (void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)hardwareAutoRepeat:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(BOOL)arg1;
- (void)hardwareKeyboardAvailabilityChanged;
- (void)callLayoutLongPressAction;
- (void)longPressAction;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)handleDelayedActionLongPress;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)completeHandleAutoDelete;
- (void)handleAutoDeleteWithExecutionContext:(id)arg1;
- (void)autoDeleteTimerFired:(id)arg1;
- (void)generateReplacementsForString:(id)arg1 candidatesHandler:(id)arg2 executionContext:(id)arg3;
- (BOOL)delegateSuggestionsForCurrentInput;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)animateAutocorrection;
- (void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3;
- (id)_autocorrectPromptRects;
- (void)touchAutocorrectPromptTimer;
- (id)_rangeForAutocorrectionText:(id)arg1;
- (id)_inputForAutocorrectionCandidate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToAutocorrectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegateView:(id)arg2 container:(id)arg3;
- (BOOL)delegateSupportsCorrectionUI;
- (id)inputOverlayContainer;
- (void)_handleKeyBehaviors:(id)arg1 withState:(id)arg2;
- (id)_keyboardBehaviorState;
- (void)_handleKeyBehavior:(unsigned int)arg1 forKeyType:(id)arg2;
- (void)acceptFirstCandidate;
- (void)showNextCandidates;
- (void)_nop;
- (id)_canonicalKeyTypeForKeyType:(id)arg1;
- (BOOL)noContent;
- (void)clearAutocorrectPromptTimer;
- (void)resizeCandidateBarWithDelta:(float)arg1;
- (void)updateAutocorrectPrompt:(id)arg1;
- (void)handleDelayedActionUpdateTextCandidateView;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (void)_setNeedsCandidates:(BOOL)arg1;
- (void)generateCandidatesAsynchronously;
- (BOOL)shouldIgnoreCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (void)applyAutocorrection;
- (void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)addInputObject:(id)arg1 executionContext:(id)arg2;
- (void)updateKeyboardConfigurations;
- (void)generateCandidatesWithOptions:(int)arg1;
- (void)acceptCurrentCandidateWithExecutionContext:(id)arg1;
- (void)setCommittingCandidate:(BOOL)arg1;
- (BOOL)committingCandidate;
- (void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2;
- (void)completeAcceptCandidate;
- (void)acceptCandidate:(id)arg1;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2 executionContext:(id)arg3;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (void)completeDeleteFromInput;
- (void)deleteOnceFromInputWithExecutionContext:(id)arg1;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)arg1;
- (void)scheduleReplacementsAfterDeletionToEndOfWord;
- (BOOL)selectionIsEndOfWord;
- (void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned long)arg1;
- (void)setPhraseBoundary:(unsigned int)arg1;
- (unsigned int)phraseBoundary;
- (void)updateDoubleSpacePeriodStateForString:(id)arg1;
- (BOOL)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3;
- (void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(BOOL)arg2;
- (BOOL)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2;
- (void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2;
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;
- (BOOL)callShouldInsertText:(id)arg1;
- (void)addWordTerminator:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4;
- (void)completeAddInputString:(id)arg1;
- (void)moveSelectionToEndOfWord;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2 forInput:(id)arg3;
- (BOOL)nextCharacterIsWordCharacter;
- (id)acceptedAutocorrectionForWordTerminator:(id)arg1;
- (void)updateChangeTimeAndIncrementCount;
- (void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1;
- (void)completeAcceptCandidateBeforeAddingInput:(id)arg1 executionContext:(id)arg2;
- (id)inputEventForInputString:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)setExternalTask:(id)arg1;
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)arg1;
- (BOOL)isInHardwareKeyboardMode;
- (BOOL)callLayoutIgnoresShiftState;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2;
- (void)deleteBackwardAndNotify:(BOOL)arg1;
- (BOOL)acceptInputString:(id)arg1;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (BOOL)callShouldReplaceExtendedRange:(unsigned int)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3;
- (void)handleClearWithExecutionContext:(id)arg1;
- (void)handleDeleteWithExecutionContext:(id)arg1;
- (void)handleDeleteAsRepeat:(BOOL)arg1 executionContext:(id)arg2;
- (void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)deleteFromInputWithExecutionContext:(id)arg1;
- (BOOL)suppliesCompletions;
- (void)setShiftNeedsUpdate;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (BOOL)callLayoutUsesAutoShift;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (void)notifyShiftState;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (void)callLayoutSetAutoshift:(BOOL)arg1;
- (void)callLayoutSetShift:(BOOL)arg1;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (BOOL)isAllowedInputMode:(id)arg1;
- (BOOL)isDesiredInputMode:(id)arg1;
- (void)setInputManagerState:(id)arg1;
- (BOOL)_systemHasKbd;
- (void)removeAllDynamicDictionaries;
- (void)handleReplyToPerformHitTestWithTask:(id)arg1 executionContext:(id)arg2;
- (void)continuePerformHitTestToKeyCode:(int)arg1 keyCodeHandler:(id)arg2;
- (id)replyHandlerForPerformHitTestForTouchEventWithKeyCodeHandler:(id)arg1 executionContext:(id)arg2;
- (void)handleReplyToGenerateReplacementsForStringWithTask:(id)arg1 executionContext:(id)arg2;
- (void)continueGenerateReplacementsForStringWithCandidates:(id)arg1 candidatesHandler:(id)arg2;
- (id)replyHandlerForGenerateReplacementsForStringWithCandidatesHandler:(id)arg1 executionContext:(id)arg2;
- (void)handleReplyToHandleAcceptedCandidateWithTask:(id)arg1 executionContext:(id)arg2;
- (void)continueHandleAcceptedCandidateWithOperations:(id)arg1;
- (id)replyHandlerForHandleAcceptedCandidateWithExecutionContext:(id)arg1;
- (void)handleReplyToGenerateAutocorrectionWithTask:(id)arg1 executionContext:(id)arg2;
- (void)continueGenerateAutocorrectionWithOperations:(id)arg1;
- (id)replyHandlerForGenerateAutocorrectionWithExecutionContext:(id)arg1;
- (void)handleReplyToGenerateCandidatesAsynchronouslyWithTask:(id)arg1;
- (void)continueGenerateCandidatesAsynchronouslyWithOperations:(id)arg1;
- (id)replyHandlerForGenerateCandidatesAsynchronouslyWithSelectedCandidate:(id)arg1;
- (void)generateCandidatesAsynchronouslyWithMaxCandidateCount:(unsigned int)arg1 selectedCandidate:(id)arg2;
- (void)generateCandidatesAsynchronouslyWithMaxCandidateCount:(unsigned int)arg1;
- (void)handleReplyToHandleKeyboardInputWithTask:(id)arg1 executionContext:(id)arg2;
- (void)continueHandleKeyboardInputWithOperations:(id)arg1;
- (id)replyHandlerForHandleKeyboardInputWithExecutionContext:(id)arg1;
- (void)setTouchEventWaitingForKeyInputEvent:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1;
- (id)touchEventWaitingForKeyInputEvent;
- (void)setDelayedCandidateRequest:(id)arg1;
- (id)delayedCandidateRequest;
- (void)performOperations:(id)arg1;
- (void)handleReplyToSyncToKeyboardStateWithTask:(id)arg1 executionContext:(id)arg2;
- (void)continueSyncToKeyboardStateWithOperations:(id)arg1;
- (id)replyHandlerForSyncToKeyboardStateWithExecutionContext:(id)arg1;
- (void)refreshKeyboardState;
- (void)flushTouchEventWaitingForKeyInputEventIfNecessary;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)callChangedSelection;
- (void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1;
- (void)completeUpdateForChangedSelection:(BOOL)arg1;
- (void)setPreviousInputString:(id)arg1;
- (void)updateForChangedSelectionWithExecutionContext:(id)arg1;
- (void)prepareForSelectionChange;
- (BOOL)hasEditableMarkedText;
- (id)searchStringForMarkedText;
- (id)inputStringFromPhraseBoundary;
- (BOOL)centerFilled;
- (int)_clipCornersOfView:(id)arg1;
- (BOOL)splitTransitionInProgress;
- (void)resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1;
- (void)callLayoutUpdateReturnKey;
- (void)setShowsCandidateBar:(BOOL)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (BOOL)_shouldShowCandidateBar:(BOOL)arg1;
- (BOOL)currentKeyboardTraitsAllowCandidateBar;
- (BOOL)showsCandidateInline;
- (BOOL)isUsingDictationLayout;
- (void)generateCandidates;
- (void)clearLongPressTimer;
- (void)releaseSuppressUpdateCandidateView;
- (void)setAutocorrection:(id)arg1;
- (void)updateLayoutIfNeeded;
- (void)setGeometryIsChanging:(BOOL)arg1;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2;
- (void)acceptCurrentCandidate;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (void)fadeAutocorrectPrompt;
- (id)delegateAsResponder;
- (void)deleteForwardAndNotify:(BOOL)arg1;
- (void)movePhraseBoundaryToDirection:(int)arg1;
- (void)setArrowKeyHistory:(id)arg1;
- (id)arrowKeyHistory;
- (void)handleAutoDelete;
- (void)updateObserverState;
- (void)updateTextCandidateView;
- (void)updateAutocorrectPromptAction;
- (id)legacyInputDelegate;
- (void)selectionDidChange:(id)arg1;
- (void)setShiftOffIfNeeded;
- (void)setChanged;
- (void)updateReturnKey:(BOOL)arg1;
- (void)selectionWillChange:(id)arg1;
- (BOOL)isAutoFillMode;
- (BOOL)checkSpellingPreferenceForTraits;
- (void)releaseInputManagerIfInactive;
- (void)setDeferredReleaseInputManagerAction:(id)arg1;
- (id)deferredReleaseInputManagerAction;
- (void)startKeyboardRecording;
- (void)callLayoutUpdateAllLocalizedKeys;
- (void)updateShiftState;
- (void)updateForChangedSelection;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (BOOL)delegateIsSMSTextView;
- (void)clearTransientState;
- (void)callChanged;
- (void)clearShiftState;
- (void)stopAutoDelete;
- (void)storeDelegateConformance;
- (int)changeCount;
- (id)taskQueue;
- (void)setCaretVisible:(BOOL)arg1;
- (void)stopKeyboardRecording;
- (id)recorder;
- (void)updateReturnKey;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
- (id)privateInputDelegate;
- (void)setShiftLocked:(BOOL)arg1;
- (void)setOrientation;
- (BOOL)showInputModeIndicator;
- (void)showInternationalKeyInfoAlertIfNeeded;
- (void)setInputModeLastChosenPreference;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1;
- (id)getLastUsedInputMode;
- (id)lastUsedInputMode;
- (id)currentUsedInputMode;
- (void)showInformationalAlertIfNeededForReason:(int)arg1;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1 preserveIfPossible:(BOOL)arg2;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)clearLanguageIndicator;
- (id)inputModeLastUsedPreference;
- (id)typologyRecorder;
- (void)callLayoutUpdateLocalizedKeys;
- (BOOL)isMinimized;
- (void)setInputManagerFromInputMode:(id)arg1;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (id)inputModeLastChosenPreference;
- (BOOL)checkSpellingPreference;
- (BOOL)autocorrectionPreference;
- (void)setRivenSplitLock:(BOOL)arg1;
- (void)syncInputManagerToKeyboardState;
- (void)setSplitProgress:(float)arg1;
- (struct CGSize { float x1; float x2; })dragGestureSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (void)recomputeActiveInputModesFromList:(id)arg1;
- (void)updateInputManagerAutocapitalizationType;
- (BOOL)autocapitalizationPreference;
- (void)setAutocorrectSpellingEnabled:(BOOL)arg1;
- (BOOL)autocorrectionPreferenceForTraits;
- (void)updateCandidateDisplay;
- (void)clearChangeTimeAndCount;
- (void)setKeyboardAlertView:(id)arg1;
- (id)keyboardAlertView;
- (void)clearInput;
- (id)autocorrectionController;
- (void)setInputMode:(id)arg1;
- (void)setCurrentUsedInputMode:(id)arg1;
- (void)setLastUsedInputMode:(id)arg1;
- (void)removeAutocorrectPrompt;
- (void)setTypologyRecorder:(id)arg1;
- (void)setRecorder:(id)arg1;
- (BOOL)performanceLoggingPreference;
- (void)selectionScrolling:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (void)delayedInit;
- (void)installTypology;
- (void)installRecorder;
- (void)setInputModeFromPreferences;
- (BOOL)automaticMinimizationEnabled;
- (void)setInSplitKeyboardMode:(id)arg1;
- (void)refreshRivenPreferences;
- (id)UILanguagePreference;
- (id)inputModePreference;
- (BOOL)doubleSpacePeriodPreference;
- (BOOL)shiftLockPreference;
- (void)takeTextInputTraitsFromDelegate;
- (BOOL)shouldShowCandidateBar;
- (BOOL)showsCandidateBar;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (void)acceptAutocorrection;
- (BOOL)usesCandidateSelection;
- (void)clearLayouts;
- (void)clearTimers;
- (void)clearAnimations;
- (void)clearDelegate;
- (void)setInputManager:(id)arg1;
- (void)geometryChangeDone:(BOOL)arg1;
- (void)prepareForGeometryChange;
- (void)candidateListSelectionDidChange:(id)arg1;
- (BOOL)supportsNumberKeySelection;
- (id)_layout;
- (id)candidateList;
- (void)revealHiddenCandidates;
- (void)jumpToCompositions;
- (void)showNextPage;
- (void)candidateListAcceptCandidate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)textChanged:(id)arg1;
- (void)setChangedDelegate:(id)arg1;
- (id)changedDelegate;
- (void)textDidChange:(id)arg1;
- (void)textWillChange:(id)arg1;
- (void)textFrameChanged:(id)arg1;
- (void)setInitialDirection;
- (void)layoutHasChanged;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)updateLayout;
- (BOOL)hasMarkedText;
- (int)returnKeyType;
- (id)inputDelegate;
- (void)unmarkText;
- (void)deleteBackward;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInputTraits;
- (id)selectionView;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)remoteControlEvent:(id)arg1;
- (void)handleKeyEvent:(id)arg1;
- (void)ejectKeyDown;
- (void)cancelAllKeyEvents;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setShift:(BOOL)arg1;
- (void)updateLayoutForInterfaceOrientation:(int)arg1;

@end
