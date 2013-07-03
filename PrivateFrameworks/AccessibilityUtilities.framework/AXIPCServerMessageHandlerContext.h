/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AXIPCServerMessageHandlerContext : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    id _target;
    SEL _selector;
}

@property(readonly) id handler;
@property(readonly) id target;
@property(readonly) SEL selector;


- (id)initWithHandler:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (SEL)selector;
- (id)handler;
- (id)target;

@end
