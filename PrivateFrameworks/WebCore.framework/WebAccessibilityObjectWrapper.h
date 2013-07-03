/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase  {
    int m_isAccessibilityElement;
    unsigned long long m_accessibilityTraitsFromAncestor;
}

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)accessibilityTitleElement;
- (id)accessibilityHeaderElements;
- (id)accessibilityLinkedElement;
- (id)accessibilityURL;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityColumnRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityRowRange;
- (BOOL)accessibilityIsComboBox;
- (BOOL)accessibilityRequired;
- (id)accessibilityInvalidStatus;
- (id)accessibilityFlowToElements;
- (id)accessibilitySpeechHint;
- (id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityElementRect;
- (void)accessibilityMoveSelectionToMarker:(id)arg1;
- (void)accessibilityDecreaseSelection:(int)arg1;
- (void)accessibilityIncreaseSelection:(int)arg1;
- (id)accessibilityMathType;
- (BOOL)accessibilityIsMathTopObject;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathUnderObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)attributedStringForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })elementTextRange;
- (void)_accessibilityActivate;
- (struct CGPath { }*)_accessibilityPath;
- (id)textMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)previousMarkerForMarker:(id)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForTextMarkers:(id)arg1;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)accessibilityObjectForTextMarker:(id)arg1;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityTableAncestor;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityLandmarkAncestor;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityListAncestor;
- (id)accessibilityPlaceholderValue;
- (void)accessibilitySetPostedNotificationCallback:(int (*)())arg1 withContext:(void*)arg2;
- (struct CGPoint { float x1; float x2; })accessibilityClickPoint;
- (int)accessibilityMathLineThickness;
- (BOOL)accessibilityARIALiveRegionIsAtomic;
- (id)accessibilityARIARelevantStatus;
- (id)accessibilityARIALiveRegionStatus;
- (BOOL)accessibilityARIAIsBusy;
- (id)selectedTextMarker;
- (id)selectionRangeString;
- (id)elementsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)stringForTextMarkers:(id)arg1;
- (id)textMarkerRangeForSelection;
- (id)_stringForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 attributed:(BOOL)arg2;
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(BOOL)arg2;
- (id)textMarkerForPosition:(int)arg1;
- (struct PassRefPtr<WebCore::Range> { struct Range {} *x1; })_convertToDOMRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)positionForTextMarker:(id)arg1;
- (id)textMarkerRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_convertToNSRange:(struct Range { unsigned int x1; struct RefPtr<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; int x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; int x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (BOOL)_addAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { struct WebAccessibilityObjectWrapper { Class x_1_2_1; struct AccessibilityObject {} *x_1_2_2; int x_1_2_3; unsigned long long x_1_2_4; } *x_8_1_1; } x8; }*)arg1 toTextMarkerArray:(id)arg2;
- (void)accessibilityModifySelection:(int)arg1 increase:(BOOL)arg2;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToScreenSpace:(struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg1;
- (id)_accessibilityWebDocumentView;
- (struct AccessibilityTable { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { struct WebAccessibilityObjectWrapper { Class x_1_2_1; struct AccessibilityObject {} *x_1_2_2; int x_1_2_3; unsigned long long x_1_2_4; } *x_8_1_1; } x8; int x9; boolx10; int x11; struct Node {} *x12; struct RenderObject {} *x13; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_14_1_1; unsigned int x_14_1_2; unsigned int x_14_1_3; } x14; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_15_1_1; unsigned int x_15_1_2; unsigned int x_15_1_3; } x15; struct RefPtr<WebCore::AccessibilityObject> { struct AccessibilityObject {} *x_16_1_1; } x16; boolx17; }*)tableParent;
- (struct AccessibilityTableCell { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { struct WebAccessibilityObjectWrapper { Class x_1_2_1; struct AccessibilityObject {} *x_1_2_2; int x_1_2_3; unsigned long long x_1_2_4; } *x_8_1_1; } x8; int x9; boolx10; int x11; struct Node {} *x12; struct RenderObject {} *x13; int x14; }*)tableCellParent;
- (BOOL)stringValueShouldBeUsedInLabel;
- (BOOL)determineIsAccessibilityElement;
- (BOOL)isSVGGroupElement;
- (BOOL)containsUnnaturallySegmentedChildren;
- (id)accessibilityContainer;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axWebContentTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axContainedByListTrait;
- (id)accessibilityValue;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axLinkTrait;
- (BOOL)_accessibilityIsLandmarkRole:(int)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (BOOL)isAttachment;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)accessibilityPostProcessHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)accessibilityCanFuzzyHitTest;
- (BOOL)_prepareAccessibilityCall;
- (struct CGPoint { float x1; float x2; })convertPointToScreenSpace:(struct FloatPoint { float x1; float x2; }*)arg1;
- (BOOL)fileUploadButtonReturnsValueInTitle;
- (void)accessibilityPostedNotification:(id)arg1;
- (void)postInvalidStatusChangedNotification;
- (void)postLoadCompleteNotification;
- (void)postChildrenChangedNotification;
- (void)postLiveRegionChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postFocusChangeNotification;
- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { struct WebAccessibilityObjectWrapper { Class x_1_2_1; struct AccessibilityObject {} *x_1_2_2; int x_1_2_3; unsigned long long x_1_2_4; } *x_8_1_1; } x8; }*)arg1;
- (void)detach;
- (id)attachmentView;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityFocusedUIElement;
- (void)dealloc;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityIdentifier;
- (id)accessibilityLanguage;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint { float x1; float x2; })accessibilityActivationPoint;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)stringForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)accessibilityPath;
- (BOOL)accessibilityActivate;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)_accessibilityUnregister;
- (id)_accessibilityMathEquationRootObject;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3 sawAXElement:(BOOL*)arg4;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3;
- (id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1;
- (id)_accessibilityConvertTextMarkersToDataArray:(id)arg1;
- (id)_accessibilityMarkerPosition:(BOOL)arg1 withMarker:(id)arg2;
- (id)_accessibilityLinePosition:(BOOL)arg1 withMarker:(id)arg2;
- (id)_accessibilityProcessRootEquation;
- (void)_accessibilityModifySelection:(id)arg1 increase:(BOOL)arg2;
- (void)_performLiveRegionUpdate;
- (void)_repostWebSelectionChange;
- (void)_repostLoadCompleteNotification;
- (void)_repostWebNotificaton:(id)arg1;
- (void)_repostFocusChangeNotification;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_accessibilityParentView;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (BOOL)_accessibilitySupportsActivateAction;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_accessibilityIsScrollable;
- (id)_accessibilityDOMAttributes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (id)accessibilityMathEquation;
- (BOOL)_accessibilityShouldSpeakMathEquationTrait;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedNSRangeForObject;
- (BOOL)_accessibilityIsFirstSibling;
- (BOOL)_accessibilityIsLastSibling;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityShouldReleaseAfterUnregistration;
- (id)_accessibilityTextMarkerForPosition:(int)arg1;
- (BOOL)_accessibilityScrollToVisible;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (BOOL)_isCheckBox;
- (id)accessibilityMathPostscripts;
- (id)accessibilityMathPrescripts;
- (void)postScreenChangeNotification;
- (BOOL)isScreenReaderRunning;
- (id)screenReaderVersion;

@end
