/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIPanGestureRecognizer, PKPassGroupView, _UIDynamicValueAnimation;

@interface PKPassGroupViewVerticalPanAnimator : NSObject  {
    _UIDynamicValueAnimation *_panningAnimation;
    UIPanGestureRecognizer *_gestureRecognizer;
    PKPassGroupView *_panningGroupView;
    float _panningViewTargetScale;
    struct CGPoint { 
        float x; 
        float y; 
    } _panningViewStartPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } _panningViewTargetPosition;
}

@property(retain) UIPanGestureRecognizer * gestureRecognizer;
@property(retain) PKPassGroupView * panningGroupView;
@property struct CGPoint { float x1; float x2; } panningViewStartPosition;
@property struct CGPoint { float x1; float x2; } panningViewTargetPosition;
@property float panningViewTargetScale;


- (float)panningViewTargetScale;
- (struct CGPoint { float x1; float x2; })panningViewTargetPosition;
- (id)panningGroupView;
- (id)_dynamicAnimationWithStart:(float)arg1 target:(float)arg2 initialVelocity:(float)arg3;
- (void)setPanningGroupView:(id)arg1;
- (void)dismissWithStartVelocity:(float)arg1 completion:(id)arg2;
- (void)setPanningViewTargetScale:(float)arg1;
- (void)setPanningViewTargetPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPanningViewStartPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutViewsWithY:(float)arg1;
- (struct CGPoint { float x1; float x2; })panningViewStartPosition;
- (id)initWithGroupView:(id)arg1;
- (void)dealloc;
- (id)gestureRecognizer;
- (void)setGestureRecognizer:(id)arg1;
- (void)stop;

@end
