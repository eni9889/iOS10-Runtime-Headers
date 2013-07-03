/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSCondition;

@interface AVCallbackHandler : NSObject  {
    id _target;
    SEL _action;
    SEL _mainThreadAction;
    NSCondition *_condition;
    id _params;
}

@property id target;
@property SEL action;
@property SEL mainThreadAction;


- (void)setMainThreadAction:(SEL)arg1;
- (BOOL)hasParams;
- (id)waitForCallbackParams;
- (void)setCallbackParams:(id)arg1;
- (SEL)mainThreadAction;
- (id)init;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (id)target;

@end
