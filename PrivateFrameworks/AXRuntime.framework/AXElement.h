/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@class AXUIElement, NSArray, NSString, AXElementGroup, AXElement;

@interface AXElement : NSObject <AXGroupable> {
    BOOL _representsScannerGroup;
    AXUIElement *_uiElement;
    AXElementGroup *_parentGroup;
}

@property(retain) AXUIElement * uiElement;
@property(readonly) struct __AXUIElement { }* elementRef;
@property(readonly) BOOL isSystemWideElement;
@property(getter=isPassivelyListeningForEvents) BOOL passivelyListeningForEvents;
@property(readonly) AXElement * currentApplication;
@property(readonly) AXElement * springBoardApplication;
@property(readonly) BOOL isScreenLocked;
@property(readonly) NSArray * visibleElements;
@property(readonly) AXElement * firstResponder;
@property(readonly) AXElement * firstElementInApplication;
@property(readonly) AXElement * firstElementInApplicationForFocus;
@property(readonly) NSString * bundleId;
@property(readonly) BOOL isSpringBoard;
@property(readonly) BOOL isAccessibleElement;
@property(readonly) BOOL isVisible;
@property(readonly) NSString * label;
@property(readonly) NSString * hint;
@property(readonly) NSString * value;
@property(readonly) struct CGPath { }* path;
@property(readonly) NSString * language;
@property(readonly) NSString * identifier;
@property(readonly) unsigned long long traits;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } textCursorFrame;
@property(readonly) struct CGPoint { float x1; float x2; } centerPoint;
@property(readonly) struct CGPoint { float x1; float x2; } visiblePoint;
@property(readonly) BOOL isValid;
@property(readonly) AXElement * touchContainer;
@property(readonly) BOOL isKeyboardKey;
@property(readonly) BOOL isTouchContainer;
@property(readonly) BOOL hasWebContent;
@property(readonly) BOOL hasTextEntry;
@property(readonly) BOOL isMathEquation;
@property(readonly) unsigned int windowContextId;
@property(readonly) NSArray * variantKeys;
@property(readonly) BOOL hasVariantKeys;
@property(readonly) NSArray * textOperations;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedTextRange;
@property(readonly) BOOL canPerformEscape;
@property(readonly) BOOL canPerformZoom;
@property(readonly) NSArray * supportedGestures;
@property(readonly) BOOL isScannerElement;
@property(readonly) BOOL representsScannerGroup;
@property(readonly) NSArray * scannerRootGroup;
@property(retain) AXElement * autoscrollTarget;
@property(readonly) BOOL isAutoscrolling;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property AXElementGroup * parentGroup;

+ (id)elementAtCoordinate:(struct CGPoint { float x1; float x2; })arg1 withVisualPadding:(BOOL)arg2;
+ (id)systemWideElement;
+ (id)elementWithAXUIElement:(struct __AXUIElement { }*)arg1;
+ (id)elementWithUIElement:(id)arg1;

- (void)scrollToBottom;
- (void)scrollToTop;
- (void)autoscrollInDirection:(int)arg1;
- (BOOL)isAutoscrolling;
- (BOOL)representsScannerGroup;
- (void)setUiElement:(id)arg1;
- (void)decreaseAutoscrollSpeed;
- (void)increaseAutoscrollSpeed;
- (void)pauseAutoscrolling;
- (void)setAutoscrollTarget:(id)arg1;
- (id)autoscrollTarget;
- (id)scannerRootGroup;
- (BOOL)isScannerElement;
- (BOOL)zoomOut;
- (BOOL)zoomIn;
- (BOOL)longPress;
- (id)supportedGestures;
- (BOOL)performAction:(int)arg1;
- (BOOL)supportsAction:(int)arg1;
- (BOOL)canScrollInAtLeastOneDirection;
- (void)scrollToVisible;
- (float)distanceToElement:(id)arg1;
- (BOOL)hasOnlyTraits:(unsigned long long)arg1;
- (id)textOperations;
- (BOOL)hasVariantKeys;
- (id)variantKeys;
- (BOOL)isTouchContainer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textCursorFrame;
- (struct CGPoint { float x1; float x2; })centerPoint;
- (id)hint;
- (BOOL)isAccessibleElement;
- (id)elementsMatchingText:(id)arg1;
- (BOOL)isSpringBoard;
- (id)firstElementInApplicationForFocus;
- (id)firstElementInApplication;
- (id)visibleElements;
- (id)springBoardApplication;
- (id)currentApplication;
- (void)setPassivelyListeningForEvents:(BOOL)arg1;
- (BOOL)isPassivelyListeningForEvents;
- (struct __AXUIElement { }*)elementRef;
- (void)setParentGroup:(id)arg1;
- (id)highestAncestorGroup;
- (BOOL)performAction:(int)arg1 withValue:(id)arg2;
- (struct CGPoint { float x1; float x2; })visiblePoint;
- (BOOL)press;
- (BOOL)canPerformZoom;
- (BOOL)canPerformEscape;
- (BOOL)canPerformActivate;
- (BOOL)isMathEquation;
- (BOOL)isKeyboardKey;
- (BOOL)hasTextEntry;
- (BOOL)hasWebContent;
- (BOOL)isMap;
- (float)distanceToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleFrame;
- (id)touchContainer;
- (BOOL)hasAnyTraits:(unsigned long long)arg1;
- (BOOL)hasAllTraits:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromContextId:(unsigned int)arg2;
- (unsigned int)windowContextId;
- (id)bundleId;
- (id)_axElementsForAXUIElements:(id)arg1;
- (id)elementForAttribute:(int)arg1;
- (BOOL)isSystemWideElement;
- (id)uiElement;
- (id)initWithUIElement:(id)arg1;
- (id)initWithAXUIElement:(struct __AXUIElement { }*)arg1;
- (id)previousElementsWithCount:(unsigned int)arg1;
- (id)nextElementsWithCount:(unsigned int)arg1;
- (id)parentGroup;
- (BOOL)isScreenLocked;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (BOOL)isVisible;
- (id)firstResponder;
- (id)label;
- (unsigned long long)traits;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (struct CGPath { }*)path;
- (id)language;
- (BOOL)isGroup;
- (void)setSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedTextRange;
- (id)value;

@end
