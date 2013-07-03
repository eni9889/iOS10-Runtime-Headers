/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIToolbar, UIWindow, UILabel, NSMutableArray, UIView, NSString, <UIModalViewDelegate>;

@interface UIModalView : UIView <UITextFieldDelegate> {
    <UIModalViewDelegate> *_delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyTextLabel;
    UILabel *_taglineTextLabel;
    float _startX;
    float _startY;
    id _context;
    int _cancelButton;
    int _defaultButton;
    int _firstOtherButton;
    UIToolbar *_toolbar;
    UIWindow *_originalWindow;
    UIWindow *_dimWindow;
    int _suspendTag;
    int _dismissButtonIndex;
    float _bodyTextHeight;
    NSMutableArray *_buttons;
    NSMutableArray *_textFields;
    UIView *_keyboard;
    UIView *_table;
    UIView *_dimView;
    UIView *_sheetView;
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int groupsTextFields : 1; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int popupFromPoint : 1; 
        unsigned int extra : 20; 
        unsigned int dontCallDismissDelegate : 1; 
        unsigned int useAutomaticKB : 1; 
        unsigned int shouldHandleFirstKeyUpEvent : 1; 
        unsigned int cancelWhenDoneAnimating : 1; 
    } _modalViewFlags;
}

@property BOOL groupsTextFields;
@property <UIModalViewDelegate> * delegate;
@property(copy) NSString * title;
@property(copy) NSString * message;
@property(readonly) int numberOfButtons;
@property int cancelButtonIndex;
@property(getter=isVisible,readonly) BOOL visible;

+ (BOOL)atLeastOneAlertVisible;
+ (id)topMostAlert;
+ (struct CGSize { float x1; float x2; })minimumSize;
+ (id)visibleAlert;
+ (id)_popupAlertBackground;
+ (void)noteOrientationChangingTo:(int)arg1;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)_setTextFieldsHidden:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isVisible;
- (void)_layoutIfNeeded;
- (void)layout;
- (id)message;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(int)arg1;
- (id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (id)taglineTextView;
- (id)bodyTextView;
- (void)presentSheetFromButtonBar:(id)arg1;
- (int)numberOfLinesInTitle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (BOOL)runsModal;
- (BOOL)blocksInteraction;
- (void)setBlocksInteraction:(BOOL)arg1;
- (int)suspendTag;
- (void)setSuspendTag:(int)arg1;
- (BOOL)dimsBackground;
- (void)setDimsBackground:(BOOL)arg1;
- (int)alertSheetStyle;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)setDimView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 fromBarButtonItem:(id)arg2;
- (BOOL)isBodyTextTruncated;
- (BOOL)_dimsBackground;
- (void)_repopupNoAnimation;
- (BOOL)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (BOOL)_manualKeyboardIsVisible;
- (BOOL)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (BOOL)_isSBAlert;
- (int)buttonCount;
- (id)_addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)destructiveButton;
- (void)setDestructiveButton:(id)arg1;
- (int)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (int)titleMaxLineCount;
- (id)bodyText;
- (void)setTaglineText:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)_createTitleLabelIfNeeded;
- (void)setGroupsTextFields:(BOOL)arg1;
- (BOOL)groupsTextFields;
- (void)_prepareToBeReplaced;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withMinimumHeight:(float)arg3;
- (float)_bottomVerticalInset;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (float)_buttonHeight;
- (float)_titleHorizontalInset;
- (void)_setupTitleStyle;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)_dimView;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)_appSuspended:(id)arg1;
- (void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (void)_hideAnimated:(BOOL)arg1;
- (void)_repopup;
- (void)_performPopup:(BOOL)arg1;
- (void)_setupInitialFrame;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_cleanupAfterPopupAnimation;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)_canShowAlerts;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)layoutAnimated:(BOOL)arg1;
- (BOOL)_needsKeyboard;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)buttons;
- (int)_currentOrientation;
- (void)_buttonClicked:(id)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)textFieldCount;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)setAlertSheetStyle:(int)arg1;
- (BOOL)requiresPortraitOrientation;
- (void)_setDefaultButton:(id)arg1;
- (id)_addButtonWithTitleText:(id)arg1;
- (id)buttonTitleAtIndex:(int)arg1;
- (id)keyboard;
- (BOOL)_isAnimating;
- (id)textField;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (int)numberOfButtons;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)setNumberOfRows:(int)arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (void)dismiss;
- (id)tableView;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)userDidCancelPopoverView:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)defaultButton;
- (id)textFieldAtIndex:(int)arg1;
- (float)_maxHeight;
- (int)defaultButtonIndex;
- (int)numberOfRows;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)setCancelButtonIndex:(int)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (int)cancelButtonIndex;
- (BOOL)canBecomeFirstResponder;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
