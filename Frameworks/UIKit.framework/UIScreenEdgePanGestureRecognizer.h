/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIScreenEdgePanRecognizer;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {
    _UIScreenEdgePanRecognizer *_recognizer;
    int _edges;
}

@property int edges;


- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (int)edges;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (float)_edgeRegionSize;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEdges:(int)arg1;
- (BOOL)isRequiringLongPress;

@end
